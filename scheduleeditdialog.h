#pragma once

#include "ui_scheduleeditdialog.h"

namespace Ui {
class ScheduleEditDialog;
}

class QTreeWidget;
class AdminOfCirclePage;

class ScheduleEditDialog :
        public QDialog,
        public Ui::ScheduleEditDialog
{
    Q_OBJECT

public:
    explicit ScheduleEditDialog(QWidget* parent = nullptr, AdminOfCirclePage* _myAdmin = nullptr, QTreeWidget* _list = nullptr, QDateEdit* _date = nullptr, QString _circleName = "", int _index = NULL);
    ~ScheduleEditDialog();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::ScheduleEditDialog* scheduleEditUi;
    AdminOfCirclePage* myAdmin;
    QTreeWidget* list;
    QDateEdit* date;
    QTime time;
    QString circleName, __date, __time, __content;
    int index;
};
