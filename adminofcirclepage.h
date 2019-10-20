#pragma once

#include "ui_adminofcirclepage.h"
#include "etcfunctionclass.h"
#include "showlistwidget.h"

namespace Ui {
class AdminOfCirclePage;
}

class QMessageBox;
class QTextStream;
class QFile;
class QDate;
class NoticeWriteDialog;
class NoticeEditDialog;
class ScheduleUploadDialog;
class ScheduleEditDialog;
class BoardOfCircleDialog;
class MemberOfCircleDialog;

class AdminOfCirclePage :
        public QDialog,
        public Ui::AdminOfCirclePage,
        virtual public EtcFunctionClass
{
    Q_OBJECT

public:
    explicit AdminOfCirclePage(
                               QWidget* parent = nullptr,
                               StudentInfo* _stu = nullptr,
                               QString* _circleName = nullptr,
                               QVector<NoticeOfCircle>* _noticeOfCircle = nullptr,
                               QVector<ScheduleOfCircle>* _scheduleOfCircle = nullptr,
                               QVector<BoardOfCircle>* _boardOfCircle = nullptr,
                               QVector<MemberOfCircle>* _memberOfCircle = nullptr);
    ~AdminOfCirclePage();

    QVector<NoticeOfCircle> noticeOfCircle;
    QVector<ScheduleOfCircle> scheduleOfCircle;
    QVector<BoardOfCircle> boardOfCircle;
    QVector<MemberOfCircle> memberOfCircle;
    ShowListWidget<NoticeOfCircle>* notice;
    ShowListWidget<BoardOfCircle>* board;
    ShowListWidget<MemberOfCircle>* member;

    template<typename Type>
    void setupTreeList(QVector<Type>& t, QTreeWidget* _list);
    void createListWidget(QTreeWidgetItem*, QVector<NoticeOfCircle>&, int);
    void createListWidget(QTreeWidgetItem*, QVector<ScheduleOfCircle>&, int);
    void createListWidget(QTreeWidgetItem*, QVector<BoardOfCircle>&, int);
    void createListWidget(QTreeWidgetItem*, QVector<MemberOfCircle>&, int);

private slots:
    void on_noticeList_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_noticeRefreshButton_clicked();
    void on_noticeSearchButton_clicked();
    void on_noticeNewWriteButton_clicked();
    void on_calendarWidget_clicked(const QDate &date);
    void on_dateEdit_userDateChanged(const QDate &date);
    void on_scheduleList_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_scheduleRefreshButton_clicked();
    void on_scheduleUploadButton_clicked();
    void on_scheduleDeleteButton_clicked();
    void on_boardList_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_boardRefreshButton_clicked();
    void on_boardSearchButton_clicked();
    void on_deleteBoardButton_clicked();
    void on_memberList_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_memberRefreshButton_clicked();
    void on_memberSearchButton_clicked();
    void on_deleteCircleButton_clicked();
    void on_exitMyAdminButton_clicked();

private:
    Ui::AdminOfCirclePage* myAdminUi;
    StudentInfo stu;
    QString circleName;
};
