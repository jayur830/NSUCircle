#include "findpassworddialog.h"
#include "nsucircle.h"
#include "passwordeditdialog.h"
#include "thread.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QProcess>

FindPasswordDialog::FindPasswordDialog(QWidget* parent, NSUCircle* _nsu) :
    QDialog(parent),
    findPasswordUi(new Ui::FindPasswordDialog)
{
    findPasswordUi->setupUi(this);
    nsu = _nsu;

    connect(this->findPasswordUi->okButton, SIGNAL(clicked()), this, SLOT(loadingThread()));
}

FindPasswordDialog::~FindPasswordDialog()
{
    delete findPasswordUi;
}

void FindPasswordDialog::loadingThread()
{
    if (findPasswordUi->idLineEdit->text() == "" || findPasswordUi->stuNumLineEdit->text() == "" || findPasswordUi->nameLineEdit->text() == "") QMessageBox::information(this, tr("Find Password"), tr("Please complete each item."), tr("OK"));
    else
    {
        LoadingForm* loading = new LoadingForm;
        loading->show();
        FindPasswordThread* thread = new FindPasswordThread(this->findPasswordUi);
        thread->start();
        connect(thread, SIGNAL(started()), thread, SLOT(quit()));
        connect(thread, SIGNAL(finished()), loading, SLOT(deleteLater()));
        connect(loading, SIGNAL(destroyed()), thread, SLOT(deleteLater()));
        connect(thread, SIGNAL(destroyed()), this, SLOT(findPassword()));
    }
}

void FindPasswordDialog::findPassword()
{
    QFile file;

    file.setFileName("searchResult.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);

    if (file.isOpen())
    {
        QString boolText;
        QTextStream fin(&file);
        fin >> boolText;
        file.close();
        file.remove("searchResult.txt");

        if (boolText == "true")
        {
            NSUCircle* __nsu = this->nsu;
            QString _id = findPasswordUi->idLineEdit->text();
            QString _stuNum = findPasswordUi->stuNumLineEdit->text();
            QString _name = findPasswordUi->nameLineEdit->text();
            delete this;
            PasswordEditDialog* passwordEdit = new PasswordEditDialog(nullptr, __nsu, _id, _stuNum, _name);
            passwordEdit->show();
        }
        else QMessageBox::information(this, tr("Find Password"), tr("There is no matching information for your ID, student number, and name."), tr("OK"));
    }
}

void FindPasswordDialog::on_cancelButton_clicked()
{
    delete this;
}
