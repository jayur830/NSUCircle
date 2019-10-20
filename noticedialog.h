#pragma once

#include "ui_noticedialog.h"

namespace Ui {
class NoticeDialog;
}

class MemberOfCirclePage;

class NoticeDialog :
        public QDialog,
        public Ui::NoticeDialog
{
    Q_OBJECT

public:
    explicit NoticeDialog(QWidget* parent = nullptr, MemberOfCirclePage* _myCircle = nullptr, int _index = NULL);
    ~NoticeDialog();

private slots:
    void on_cancelButton_clicked();

private:
    Ui::NoticeDialog* noticeDialogUi;
};
