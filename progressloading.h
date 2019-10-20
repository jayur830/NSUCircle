#pragma once

#include "ui_progressloading.h"
#include <QProgressBar>

namespace Ui {
class ProgressLoading;
}

class ProgressLoading :
        public QDialog,
        public Ui::ProgressLoading
{
    Q_OBJECT

public:
    explicit ProgressLoading(QWidget* parent = nullptr);
    ~ProgressLoading();

    virtual void run();
    QProgressBar* loadingProgressBar;
    Ui::ProgressLoading* loadingUi;

public slots:
    void updateLoading();
    bool valueChange();

};
