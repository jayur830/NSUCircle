/********************************************************************************
** Form generated from reading UI file 'selectmycircledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTMYCIRCLEDIALOG_H
#define UI_SELECTMYCIRCLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectMyCircleDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *circleListWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *calcelButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *SelectMyCircleDialog)
    {
        if (SelectMyCircleDialog->objectName().isEmpty())
            SelectMyCircleDialog->setObjectName(QStringLiteral("SelectMyCircleDialog"));
        SelectMyCircleDialog->resize(321, 276);
        SelectMyCircleDialog->setMinimumSize(QSize(321, 243));
        gridLayout = new QGridLayout(SelectMyCircleDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SelectMyCircleDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        verticalLayout->addWidget(label);

        circleListWidget = new QTreeWidget(SelectMyCircleDialog);
        circleListWidget->setObjectName(QStringLiteral("circleListWidget"));

        verticalLayout->addWidget(circleListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(SelectMyCircleDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(81, 31));
        okButton->setMaximumSize(QSize(81, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(okButton);

        calcelButton = new QPushButton(SelectMyCircleDialog);
        calcelButton->setObjectName(QStringLiteral("calcelButton"));
        calcelButton->setMinimumSize(QSize(81, 31));
        calcelButton->setMaximumSize(QSize(81, 31));
        calcelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(calcelButton);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SelectMyCircleDialog);

        QMetaObject::connectSlotsByName(SelectMyCircleDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectMyCircleDialog)
    {
        SelectMyCircleDialog->setWindowTitle(QApplication::translate("SelectMyCircleDialog", "NSUCircle - \353\202\230\354\235\230 \353\217\231\354\225\204\353\246\254", nullptr));
        label->setText(QApplication::translate("SelectMyCircleDialog", "\354\240\221\354\206\215\355\225\230\354\213\244 \353\263\270\354\235\270\354\235\230 \353\217\231\354\225\204\353\246\254 \355\216\230\354\235\264\354\247\200\353\245\274 \354\204\240\355\203\235\355\225\264\354\243\274\354\204\270\354\232\224.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = circleListWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("SelectMyCircleDialog", "\353\251\244\353\262\204/\352\264\200\353\246\254\354\236\220", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SelectMyCircleDialog", "\353\217\231\354\225\204\353\246\254\353\252\205", nullptr));
        okButton->setText(QApplication::translate("SelectMyCircleDialog", "\355\231\225  \354\235\270", nullptr));
        calcelButton->setText(QApplication::translate("SelectMyCircleDialog", "\354\267\250  \354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectMyCircleDialog: public Ui_SelectMyCircleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTMYCIRCLEDIALOG_H
