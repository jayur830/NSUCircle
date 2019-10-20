/********************************************************************************
** Form generated from reading UI file 'noticeeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICEEDITDIALOG_H
#define UI_NOTICEEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NoticeEditDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *noticeDeleteButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *NoticeEditDialog)
    {
        if (NoticeEditDialog->objectName().isEmpty())
            NoticeEditDialog->setObjectName(QStringLiteral("NoticeEditDialog"));
        NoticeEditDialog->resize(405, 433);
        gridLayout = new QGridLayout(NoticeEditDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(NoticeEditDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(NoticeEditDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(351, 21));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        line = new QFrame(NoticeEditDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(NoticeEditDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(348, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(NoticeEditDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(381, 281));

        verticalLayout->addWidget(plainTextEdit);

        verticalSpacer_3 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(NoticeEditDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(81, 31));
        okButton->setMaximumSize(QSize(81, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(NoticeEditDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(81, 31));
        cancelButton->setMaximumSize(QSize(81, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(cancelButton);

        noticeDeleteButton = new QPushButton(NoticeEditDialog);
        noticeDeleteButton->setObjectName(QStringLiteral("noticeDeleteButton"));
        noticeDeleteButton->setMinimumSize(QSize(81, 31));
        noticeDeleteButton->setMaximumSize(QSize(81, 31));
        noticeDeleteButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(noticeDeleteButton);

        horizontalSpacer_2 = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(NoticeEditDialog);

        QMetaObject::connectSlotsByName(NoticeEditDialog);
    } // setupUi

    void retranslateUi(QDialog *NoticeEditDialog)
    {
        NoticeEditDialog->setWindowTitle(QApplication::translate("NoticeEditDialog", "\352\263\265\354\247\200\354\202\254\355\225\255 \354\210\230\354\240\225", nullptr));
        label->setText(QApplication::translate("NoticeEditDialog", "\354\240\234\353\252\251", nullptr));
        label_2->setText(QApplication::translate("NoticeEditDialog", "\353\202\264\354\232\251", nullptr));
        okButton->setText(QApplication::translate("NoticeEditDialog", "\355\231\225  \354\235\270", nullptr));
        cancelButton->setText(QApplication::translate("NoticeEditDialog", "\354\267\250  \354\206\214", nullptr));
        noticeDeleteButton->setText(QApplication::translate("NoticeEditDialog", "\354\202\255  \354\240\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoticeEditDialog: public Ui_NoticeEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICEEDITDIALOG_H
