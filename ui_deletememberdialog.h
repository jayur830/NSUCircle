/********************************************************************************
** Form generated from reading UI file 'deletememberdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMEMBERDIALOG_H
#define UI_DELETEMEMBERDIALOG_H

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

class Ui_DeleteMemberDialog
{
public:
    QLineEdit *deleteMemberLineEdit;
    QPushButton *deleteMemberOkButton;
    QPushButton *deleteMemberCancelButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DeleteMemberDialog)
    {
        if (DeleteMemberDialog->objectName().isEmpty())
            DeleteMemberDialog->setObjectName(QStringLiteral("DeleteMemberDialog"));
        DeleteMemberDialog->resize(281, 151);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeleteMemberDialog->sizePolicy().hasHeightForWidth());
        DeleteMemberDialog->setSizePolicy(sizePolicy);
        DeleteMemberDialog->setMinimumSize(QSize(281, 151));
        DeleteMemberDialog->setMaximumSize(QSize(281, 151));
        deleteMemberLineEdit = new QLineEdit(DeleteMemberDialog);
        deleteMemberLineEdit->setObjectName(QStringLiteral("deleteMemberLineEdit"));
        deleteMemberLineEdit->setGeometry(QRect(20, 50, 241, 31));
        deleteMemberLineEdit->setStyleSheet(QStringLiteral("font: 13pt \"Agency FB\";"));
        deleteMemberOkButton = new QPushButton(DeleteMemberDialog);
        deleteMemberOkButton->setObjectName(QStringLiteral("deleteMemberOkButton"));
        deleteMemberOkButton->setEnabled(false);
        deleteMemberOkButton->setGeometry(QRect(20, 100, 111, 31));
        sizePolicy.setHeightForWidth(deleteMemberOkButton->sizePolicy().hasHeightForWidth());
        deleteMemberOkButton->setSizePolicy(sizePolicy);
        deleteMemberOkButton->setMinimumSize(QSize(111, 31));
        deleteMemberOkButton->setMaximumSize(QSize(111, 31));
        deleteMemberOkButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        deleteMemberCancelButton = new QPushButton(DeleteMemberDialog);
        deleteMemberCancelButton->setObjectName(QStringLiteral("deleteMemberCancelButton"));
        deleteMemberCancelButton->setGeometry(QRect(150, 100, 111, 31));
        sizePolicy.setHeightForWidth(deleteMemberCancelButton->sizePolicy().hasHeightForWidth());
        deleteMemberCancelButton->setSizePolicy(sizePolicy);
        deleteMemberCancelButton->setMinimumSize(QSize(111, 31));
        deleteMemberCancelButton->setMaximumSize(QSize(111, 31));
        deleteMemberCancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        layoutWidget = new QWidget(DeleteMemberDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 244, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(DeleteMemberDialog);

        deleteMemberOkButton->setDefault(true);


        QMetaObject::connectSlotsByName(DeleteMemberDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteMemberDialog)
    {
        DeleteMemberDialog->setWindowTitle(QApplication::translate("DeleteMemberDialog", "NSUCircle - \355\232\214\354\233\220\355\203\210\355\207\264", nullptr));
        deleteMemberOkButton->setText(QApplication::translate("DeleteMemberDialog", "\355\231\225  \354\235\270", nullptr));
        deleteMemberCancelButton->setText(QApplication::translate("DeleteMemberDialog", "\354\267\250  \354\206\214", nullptr));
        label->setText(QApplication::translate("DeleteMemberDialog", "\353\271\204\353\260\200\353\262\210\355\230\270\353\245\274 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteMemberDialog: public Ui_DeleteMemberDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMEMBERDIALOG_H
