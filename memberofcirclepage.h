#pragma once

#include "ui_memberofcirclepage.h"
//#include "etcfunctionclass.h"
#include "showlistwidget.h"

namespace Ui {
class MemberOfCirclePage;
}

class QTreeWidgetItem;
class NoticeDialog;
class ScheduleDialog;
class BoardDialog;
class BoardQuestionDialog;
class NSUCircleMainPage;
class DeleteCircleDialog;

class MemberOfCirclePage :
        public QMainWindow,
        public Ui::MemberOfCirclePage,
        virtual public EtcFunctionClass
{
    Q_OBJECT

public:
    explicit MemberOfCirclePage(
            QWidget* parent = nullptr,
            StudentInfo* _stu = nullptr,
            QString* _circleName = nullptr,
            QVector<NoticeOfCircle>* _noticeOfCircle = nullptr,
            QVector<ScheduleOfCircle>* _scheduleOfCircle = nullptr,
            QVector<BoardOfCircle>* _boardOfCircle = nullptr);
    ~MemberOfCirclePage();

    QVector<NoticeOfCircle> noticeOfCircle;
    QVector<ScheduleOfCircle> scheduleOfCircle;
    QVector<BoardOfCircle> boardOfCircle;
    ShowListWidget<NoticeOfCircle>* notice;
    ShowListWidget<BoardOfCircle>* board;

    template<typename Type>
    void setupTreeList(QVector<Type>& t, QTreeWidget* _list);
    void createListWidget(QTreeWidgetItem*, QVector<NoticeOfCircle>&, int);
    void createListWidget(QTreeWidgetItem*, QVector<ScheduleOfCircle>&, int);
    void createListWidget(QTreeWidgetItem*, QVector<BoardOfCircle>&, int);

private slots:

    void on_deleteMyCircleButton_clicked();
    void on_exitMyCircleButton_clicked();

    void on_noticeListWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_boardListWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_noticeRefreshButton_clicked();

    void on_boardRefreshButton_clicked();

    void on_noticeSearchButton_clicked();

    void on_boardSearchButton_clicked();

    void on_boardWriteButton_clicked();

    void on_deleteBoardButton_clicked();

    void on_scheduleRefreshButton_clicked();

    void on_circleCalendarWidget_clicked(const QDate &date);

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_scheduleListWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

private:
    Ui::MemberOfCirclePage* myCircleUi;
    StudentInfo stu;    
    QString circleName;
};
