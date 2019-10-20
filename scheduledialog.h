#pragma once

#include "ui_scheduledialog.h"

namespace Ui {
class ScheduleDialog;
}

class MemberOfCirclePage;

class ScheduleDialog :
        public QDialog,
        public Ui::ScheduleDialog
{
    Q_OBJECT

public:
    explicit ScheduleDialog(QWidget* parent = nullptr, MemberOfCirclePage* _myCircle = nullptr, QDateEdit* _date = nullptr, int _index = NULL);
    ~ScheduleDialog();

private slots:
    void on_cancelButton_clicked();

private:
    Ui::ScheduleDialog* scheduleUi;
    MemberOfCirclePage* myCircle;
    QDateEdit* date;
    int index;
};
