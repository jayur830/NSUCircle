#pragma once

#include "ui_deletecircledialog.h"
#include "etcfunctionclass.h"

namespace Ui {
class DeleteCircleDialog;
}

class MemberOfCirclePage;
class AdminOfCirclePage;
class MemberOfCircleDialog;

class DeleteCircleDialog :
        public QDialog,
        public Ui::DeleteCircleDialog,
        virtual public EtcFunctionClass
{
    Q_OBJECT

public:
    explicit DeleteCircleDialog(QWidget *parent = nullptr, MemberOfCirclePage* _myCircle = nullptr, AdminOfCirclePage* _myAdmin = nullptr, MemberOfCircleDialog* member = nullptr, StudentInfo* _stu = nullptr, QString* _circleName = nullptr, int _status = NULL, int _index = NULL, QTreeWidget* _item = nullptr, QString _comboBoxText = "", QString _searchLineEditText = "");
    ~DeleteCircleDialog();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::DeleteCircleDialog* delCircleUi;
    MemberOfCirclePage* myCircle;
    AdminOfCirclePage* myAdmin;
    MemberOfCircleDialog* member;
    StudentInfo stu;
    QString circleName;
    int status;
    int index;
    QTreeWidget* item;
    QString comboBoxText, searchLineEditText;
};
