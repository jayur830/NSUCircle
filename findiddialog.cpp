#include "findiddialog.h"
#include "nsucircle.h"
#include "thread.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QProcess>

FindIDDialog::FindIDDialog(QWidget* parent, NSUCircle* _nsu) :
    QDialog(parent),
    findIdUi(new Ui::FindIDDialog)
{
    findIdUi->setupUi(this);
    nsu = _nsu;

    this->setObjectName("FindID");
    translate(language, this->findIdUi, this);

    connect(this->findIdUi->okButton, SIGNAL(clicked()), this, SLOT(loadingThread()));
}

FindIDDialog::~FindIDDialog()
{
    delete findIdUi;
}

void FindIDDialog::loadingThread()
{
    if (findIdUi->stuNumLineEdit->text() == "" || findIdUi->nameLineEdit->text() == "") QMessageBox::information(this, tr("Find ID"), tr("Please complete each item."), tr("OK"));
    else
    {
        LoadingForm* loading = new LoadingForm;
        loading->show();
        FindIDThread* thread = new FindIDThread(this->findIdUi);
        thread->start();
        connect(thread, SIGNAL(started()), thread, SLOT(quit()));
        connect(thread, SIGNAL(finished()), loading, SLOT(deleteLater()));
        connect(loading, SIGNAL(destroyed()), thread, SLOT(deleteLater()));
        connect(thread, SIGNAL(destroyed()), this, SLOT(findId()));
    }
}

void FindIDDialog::findId()
{
    QFile file;
    file.setFileName("searchResult.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);

    if (file.isOpen())
    {
        QString id;
        QTextStream fin(&file);
        fin >> id;
        file.close();
        file.remove("searchResult.txt");
        QMessageBox::information(this, tr("Find ID"), tr("Student %1's ID is %2.").arg(findIdUi->nameLineEdit->text()).arg(id), tr("OK"));
        delete this;
    }
    else QMessageBox::information(this, tr("Find ID"), tr("There is no matching ID for the student number and name you entered."), tr("OK"));
}

void FindIDDialog::on_cancelButton_clicked()
{
    delete this;
}
