#include "progressloading.h"
#include "selectmycircledialog.h"
#include <QDebug>

ProgressLoading::ProgressLoading(QWidget* parent) :
    QDialog(parent),
    loadingUi(new Ui::ProgressLoading)
{
    loadingUi->setupUi(this);
    this->loadingProgressBar = loadingUi->progressBar;
    this->loadingProgressBar->reset();
    setWindowFlags(Qt::CustomizeWindowHint);
}

ProgressLoading::~ProgressLoading()
{
    delete loadingUi;
}

void ProgressLoading::run()
{
    while (::value == ::maximum) { qDebug() << ::value << ::maximum; }
    qDebug() << ::value << ::maximum;
}

bool ProgressLoading::valueChange()
{
    this->loadingProgressBar->setValue(++::value);
    if (this->loadingProgressBar->value() == this->loadingProgressBar->maximum()) return true;
    else return false;
}

void ProgressLoading::updateLoading()
{
//    while (!::loading->valueChange(::value)) { Sleep(100); qDebug() << ::loading->progressBar->value() << ::value; }
    while (::value != ::maximum) { qDebug() << ::value << ::maximum; }
    qDebug() << ::value << ::maximum;
}
