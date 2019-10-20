#pragma once

#include "ui_selectmycircledialog.h"
#include "etcfunctionclass.h"
#include "progressloading.h"

namespace Ui {
class SelectMyCircleDialog;
}

class NSUCircleMainPage;
class MemberOfCirclePage;
class AdminOfCirclePage;

class SelectMyCircleDialog :
        public QDialog,
        public Ui::SelectMyCircleDialog
{
    Q_OBJECT

public:
    explicit SelectMyCircleDialog(QWidget* parent = nullptr, StudentInfo* _stu = nullptr, NSUCircleMainPage* _nsuMain = nullptr, QString* circleName = nullptr, QString* memberStatus = nullptr, int count = NULL);
    ~SelectMyCircleDialog();

    Ui::SelectMyCircleDialog* selMyCircleUi;

private slots:
    void loadingThread();
    void connectToMemberOfCirclePage();
    void connectToAdminOfCirclePage();
//    void on_circleListWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_calcelButton_clicked();

private:
    StudentInfo stu;
    NSUCircleMainPage* nsuMain;

signals:
    void noticeProcessed();
    void boardProcessed();
    void memberProcessed();
};

static int value;
static int maximum;
static int noticeCount, scheduleCount, boardCount, memberCount;
static QString circleName;
static StudentInfo __stu;
static ProgressLoading* loading;
static QVector<NoticeOfCircle> noticeOfCircle;
static QVector<ScheduleOfCircle> scheduleOfCircle;
static QVector<BoardOfCircle> boardOfCircle;
static QVector<MemberOfCircle> memberOfCircle;

