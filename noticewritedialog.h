#pragma once

#include "ui_noticewritedialog.h"
//#include "etcfunctionclass.h"

namespace Ui {
class NoticeWriteDialog;
}

class QTreeWidget;
class QTreeWidgetItem;
class AdminOfCirclePage;

class NoticeWriteDialog :
        public QDialog,
        public Ui::NoticeWriteDialog
{
    Q_OBJECT

public:
    explicit NoticeWriteDialog(QWidget* parent = nullptr, AdminOfCirclePage* _myAdmin = nullptr, QTreeWidget* _list = nullptr, QString _name = "", QString _circleName = "", QString _comboBoxText = "", QString _searchLineEditText = "");
    ~NoticeWriteDialog();

//    virtual void showListNoticeOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<NoticeOfCircle>* noticeOfCircle = nullptr);
//    virtual void showScheduleOfCircle(QString date = "", QString circleName = "", QTreeWidget* item = nullptr, QVector<ScheduleOfCircle>* scheduleOfCircle = nullptr);
//    virtual void showListBoardOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<BoardOfCircle>* boardOfCircle = nullptr);
//    virtual void showListMemberOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<MemberOfCircle>* memberOfCircle = nullptr);

//    virtual void processRun(const char* file);

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::NoticeWriteDialog* noticeWriteUi;
    AdminOfCirclePage* myAdmin;
    QTreeWidget* list;
    QString name;
    QString circleName;
    QString comboBoxText;
    QString searchLineEditText;
};
