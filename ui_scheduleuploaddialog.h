/********************************************************************************
** Form generated from reading UI file 'scheduleuploaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEUPLOADDIALOG_H
#define UI_SCHEDULEUPLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScheduleUploadDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ScheduleUploadDialog)
    {
        if (ScheduleUploadDialog->objectName().isEmpty())
            ScheduleUploadDialog->setObjectName(QStringLiteral("ScheduleUploadDialog"));
        ScheduleUploadDialog->resize(302, 327);
        gridLayout = new QGridLayout(ScheduleUploadDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(ScheduleUploadDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(label);

        dateTimeEdit = new QDateTimeEdit(ScheduleUploadDialog);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setMinimumSize(QSize(171, 22));
        dateTimeEdit->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(dateTimeEdit);

        horizontalSpacer_5 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(ScheduleUploadDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ScheduleUploadDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(ScheduleUploadDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(281, 131));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        verticalLayout->addWidget(plainTextEdit);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(ScheduleUploadDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(71, 31));
        okButton->setMaximumSize(QSize(71, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(okButton);

        horizontalSpacer_3 = new QSpacerItem(2, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        cancelButton = new QPushButton(ScheduleUploadDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(71, 31));
        cancelButton->setMaximumSize(QSize(71, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_2 = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ScheduleUploadDialog);

        QMetaObject::connectSlotsByName(ScheduleUploadDialog);
    } // setupUi

    void retranslateUi(QDialog *ScheduleUploadDialog)
    {
        ScheduleUploadDialog->setWindowTitle(QString());
        label->setText(QApplication::translate("ScheduleUploadDialog", "\354\213\234\352\260\204 : ", nullptr));
        label_2->setText(QApplication::translate("ScheduleUploadDialog", "\354\235\274\354\240\225 \353\202\264\354\232\251\354\235\204 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224.", nullptr));
        okButton->setText(QApplication::translate("ScheduleUploadDialog", "\355\231\225  \354\235\270", nullptr));
        cancelButton->setText(QApplication::translate("ScheduleUploadDialog", "\354\267\250  \354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScheduleUploadDialog: public Ui_ScheduleUploadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEUPLOADDIALOG_H
