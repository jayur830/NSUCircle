#pragma once

#include "ui_memberofcircledialog.h"
#include "studentinfo.h"

namespace Ui {
class MemberOfCircleDialog;
}

class QTreeWidget;
class QTreeWidgetItem;
class AdminOfCirclePage;
class DeleteCircleDialog;

class MemberOfCircleDialog :
        public QDialog,
        public Ui::MemberOfCircleDialog
{
    Q_OBJECT

public:
    explicit MemberOfCircleDialog(QWidget* parent = nullptr, AdminOfCirclePage* _myAdmin = nullptr, StudentInfo* _stu = nullptr, QTreeWidget* _list = nullptr, QTreeWidgetItem* _item = nullptr, QString _circleName = "", QString _reason = "", QString _promise = "", QString _comboBoxText = "", QString _searchLineEditText = "", int _index = NULL);
    ~MemberOfCircleDialog();

    void settingToMemberDialog();

private slots:
    void on_beAdminButton_clicked();
    void on_deleteMemberButton_clicked();
    void on_approvalButton_clicked();
    void on_disapprovalButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::MemberOfCircleDialog* memberOfCircleUi;
    AdminOfCirclePage* myAdmin;
    StudentInfo* stu;
    QTreeWidget* list;
    QTreeWidgetItem* item;
    QString circleName, reason, promise;
    QString comboBoxText;
    QString searchLineEditText;
    int index;
};
