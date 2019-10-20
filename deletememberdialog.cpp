#include "deletememberdialog.h"
#include "nsucirclemainpage.h"
#include "nsucircle.h"
#include "thread.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QProcess>

DeleteMemberDialog::DeleteMemberDialog(QWidget* parent, StudentInfo* _stu, NSUCircleMainPage* _nsuMain, QString _language) :
    QDialog(parent),
    delMemberUi(new Ui::DeleteMemberDialog)
{
    delMemberUi->setupUi(this);
    stu = *_stu;
    nsuMain = _nsuMain;
    language = _language;
    translate(language, this->delMemberUi, this);
    delMemberUi->deleteMemberLineEdit->setEchoMode(QLineEdit::Password);
    deleteMemberOkButtonEnabled();
    connect(this->delMemberUi->deleteMemberOkButton, SIGNAL(clicked()), this, SLOT(loadingThread()));
}

DeleteMemberDialog::~DeleteMemberDialog()
{
    delete delMemberUi;
}

void DeleteMemberDialog::loadingThread()
{
    if (delMemberUi->deleteMemberLineEdit->text() != stu.Password) QMessageBox::information(this, tr("Password error"), tr("Passwords do not match."), tr("OK"));
    else
    {
        QMessageBox msg;
        msg.setButtonText(QMessageBox::Yes, tr("Yes"));
        msg.setButtonText(QMessageBox::No, tr("No"));
        QMessageBox::StandardButton selectDeleteMember = msg.question(this, tr("Secession"), tr("If you'll secession, you'll lost all information included circle info. Nevertheless will you secession?"), QMessageBox::Yes|QMessageBox::No);
        if (selectDeleteMember == QMessageBox::Yes)
        {
            LoadingForm* loading = new LoadingForm;
            loading->show();
            SecessionThread* thread = new SecessionThread(stu.stuNum);
            thread->start();
            connect(thread, SIGNAL(started()), thread, SLOT(quit()));
            connect(thread, SIGNAL(finished()), loading, SLOT(deleteLater()));
            connect(loading, SIGNAL(destroyed()), thread, SLOT(deleteLater()));
            connect(thread, SIGNAL(destroyed()), this, SLOT(secession()));
        }
    }
}

void DeleteMemberDialog::deleteMemberOkButtonEnabled()
{
    connect(delMemberUi->deleteMemberLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    _editList.append(delMemberUi->deleteMemberLineEdit);
}

void DeleteMemberDialog::textChanged()
{
    int modified_count = 0;
    for(int i = 0; i < _editList.length(); i++)
    {
        if(!_editList[i]->text().isEmpty()) modified_count++;
    }
    if (modified_count == 1) delMemberUi->deleteMemberOkButton->setEnabled(true);
    else delMemberUi->deleteMemberOkButton->setEnabled(false);
}

void DeleteMemberDialog::secession()
{
    QMessageBox::information(this, tr("Secession"), tr("Thank you for using NSUCircle meantime. Goodbye."), tr("OK"));
    NSUCircleMainPage* _nsuMain = nsuMain;
    QString __language = language;
    delete this;
    delete _nsuMain;
    NSUCircle* nsu = new NSUCircle(nullptr, __language);
    nsu->show();
}

void DeleteMemberDialog::on_deleteMemberCancelButton_clicked()
{
    delete this;
}
