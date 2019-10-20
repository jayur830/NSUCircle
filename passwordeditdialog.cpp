#include "passwordeditdialog.h"
#include "nsucircle.h"
#include "thread.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QProcess>
#include <QDebug>

PasswordEditDialog::PasswordEditDialog(QWidget* parent, NSUCircle* _nsu, QString _id, QString _stuNum, QString _name) :
    QDialog(parent),
    passwordEditUi(new Ui::PasswordEditDialog)
{
    passwordEditUi->setupUi(this);
    passwordEditUi->currentPasswordLineEdit->setEchoMode(QLineEdit::Password);
    passwordEditUi->newPasswordLineEdit->setEchoMode(QLineEdit::Password);
    passwordEditUi->confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);
    nsu = _nsu;
    id = _id;
    stuNum = _stuNum;
    name = _name;

    connect(this->passwordEditUi->okButton, SIGNAL(clicked()), this, SLOT(loadingThread()));
}

PasswordEditDialog::~PasswordEditDialog()
{
    delete passwordEditUi;
}

void PasswordEditDialog::loadingThread()
{
    if (passwordEditUi->currentPasswordLineEdit->text() == "" || passwordEditUi->newPasswordLineEdit->text() == "" || passwordEditUi->confirmPasswordLineEdit->text() == "")
        QMessageBox::information(this, tr("Change password"), tr("Please complete each item."), tr("OK"));
    else
    {
        if (passwordEditUi->newPasswordLineEdit->text() != passwordEditUi->confirmPasswordLineEdit->text())
            QMessageBox::information(this, tr("Change password"), tr("There is no matching between Password and Confirm password."), tr("OK"));
        else
        {
            LoadingForm* loading = new LoadingForm;
            loading->show();
            PasswordEditThread* thread = new PasswordEditThread(this->passwordEditUi, id, stuNum, name);
            thread->start();
            connect(thread, SIGNAL(started()), thread, SLOT(quit()));
            connect(thread, SIGNAL(finished()), loading, SLOT(deleteLater()));
            connect(loading, SIGNAL(destroyed()), thread, SLOT(deleteLater()));
            connect(thread, SIGNAL(destroyed()), this, SLOT(changePassword()));
        }
    }
}

void PasswordEditDialog::changePassword()
{
    QString boolText;
    QFile file;
    file.setFileName("currentPasswordSearch.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);

    if (file.isOpen())
    {
        QTextStream fin(&file);
        fin >> boolText;
        file.close();
        file.remove("currentPasswordSearch.txt");

        if (boolText == "true")
        {
            QMessageBox::information(this, tr("Change password"), tr("Your password has been changed."), tr("OK"));
            delete this;
        }
        else QMessageBox::information(this, tr("Change password"), tr("The current passwords do not match."), tr("OK"));
    }
}

void PasswordEditDialog::on_cancelButton_clicked()
{
    delete this;
}
