#pragma once

#include "ui_deletememberdialog.h"
#include "etcfunctionclass.h"
#include "translate.h"

namespace Ui
{
class DeleteMemberDialog;
}

class NSUCircleMainPage;

class DeleteMemberDialog :
        public QDialog,
        public Ui::DeleteMemberDialog,
        virtual public Translation<Ui::DeleteMemberDialog, DeleteMemberDialog>
{
    Q_OBJECT

public:
    explicit DeleteMemberDialog(QWidget *parent = nullptr, StudentInfo* _stu = nullptr, NSUCircleMainPage* _nsuMain = nullptr, QString _language = "");
    ~DeleteMemberDialog();

    void deleteMemberOkButtonEnabled();

    Ui::DeleteMemberDialog* delMemberUi;

private slots:
    void loadingThread();
    void textChanged();
    void secession();
    void on_deleteMemberCancelButton_clicked();

private:
    QList<QLineEdit*> _editList;
    StudentInfo stu;
    NSUCircleMainPage* nsuMain;
};
