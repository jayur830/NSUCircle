#include "nsucirclemainpage.h"
#include "jointocircledialog.h"
#include "selectmycircledialog.h"
#include "deletememberdialog.h"
#include "nsucircle.h"
#include "thread.h"
#include "loadingform.h"
#include <QMessageBox>
#include <QTimer>

NSUCircleMainPage::NSUCircleMainPage(QWidget* parent, StudentInfo* _stu, QString _language) :
    QMainWindow(parent),
    nsuMainUi(new Ui::NSUCircleMainPage)
{
    nsuMainUi->setupUi(this);
    stu = *_stu;
    language = _language;
    translate(language, this->nsuMainUi, this);
    connect(this->nsuMainUi->myCircleHomeButton, SIGNAL(clicked()), this, SLOT(myCircleLoadingThread()));
}

NSUCircleMainPage::~NSUCircleMainPage()
{
    delete nsuMainUi;
}

void NSUCircleMainPage::myCircleLoadingThread()
{
    if (stu.numOfCircle <= 0) QMessageBox::information(this, tr("My circle"), tr("You no have circle you are joined. Once, join to circle."), tr("OK"));
    else
    {
        //SelectMyCircleDialog* selectMyCircle;
        LoadingForm* loading = new LoadingForm;
        loading->show();
        ShowMyCircleDialogThread* thread = new ShowMyCircleDialogThread(this->stu.stuNum);
        thread->start();
        connect(thread, SIGNAL(started()), thread, SLOT(quit()));
        connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
        connect(thread, SIGNAL(destroyed()), loading, SLOT(deleteLater()));
        connect(thread, SIGNAL(destroyed()), this, SLOT(showListOfCircleInTableWidget()));
        connect(loading, SIGNAL(destroyed()), this, SLOT(showSelectMyCircleDialog()));
    }
}

void NSUCircleMainPage::showListOfCircleInTableWidget()
{
    QFile file;

    file.setFileName("showListOfCircle.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if (file.isOpen())
    {
        int i = 0;
        count = 0;

        QTextStream fin(&file);
        while (!fin.atEnd())
        {
            fin >> circleName[i];
            fin >> memberStatus[i];
            i++;
            count++;
        }
        file.close();
        file.remove("showListOfCircle.txt");
        count--;
    }
}

void NSUCircleMainPage::on_joinToCircleButton_clicked()
{
    JoinToCircleDialog* joinToCircle = new JoinToCircleDialog(nullptr, this, &stu);
    joinToCircle->show();
}

void NSUCircleMainPage::showSelectMyCircleDialog()
{
    SelectMyCircleDialog* selectMyCircle = new SelectMyCircleDialog(nullptr, &this->stu, this, this->circleName, this->memberStatus, this->count);
    selectMyCircle->show();
}

void NSUCircleMainPage::on_deleteMemberOfNSUCircleButton_clicked()
{
    StudentInfo __stu = this->stu;
    DeleteMemberDialog* delMem = new DeleteMemberDialog(nullptr, &__stu, this);
    delMem->show();
    delMember = delMem;
}

void NSUCircleMainPage::on_logOutButton_clicked()
{
    QMessageBox::information(this, tr("Log out"), tr("You are logged out. See you later."), tr("OK"));
    QString __language = language;
    if (delMember != nullptr) delete delMember;
    delete this;
    NSUCircle* nsu = new NSUCircle(nullptr, __language);
    nsu->show();
}

void NSUCircleMainPage::on_translateButton_clicked()
{
    translate(this->nsuMainUi, this);
    if (delMember != nullptr) delMember->translate(language, delMember->delMemberUi, delMember);
}
