#pragma once

#include "ui_noticeeditdialog.h"
//#include "etcfunctionclass.h"

namespace Ui {
class NoticeEditDialog;
}

class QTreeWidget;
class AdminOfCirclePage;

class NoticeEditDialog :
        public QDialog,
        public Ui::NoticeEditDialog
{
    Q_OBJECT

public:
    explicit NoticeEditDialog(QWidget* parent = nullptr, AdminOfCirclePage* _myAdmin = nullptr, QTreeWidget* _list = nullptr, QString _circleName = "", int _index = NULL, QString _comboBoxText = "", QString _searchLineEditText = "");
    ~NoticeEditDialog();

//    virtual void showListNoticeOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<NoticeOfCircle>* noticeOfCircle = nullptr);
//    virtual void showScheduleOfCircle(QString date = "", QString circleName = "", QTreeWidget* item = nullptr, QVector<ScheduleOfCircle>* scheduleOfCircle = nullptr);
//    virtual void showListBoardOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<BoardOfCircle>* boardOfCircle = nullptr);
//    virtual void showListMemberOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<MemberOfCircle>* memberOfCircle = nullptr);

//    virtual void processRun(const char* file);

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();
    void on_noticeDeleteButton_clicked();

private:
    Ui::NoticeEditDialog* noticeEditUi;
    AdminOfCirclePage* myAdmin;
    QTreeWidget* list;
    QString circleName;
    int index;
    QString comboBoxText;
    QString searchLineEditText;
};
