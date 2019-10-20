/********************************************************************************
** Form generated from reading UI file 'memberofcircledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBEROFCIRCLEDIALOG_H
#define UI_MEMBEROFCIRCLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_MemberOfCircleDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *stuNumLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QLabel *nameLabel;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_9;
    QLabel *stuYearLabel;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QLabel *departmentLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QLabel *phoneNumLabel;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QPlainTextEdit *plainTextEdit_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QPushButton *beAdminButton;
    QPushButton *deleteMemberButton;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout;
    QPushButton *approvalButton;
    QPushButton *disapprovalButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *MemberOfCircleDialog)
    {
        if (MemberOfCircleDialog->objectName().isEmpty())
            MemberOfCircleDialog->setObjectName(QStringLiteral("MemberOfCircleDialog"));
        MemberOfCircleDialog->resize(451, 421);
        MemberOfCircleDialog->setMinimumSize(QSize(451, 421));
        MemberOfCircleDialog->setMaximumSize(QSize(451, 421));
        gridLayout_2 = new QGridLayout(MemberOfCircleDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_7 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(MemberOfCircleDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(label_3);

        stuNumLabel = new QLabel(MemberOfCircleDialog);
        stuNumLabel->setObjectName(QStringLiteral("stuNumLabel"));
        stuNumLabel->setMinimumSize(QSize(120, 20));
        stuNumLabel->setMaximumSize(QSize(120, 20));
        stuNumLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(stuNumLabel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_4 = new QLabel(MemberOfCircleDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(label_4);

        nameLabel = new QLabel(MemberOfCircleDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(120, 20));
        nameLabel->setMaximumSize(QSize(120, 20));
        nameLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(nameLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_9 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_13 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_13);

        label_9 = new QLabel(MemberOfCircleDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_11->addWidget(label_9);

        stuYearLabel = new QLabel(MemberOfCircleDialog);
        stuYearLabel->setObjectName(QStringLiteral("stuYearLabel"));
        stuYearLabel->setMinimumSize(QSize(120, 20));
        stuYearLabel->setMaximumSize(QSize(120, 20));
        stuYearLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_11->addWidget(stuYearLabel);


        verticalLayout->addLayout(horizontalLayout_11);


        horizontalLayout_5->addLayout(verticalLayout);

        line = new QFrame(MemberOfCircleDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_5 = new QLabel(MemberOfCircleDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(label_5);

        departmentLabel = new QLabel(MemberOfCircleDialog);
        departmentLabel->setObjectName(QStringLiteral("departmentLabel"));
        departmentLabel->setMinimumSize(QSize(180, 20));
        departmentLabel->setMaximumSize(QSize(180, 20));
        departmentLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(departmentLabel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_6 = new QLabel(MemberOfCircleDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(label_6);

        phoneNumLabel = new QLabel(MemberOfCircleDialog);
        phoneNumLabel->setObjectName(QStringLiteral("phoneNumLabel"));
        phoneNumLabel->setMinimumSize(QSize(180, 20));
        phoneNumLabel->setMaximumSize(QSize(180, 20));
        phoneNumLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(phoneNumLabel);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_11 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_11);

        verticalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_10);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(MemberOfCircleDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(348, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_6);

        plainTextEdit = new QPlainTextEdit(MemberOfCircleDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(411, 51));
        plainTextEdit->setMaximumSize(QSize(411, 51));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        plainTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(plainTextEdit);

        verticalSpacer_4 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(MemberOfCircleDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_7->addWidget(label_2);

        horizontalSpacer_7 = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_7);

        plainTextEdit_2 = new QPlainTextEdit(MemberOfCircleDialog);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setMinimumSize(QSize(411, 71));
        plainTextEdit_2->setMaximumSize(QSize(411, 71));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        plainTextEdit_2->setReadOnly(true);

        verticalLayout_4->addWidget(plainTextEdit_2);

        verticalSpacer_5 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        beAdminButton = new QPushButton(MemberOfCircleDialog);
        beAdminButton->setObjectName(QStringLiteral("beAdminButton"));
        beAdminButton->setMinimumSize(QSize(91, 31));
        beAdminButton->setMaximumSize(QSize(91, 31));
        beAdminButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        verticalLayout_3->addWidget(beAdminButton);

        deleteMemberButton = new QPushButton(MemberOfCircleDialog);
        deleteMemberButton->setObjectName(QStringLiteral("deleteMemberButton"));
        deleteMemberButton->setMinimumSize(QSize(91, 31));
        deleteMemberButton->setMaximumSize(QSize(91, 31));
        deleteMemberButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        verticalLayout_3->addWidget(deleteMemberButton);


        horizontalLayout_8->addLayout(verticalLayout_3);

        horizontalSpacer_8 = new QSpacerItem(188, 68, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        approvalButton = new QPushButton(MemberOfCircleDialog);
        approvalButton->setObjectName(QStringLiteral("approvalButton"));
        approvalButton->setMinimumSize(QSize(51, 31));
        approvalButton->setMaximumSize(QSize(51, 31));
        approvalButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        gridLayout->addWidget(approvalButton, 0, 0, 1, 1);

        disapprovalButton = new QPushButton(MemberOfCircleDialog);
        disapprovalButton->setObjectName(QStringLiteral("disapprovalButton"));
        disapprovalButton->setMinimumSize(QSize(51, 31));
        disapprovalButton->setMaximumSize(QSize(51, 31));
        disapprovalButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        gridLayout->addWidget(disapprovalButton, 0, 1, 1, 1);

        cancelButton = new QPushButton(MemberOfCircleDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(111, 31));
        cancelButton->setMaximumSize(QSize(111, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        gridLayout->addWidget(cancelButton, 1, 0, 1, 2);


        horizontalLayout_8->addLayout(gridLayout);


        verticalLayout_4->addLayout(horizontalLayout_8);


        gridLayout_2->addLayout(verticalLayout_4, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_6, 2, 1, 1, 1);


        retranslateUi(MemberOfCircleDialog);

        QMetaObject::connectSlotsByName(MemberOfCircleDialog);
    } // setupUi

    void retranslateUi(QDialog *MemberOfCircleDialog)
    {
        MemberOfCircleDialog->setWindowTitle(QApplication::translate("MemberOfCircleDialog", "\353\217\231\354\225\204\353\246\254 \353\251\244\353\262\204 \354\241\260\355\232\214", nullptr));
        label_3->setText(QApplication::translate("MemberOfCircleDialog", "\355\225\231\353\262\210 : ", nullptr));
        stuNumLabel->setText(QApplication::translate("MemberOfCircleDialog", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("MemberOfCircleDialog", "\354\235\264\353\246\204 : ", nullptr));
        nameLabel->setText(QApplication::translate("MemberOfCircleDialog", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("MemberOfCircleDialog", "\355\225\231\353\205\204 : ", nullptr));
        stuYearLabel->setText(QApplication::translate("MemberOfCircleDialog", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("MemberOfCircleDialog", "\355\225\231\352\263\274 : ", nullptr));
        departmentLabel->setText(QApplication::translate("MemberOfCircleDialog", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("MemberOfCircleDialog", "\354\240\204\355\231\224\353\262\210\355\230\270 : ", nullptr));
        phoneNumLabel->setText(QApplication::translate("MemberOfCircleDialog", "TextLabel", nullptr));
        label->setText(QApplication::translate("MemberOfCircleDialog", "\354\247\200\354\233\220\353\217\231\352\270\260", nullptr));
        label_2->setText(QApplication::translate("MemberOfCircleDialog", "\354\225\236\354\234\274\353\241\234\354\235\230 \353\213\244\354\247\220", nullptr));
        beAdminButton->setText(QApplication::translate("MemberOfCircleDialog", "\352\264\200\353\246\254\354\236\220 \354\212\271\352\262\251", nullptr));
        deleteMemberButton->setText(QApplication::translate("MemberOfCircleDialog", "\353\251\244\353\262\204 \352\260\225\355\207\264", nullptr));
        approvalButton->setText(QApplication::translate("MemberOfCircleDialog", "\354\212\271\354\235\270", nullptr));
        disapprovalButton->setText(QApplication::translate("MemberOfCircleDialog", "\355\203\210\353\235\275", nullptr));
        cancelButton->setText(QApplication::translate("MemberOfCircleDialog", "\353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberOfCircleDialog: public Ui_MemberOfCircleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBEROFCIRCLEDIALOG_H
