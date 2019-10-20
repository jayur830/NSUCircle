/********************************************************************************
** Form generated from reading UI file 'findiddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDIDDIALOG_H
#define UI_FINDIDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindIDDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *stuNumLineEdit;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *nameLineEdit;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *FindIDDialog)
    {
        if (FindIDDialog->objectName().isEmpty())
            FindIDDialog->setObjectName(QStringLiteral("FindIDDialog"));
        FindIDDialog->resize(291, 242);
        FindIDDialog->setMinimumSize(QSize(291, 242));
        gridLayout = new QGridLayout(FindIDDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_8 = new QSpacerItem(1, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        label = new QLabel(FindIDDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(128, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        stuNumLineEdit = new QLineEdit(FindIDDialog);
        stuNumLineEdit->setObjectName(QStringLiteral("stuNumLineEdit"));
        stuNumLineEdit->setMinimumSize(QSize(241, 31));
        stuNumLineEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(stuNumLineEdit);

        horizontalSpacer_10 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_11 = new QSpacerItem(1, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        label_2 = new QLabel(FindIDDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(128, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        nameLineEdit = new QLineEdit(FindIDDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(241, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(nameLineEdit);

        horizontalSpacer_9 = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(28, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        okButton = new QPushButton(FindIDDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(81, 31));
        okButton->setMaximumSize(QSize(81, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_5->addWidget(okButton);

        horizontalSpacer = new QSpacerItem(1, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        cancelButton = new QPushButton(FindIDDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(81, 31));
        cancelButton->setMaximumSize(QSize(81, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_5->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(28, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(FindIDDialog);

        QMetaObject::connectSlotsByName(FindIDDialog);
    } // setupUi

    void retranslateUi(QDialog *FindIDDialog)
    {
        FindIDDialog->setWindowTitle(QApplication::translate("FindIDDialog", "\354\225\204\354\235\264\353\224\224 \354\260\276\352\270\260", nullptr));
        label->setText(QApplication::translate("FindIDDialog", "\355\225\231\353\262\210\354\235\204 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224.", nullptr));
        stuNumLineEdit->setText(QString());
        label_2->setText(QApplication::translate("FindIDDialog", "\354\235\264\353\246\204\354\235\204 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224.", nullptr));
        okButton->setText(QApplication::translate("FindIDDialog", "\355\231\225  \354\235\270", nullptr));
        cancelButton->setText(QApplication::translate("FindIDDialog", "\354\267\250  \354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindIDDialog: public Ui_FindIDDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDIDDIALOG_H
