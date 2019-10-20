#pragma once

#include "ui_jointocircledialog.h"
#include "etcfunctionclass.h"

namespace Ui {
class JoinToCircleDialog;
}

class NSUCircleMainPage;

class JoinToCircleDialog :
        public QDialog,
        public Ui::JoinToCircleDialog
{
    Q_OBJECT

public:
    explicit JoinToCircleDialog(QWidget* parent = nullptr, NSUCircleMainPage* _nsuMain = nullptr, StudentInfo* _stu = nullptr);
    ~JoinToCircleDialog();

    void joinButtonDisabled();
    void joinButtonDisabled(int circleNum);
    void plainTextEditHide();
    void connectMoreButtons();
    void setAlignTopToggledLayout();

private slots:
    void toggledCircleInfo_1();
    void toggledCircleInfo_2();
    void toggledCircleInfo_3();
    void toggledCircleInfo_4();
    void toggledCircleInfo_5();
    void toggledCircleInfo_6();
    void toggledCircleInfo_7();
    void toggledCircleInfo_8();
    void toggledCircleInfo_9();
    void toggledCircleInfo_10();
    void toggledCircleInfo_11();
    void toggledCircleInfo_12();
    void toggledCircleInfo_13();
    void toggledCircleInfo_14();
    void toggledCircleInfo_15();
    void toggledCircleInfo_16();
    void toggledCircleInfo_17();
    void toggledCircleInfo_18();
    void toggledCircleInfo_19();
    void toggledCircleInfo_20();
    void toggledCircleInfo_21();
    void toggledCircleInfo_22();
    void toggledCircleInfo_23();
    void toggledCircleInfo_24();
    void toggledCircleInfo_25();
    void toggledCircleInfo_26();
    void toggledCircleInfo_27();
    void toggledCircleInfo_28();
    void toggledCircleInfo_29();

    void on_joinCircleButton_clicked();
    void on_joinCircleButton_2_clicked();
    void on_joinCircleButton_3_clicked();
    void on_joinCircleButton_4_clicked();
    void on_joinCircleButton_5_clicked();
    void on_joinCircleButton_6_clicked();
    void on_joinCircleButton_7_clicked();
    void on_joinCircleButton_8_clicked();
    void on_joinCircleButton_9_clicked();
    void on_joinCircleButton_10_clicked();
    void on_joinCircleButton_11_clicked();
    void on_joinCircleButton_12_clicked();
    void on_joinCircleButton_13_clicked();
    void on_joinCircleButton_14_clicked();
    void on_joinCircleButton_15_clicked();
    void on_joinCircleButton_16_clicked();
    void on_joinCircleButton_17_clicked();
    void on_joinCircleButton_18_clicked();
    void on_joinCircleButton_19_clicked();
    void on_joinCircleButton_20_clicked();
    void on_joinCircleButton_21_clicked();
    void on_joinCircleButton_22_clicked();
    void on_joinCircleButton_23_clicked();
    void on_joinCircleButton_24_clicked();
    void on_joinCircleButton_25_clicked();
    void on_joinCircleButton_27_clicked();
    void on_joinCircleButton_28_clicked();
    void on_joinCircleButton_29_clicked();
    void on_joinCircleButton_30_clicked();

    void on_cancelButton_clicked();

private:
    Ui::JoinToCircleDialog* joinToCircleUi;
    NSUCircleMainPage* nsuMain;
    StudentInfo* stu;
};
