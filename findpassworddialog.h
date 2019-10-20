#pragma once

#include "ui_findpassworddialog.h"

namespace Ui {
class FindPasswordDialog;
}

class NSUCircle;

class FindPasswordDialog :
        public QDialog,
        public Ui::FindPasswordDialog
{
    Q_OBJECT

public:
    explicit FindPasswordDialog(QWidget* parent = nullptr, NSUCircle* _nsu = nullptr);
    ~FindPasswordDialog();

private slots:
    void loadingThread();
    void findPassword();
    void on_cancelButton_clicked();

private:
    Ui::FindPasswordDialog* findPasswordUi;
    NSUCircle* nsu;
};
