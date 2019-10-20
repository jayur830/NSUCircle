#pragma once

#include "ui_selectreasonofsecessionincircle.h"
#include "etcfunctionclass.h"

namespace Ui {
class SelectReasonOfSecessionInCircle;
}

class MemberOfCirclePage;
class NSUCircleMainPage;

class SelectReasonOfSecessionInCircle :
        public QDialog,
        public Ui::SelectReasonOfSecessionInCircle
{
    Q_OBJECT

public:
    explicit SelectReasonOfSecessionInCircle(QWidget *parent = nullptr, MemberOfCirclePage* _myCircle = nullptr, StudentInfo* _stu = nullptr, QString* _circleName = nullptr);
    ~SelectReasonOfSecessionInCircle();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::SelectReasonOfSecessionInCircle* selectReasonUi;
    MemberOfCirclePage* myCircle;
    StudentInfo stu;
    QString circleName;
};
