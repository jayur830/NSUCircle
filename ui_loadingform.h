/********************************************************************************
** Form generated from reading UI file 'loadingform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGFORM_H
#define UI_LOADINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LoadingForm
{
public:
    QLabel *label;

    void setupUi(QDialog *LoadingForm)
    {
        if (LoadingForm->objectName().isEmpty())
            LoadingForm->setObjectName(QStringLiteral("LoadingForm"));
        LoadingForm->resize(271, 61);
        LoadingForm->setModal(false);
        label = new QLabel(LoadingForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 231, 21));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        retranslateUi(LoadingForm);

        QMetaObject::connectSlotsByName(LoadingForm);
    } // setupUi

    void retranslateUi(QDialog *LoadingForm)
    {
        LoadingForm->setWindowTitle(QString());
        label->setText(QApplication::translate("LoadingForm", "\355\230\204\354\236\254 \353\241\234\353\224\251\354\244\221\354\236\205\353\213\210\353\213\244. \354\236\240\354\213\234\353\247\214 \352\270\260\353\213\244\353\240\244\354\243\274\354\204\270\354\232\224...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingForm: public Ui_LoadingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGFORM_H
