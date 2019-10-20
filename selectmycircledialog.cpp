#include "selectmycircledialog.h"
#include "nsucirclemainpage.h"
#include "memberofcirclepage.h"
#include "adminofcirclepage.h"
#include "progressloading.h"
#include "thread.h"
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QProcess>
#include <Windows.h>

SelectMyCircleDialog::SelectMyCircleDialog(QWidget* parent, StudentInfo* _stu, NSUCircleMainPage* _nsuMain, QString* circleName, QString* memberStatus, int count) :
    QDialog(parent),
    selMyCircleUi(new Ui::SelectMyCircleDialog)
{
    selMyCircleUi->setupUi(this);
    stu = *_stu;
    nsuMain = _nsuMain;

    int i = 0;
    while (i < count - 1)
    {
        QTreeWidgetItem* circleList = new QTreeWidgetItem(this->selMyCircleUi->circleListWidget);
        circleList->setText(0, *(circleName + i));
        circleList->setText(1, *(memberStatus + i));
        circleList->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
        i++;
    }

    connect(this->selMyCircleUi->okButton, SIGNAL(clicked()), this, SLOT(loadingThread()));
    connect(this->selMyCircleUi->circleListWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)), this, SLOT(loadingThread()));
}

SelectMyCircleDialog::~SelectMyCircleDialog()
{
    delete selMyCircleUi;
}


