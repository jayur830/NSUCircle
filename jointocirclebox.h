#pragma once

#include "ui_jointocirclebox.h"
#include "etcfunctionclass.h"

namespace Ui {
class JoinToCircleBox;
}

class JoinToCircleDialog;
class NSUCircleMainPage;

class JoinToCircleBox :
        public QDialog,
        public Ui::JoinToCircleBox
{
    Q_OBJECT

public:
    explicit JoinToCircleBox(QWidget* parent = nullptr, NSUCircleMainPage* _nsuMain = nullptr, JoinToCircleDialog* _joinToCircle = nullptr, StudentInfo* _stu = nullptr, int _circleNum = NULL, QString _circleName = nullptr);
    ~JoinToCircleBox();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::JoinToCircleBox* circleBoxUi;
    NSUCircleMainPage* nsuMain;
    JoinToCircleDialog* joinToCircleDialog;
    StudentInfo* stu;
    int circleNum;
    QString circleName;
};
