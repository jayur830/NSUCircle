#pragma once

#include "ui_findiddialog.h"
#include "translate.h"

namespace Ui {
class FindIDDialog;
}

class NSUCircle;

class FindIDDialog :
        public QDialog,
        public Ui::FindIDDialog,
        public Translation<Ui::FindIDDialog, FindIDDialog>
{
    Q_OBJECT

public:
    explicit FindIDDialog(QWidget* parent = nullptr, NSUCircle* _nsu = nullptr);
    ~FindIDDialog();

private slots:
    void loadingThread();
    void findId();
    void on_cancelButton_clicked();

private:
    Ui::FindIDDialog* findIdUi;
    NSUCircle* nsu;
};
