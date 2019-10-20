/********************************************************************************
** Form generated from reading UI file 'progressloading.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSLOADING_H
#define UI_PROGRESSLOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_ProgressLoading
{
public:
    QProgressBar *progressBar;
    QLabel *label;

    void setupUi(QDialog *ProgressLoading)
    {
        if (ProgressLoading->objectName().isEmpty())
            ProgressLoading->setObjectName(QStringLiteral("ProgressLoading"));
        ProgressLoading->resize(400, 141);
        progressBar = new QProgressBar(ProgressLoading);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(20, 90, 361, 31));
        progressBar->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setInvertedAppearance(false);
        label = new QLabel(ProgressLoading);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 351, 51));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        retranslateUi(ProgressLoading);

        QMetaObject::connectSlotsByName(ProgressLoading);
    } // setupUi

    void retranslateUi(QDialog *ProgressLoading)
    {
        ProgressLoading->setWindowTitle(QApplication::translate("ProgressLoading", "Dialog", nullptr));
        progressBar->setFormat(QApplication::translate("ProgressLoading", "%p%", nullptr));
        label->setText(QApplication::translate("ProgressLoading", "\353\217\231\354\225\204\353\246\254 \355\216\230\354\235\264\354\247\200\354\227\220 \354\240\221\354\206\215\354\244\221\354\236\205\353\213\210\353\213\244...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressLoading: public Ui_ProgressLoading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSLOADING_H
