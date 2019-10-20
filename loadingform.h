#pragma once

#include "ui_loadingform.h"

namespace Ui {
class LoadingForm;
}

class LoadingForm :
        public QDialog,
        public Ui::LoadingForm
{
    Q_OBJECT

public:
    explicit LoadingForm(QWidget* parent = nullptr);
    ~LoadingForm();

    Ui::LoadingForm* loadingUi;

private slots:
    void setLoadingText();
};
