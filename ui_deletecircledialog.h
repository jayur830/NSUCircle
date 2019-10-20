/********************************************************************************
** Form generated from reading UI file 'deletecircledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECIRCLEDIALOG_H
#define UI_DELETECIRCLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteCircleDialog
{
public:
    QLineEdit *lineEdit;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DeleteCircleDialog)
    {
        if (DeleteCircleDialog->objectName().isEmpty())
            DeleteCircleDialog->setObjectName(QStringLiteral("DeleteCircleDialog"));
        DeleteCircleDialog->resize(280, 151);
        DeleteCircleDialog->setMinimumSize(QSize(280, 151));
        DeleteCircleDialog->setMaximumSize(QSize(280, 151));
        lineEdit = new QLineEdit(DeleteCircleDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 50, 241, 31));
        lineEdit->setMinimumSize(QSize(241, 31));
        okButton = new QPushButton(DeleteCircleDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(20, 100, 111, 31));
        okButton->setMinimumSize(QSize(111, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        cancelButton = new QPushButton(DeleteCircleDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(150, 100, 111, 31));
        cancelButton->setMinimumSize(QSize(111, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        layoutWidget = new QWidget(DeleteCircleDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 243, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(DeleteCircleDialog);

        QMetaObject::connectSlotsByName(DeleteCircleDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteCircleDialog)
    {
        DeleteCircleDialog->setWindowTitle(QString());
        okButton->setText(QApplication::translate("DeleteCircleDialog", "\355\231\225  \354\235\270", nullptr));
        cancelButton->setText(QApplication::translate("DeleteCircleDialog", "\354\267\250  \354\206\214", nullptr));
        label->setText(QApplication::translate("DeleteCircleDialog", "\353\271\204\353\260\200\353\262\210\355\230\270\353\245\274 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteCircleDialog: public Ui_DeleteCircleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECIRCLEDIALOG_H
