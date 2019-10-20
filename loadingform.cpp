#include "loadingform.h"
#include <QTimer>
#include <QDebug>

LoadingForm::LoadingForm(QWidget* parent) :
    QDialog(parent),
    loadingUi(new Ui::LoadingForm)
{
    loadingUi->setupUi(this);
    QTimer::singleShot(14000, this, SLOT(setLoadingText()));

    setWindowFlags(Qt::CustomizeWindowHint);
}

LoadingForm::~LoadingForm()
{
    delete loadingUi;
}

 void LoadingForm::setLoadingText()
 {
     this->loadingUi->label->setText(tr("Connection to the server is delayed currently. Please wait..."));
 }
