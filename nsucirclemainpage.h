#pragma once

#include "ui_nsucirclemainpage.h"
#include "etcfunctionclass.h"
#include "translate.h"

namespace Ui {
class NSUCircleMainPage;
}

class JoinToCircleDialog;
class DeleteMemberDialog;

class NSUCircleMainPage :
        public QMainWindow,
        public Ui::NSUCircleMainPage,
        virtual public EtcFunctionClass,
        virtual public Translation<Ui::NSUCircleMainPage, NSUCircleMainPage>
{
    Q_OBJECT

public:
    NSUCircleMainPage(QWidget* parent = nullptr, StudentInfo* _stu = nullptr, QString _language = "");
    ~NSUCircleMainPage();

    Ui::NSUCircleMainPage *nsuMainUi;
    JoinToCircleDialog* joinToCircle;
    QTreeWidget* listOfCircle;

private slots:
    void myCircleLoadingThread();
    void on_joinToCircleButton_clicked();
    void showSelectMyCircleDialog();
    void on_deleteMemberOfNSUCircleButton_clicked();
    void on_logOutButton_clicked();
    void showListOfCircleInTableWidget();
    void on_translateButton_clicked();

private:
    StudentInfo stu;
    DeleteMemberDialog* delMember = nullptr;
    QString circleName[10], memberStatus[10];
    int count;
};
