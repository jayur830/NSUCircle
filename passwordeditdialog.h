#pragma once

#include "ui_passwordeditdialog.h"

namespace Ui {
class PasswordEditDialog;
}

class NSUCircle;

class PasswordEditDialog :
        public QDialog,
        public Ui::PasswordEditDialog
{
    Q_OBJECT

public:
    explicit PasswordEditDialog(QWidget* parent = nullptr, NSUCircle* _nsu = nullptr, QString _id = "", QString _stuNum = "", QString _name = "");
    ~PasswordEditDialog();

private slots:
    void loadingThread();
    void changePassword();
    void on_cancelButton_clicked();

private:
    Ui::PasswordEditDialog* passwordEditUi;
    NSUCircle* nsu;
    QString id;
    QString stuNum;
    QString name;
};