void SelectMyCircleDialog::loadingThread()
{
    if (selMyCircleUi->circleListWidget->currentItem()->text(1) == QString::fromLocal8Bit("승인대기")) QMessageBox::information(this, tr("Select my circle"), tr("It is waiting to approve from admin."), tr("OK"));
    else if (selMyCircleUi->circleListWidget->currentItem()->text(1) == QString::fromLocal8Bit("정식멤버"))
    {
        ::circleName = selMyCircleUi->circleListWidget->currentItem()->text(0);
        this->hide();
        this->nsuMain->hide();
        ::loading = new ProgressLoading;
        ::loading->show();

        CountThread* countThread = new CountThread(::circleName);
        ConnectToCirclePage<NoticeOfCircle>* noticeThread = new ConnectToCirclePage<NoticeOfCircle>(::circleName, 1, &::noticeOfCircle, "noticeSearch.txt", "noticeCount.txt", "noticeOfCircle.txt", QString::fromLocal8Bit("제목"), "", ::noticeCount);
        ConnectToCirclePage<ScheduleOfCircle>* scheduleThread = new ConnectToCirclePage<ScheduleOfCircle>(::circleName, 2, &::scheduleOfCircle, "scheduleDate.txt", "scheduleCount.txt", "scheduleOfCircle.txt", "", "", ::scheduleCount);
        ConnectToCirclePage<BoardOfCircle>* boardThread = new ConnectToCirclePage<BoardOfCircle>(::circleName, 3, &::boardOfCircle, "boardSearch.txt", "boardCount.txt", "boardOfCircle.txt", QString::fromLocal8Bit("제목"), "", ::boardCount);

        countThread->start();
        connect(countThread, SIGNAL(started()), countThread, SLOT(quit()));
        connect(countThread, SIGNAL(finished()), countThread, SLOT(deleteLater()));
        connect(countThread, SIGNAL(destroyed()), noticeThread, SLOT(start()));

        connect(noticeThread, SIGNAL(started()), noticeThread, SLOT(quit()));
        connect(noticeThread, SIGNAL(finished()), noticeThread, SLOT(deleteLater()));
        connect(noticeThread, SIGNAL(destroyed()), scheduleThread, SLOT(start()));

        connect(scheduleThread, SIGNAL(started()), scheduleThread, SLOT(quit()));
        connect(scheduleThread, SIGNAL(finished()), scheduleThread, SLOT(deleteLater()));
        connect(scheduleThread, SIGNAL(destroyed()), boardThread, SLOT(start()));

        connect(boardThread, SIGNAL(started()), boardThread, SLOT(quit()));
        connect(boardThread, SIGNAL(finished()), boardThread, SLOT(deleteLater()));
        connect(boardThread, SIGNAL(destroyed()), ::loading, SLOT(deleteLater()));
//        connect(boardThread, SIGNAL(destroyed()), ::loading->thread(), SLOT(quit()));
//        connect(::loading->thread(), SIGNAL(finished()), ::loading->thread(), SLOT(deleteLater()));
//        connect(::loading->thread(), SIGNAL(destroyed()), ::loading, SLOT(deleteLater()));
        connect(::loading, SIGNAL(destroyed()), this, SLOT(connectToMemberOfCirclePage()));
    }
    else
    {
        ::circleName = selMyCircleUi->circleListWidget->currentItem()->text(0);
        this->hide();
        this->nsuMain->hide();
        ::loading = new ProgressLoading;
        ::loading->show();

        CountThread* countThread = new CountThread(::circleName);
        ConnectToCirclePage<NoticeOfCircle>* noticeThread = new ConnectToCirclePage<NoticeOfCircle>(::circleName, 1, &::noticeOfCircle, "noticeSearch.txt", "noticeCount.txt", "noticeOfCircle.txt", QString::fromLocal8Bit("제목"), "", ::noticeCount);
        ConnectToCirclePage<ScheduleOfCircle>* scheduleThread = new ConnectToCirclePage<ScheduleOfCircle>(::circleName, 2, &::scheduleOfCircle, "scheduleDate.txt", "scheduleCount.txt", "scheduleOfCircle.txt", "", "", ::scheduleCount);
        ConnectToCirclePage<BoardOfCircle>* boardThread = new ConnectToCirclePage<BoardOfCircle>(::circleName, 3, &::boardOfCircle, "boardSearch.txt", "boardCount.txt", "boardOfCircle.txt", QString::fromLocal8Bit("제목"), "", ::boardCount);
        ConnectToCirclePage<MemberOfCircle>* memberThread = new ConnectToCirclePage<MemberOfCircle>(::circleName, 4, &::memberOfCircle, "memberSearch.txt", "memberCount.txt", "memberOfCircle.txt", QString::fromLocal8Bit("학번"), "", ::memberCount);

        countThread->start();
        connect(countThread, SIGNAL(started()), countThread, SLOT(quit()));
        connect(countThread, SIGNAL(finished()), countThread, SLOT(deleteLater()));
        connect(countThread, SIGNAL(destroyed()), noticeThread, SLOT(start()));

        connect(noticeThread, SIGNAL(started()), noticeThread, SLOT(quit()));
        connect(noticeThread, SIGNAL(finished()), noticeThread, SLOT(deleteLater()));
        connect(noticeThread, SIGNAL(destroyed()), scheduleThread, SLOT(start()));

        connect(scheduleThread, SIGNAL(started()), scheduleThread, SLOT(quit()));
        connect(scheduleThread, SIGNAL(finished()), scheduleThread, SLOT(deleteLater()));
        connect(scheduleThread, SIGNAL(destroyed()), boardThread, SLOT(start()));

        connect(boardThread, SIGNAL(started()), boardThread, SLOT(quit()));
        connect(boardThread, SIGNAL(finished()), boardThread, SLOT(deleteLater()));
        connect(boardThread, SIGNAL(destroyed()), memberThread, SLOT(start()));

        connect(memberThread, SIGNAL(started()), memberThread, SLOT(quit()));
        connect(memberThread, SIGNAL(finished()), memberThread, SLOT(deleteLater()));
        connect(memberThread, SIGNAL(destroyed()), ::loading, SLOT(deleteLater()));
//        connect(memberThread, SIGNAL(destroyed()), ::loading->thread(), SLOT(quit()));
//        connect(::loading->thread(), SIGNAL(finished()), ::loading->thread(), SLOT(deleteLater()));
//        connect(::loading->thread(), SIGNAL(destroyed()), ::loading, SLOT(deleteLater()));
        connect(::loading, SIGNAL(destroyed()), this, SLOT(connectToAdminOfCirclePage()));
    }
}

void SelectMyCircleDialog::connectToMemberOfCirclePage()
{
    NSUCircleMainPage* __nsuMain = this->nsuMain;
    ::__stu = this->stu;
    delete this;
    delete __nsuMain;
    MemberOfCirclePage* myCircle = new MemberOfCirclePage(nullptr, &::__stu, &::circleName, &::noticeOfCircle, &::scheduleOfCircle, &::boardOfCircle);
    myCircle->show();
}

void SelectMyCircleDialog::connectToAdminOfCirclePage()
{
    NSUCircleMainPage* __nsuMain = this->nsuMain;
    delete this;
    delete __nsuMain;
    AdminOfCirclePage* myAdmin = new AdminOfCirclePage(nullptr, &::__stu, &::circleName, &::noticeOfCircle, &::scheduleOfCircle, &::boardOfCircle, &::memberOfCircle);
    myAdmin->show();
}

void SelectMyCircleDialog::on_calcelButton_clicked()
{
    delete this;
}
