/********************************************************************************
** Form generated from reading UI file 'passwordeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDEDITDIALOG_H
#define UI_PASSWORDEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PasswordEditDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_16;
    QLineEdit *currentPasswordLineEdit;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *newPasswordLineEdit;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *confirmPasswordLineEdit;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *PasswordEditDialog)
    {
        if (PasswordEditDialog->objectName().isEmpty())
            PasswordEditDialog->setObjectName(QStringLiteral("PasswordEditDialog"));
        PasswordEditDialog->resize(297, 303);
        PasswordEditDialog->setMinimumSize(QSize(297, 255));
        PasswordEditDialog->setMaximumSize(QSize(2970, 10000));
        gridLayout_2 = new QGridLayout(PasswordEditDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(PasswordEditDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_20 = new QSpacerItem(1, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_10->addWidget(label_5);

        horizontalSpacer_21 = new QSpacerItem(128, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_21);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_16 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        currentPasswordLineEdit = new QLineEdit(groupBox);
        currentPasswordLineEdit->setObjectName(QStringLiteral("currentPasswordLineEdit"));
        currentPasswordLineEdit->setMinimumSize(QSize(241, 31));
        currentPasswordLineEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_8->addWidget(currentPasswordLineEdit);

        horizontalSpacer_17 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_8 = new QSpacerItem(1, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(128, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        newPasswordLineEdit = new QLineEdit(groupBox);
        newPasswordLineEdit->setObjectName(QStringLiteral("newPasswordLineEdit"));
        newPasswordLineEdit->setMinimumSize(QSize(241, 31));
        newPasswordLineEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(newPasswordLineEdit);

        horizontalSpacer_10 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_11 = new QSpacerItem(1, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(128, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        confirmPasswordLineEdit = new QLineEdit(groupBox);
        confirmPasswordLineEdit->setObjectName(QStringLiteral("confirmPasswordLineEdit"));
        confirmPasswordLineEdit->setMinimumSize(QSize(241, 31));
        confirmPasswordLineEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(confirmPasswordLineEdit);

        horizontalSpacer_9 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(28, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        okButton = new QPushButton(PasswordEditDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(81, 31));
        okButton->setMaximumSize(QSize(81, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_5->addWidget(okButton);

        horizontalSpacer = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        cancelButton = new QPushButton(PasswordEditDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(81, 31));
        cancelButton->setMaximumSize(QSize(81, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_5->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(28, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        retranslateUi(PasswordEditDialog);

        QMetaObject::connectSlotsByName(PasswordEditDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordEditDialog)
    {
        PasswordEditDialog->setWindowTitle(QApplication::translate("PasswordEditDialog", "\353\271\204\353\260\200\353\262\210\355\230\270 \353\263\200\352\262\275", nullptr));
        groupBox->setTitle(QApplication::translate("PasswordEditDialog", "\353\271\204\353\260\200\353\262\210\355\230\270 \353\263\200\352\262\275", nullptr));
        label_5->setText(QApplication::translate("PasswordEditDialog", "\355\230\204\354\236\254 \353\271\204\353\260\200\353\262\210\355\230\270", nullptr));
        currentPasswordLineEdit->setText(QString());
        label->setText(QApplication::translate("PasswordEditDialog", "\353\263\200\352\262\275 \353\271\204\353\260\200\353\262\210\355\230\270", nullptr));
        newPasswordLineEdit->setText(QString());
        label_2->setText(QApplication::translate("PasswordEditDialog", "\353\263\200\352\262\275 \353\271\204\353\260\200\353\262\210\355\230\270 \355\231\225\354\235\270", nullptr));
        okButton->setText(QApplication::translate("PasswordEditDialog", "\355\231\225  \354\235\270", nullptr));
        cancelButton->setText(QApplication::translate("PasswordEditDialog", "\354\267\250  \354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordEditDialog: public Ui_PasswordEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDEDITDIALOG_H
