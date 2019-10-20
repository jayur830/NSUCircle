#pragma once

#include "ui_scheduleuploaddialog.h"

namespace Ui {
class ScheduleUploadDialog;
}

class QTreeWidget;
class AdminOfCirclePage;

class ScheduleUploadDialog :
        public QDialog,
        public Ui::ScheduleUploadDialog
{
    Q_OBJECT

public:
    explicit ScheduleUploadDialog(QWidget* parent = nullptr, AdminOfCirclePage* _myAdmin = nullptr, QTreeWidget* _list = nullptr, QDateEdit* _date = nullptr, QString _circleName = "");
    ~ScheduleUploadDialog();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::ScheduleUploadDialog* scheduleUi;
    AdminOfCirclePage* myAdmin;
    QTreeWidget* list;
    QDateEdit* date;
    QString circleName;
};
