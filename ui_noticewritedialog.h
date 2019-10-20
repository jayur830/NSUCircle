/********************************************************************************
** Form generated from reading UI file 'noticewritedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICEWRITEDIALOG_H
#define UI_NOTICEWRITEDIALOG_H

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

class Ui_NoticeWriteDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *NoticeWriteDialog)
    {
        if (NoticeWriteDialog->objectName().isEmpty())
            NoticeWriteDialog->setObjectName(QStringLiteral("NoticeWriteDialog"));
        NoticeWriteDialog->resize(371, 379);
        gridLayout = new QGridLayout(NoticeWriteDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(NoticeWriteDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(NoticeWriteDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(311, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(NoticeWriteDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(NoticeWriteDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(NoticeWriteDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(351, 221));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        verticalLayout->addWidget(plainTextEdit);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(70, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        okButton = new QPushButton(NoticeWriteDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(81, 31));
        okButton->setMaximumSize(QSize(81, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(okButton);

        horizontalSpacer_4 = new QSpacerItem(3, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        cancelButton = new QPushButton(NoticeWriteDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(81, 31));
        cancelButton->setMaximumSize(QSize(81, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(70, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(NoticeWriteDialog);

        QMetaObject::connectSlotsByName(NoticeWriteDialog);
    } // setupUi

    void retranslateUi(QDialog *NoticeWriteDialog)
    {
        NoticeWriteDialog->setWindowTitle(QApplication::translate("NoticeWriteDialog", "\352\263\265\354\247\200\354\202\254\355\225\255 \353\223\261\353\241\235 \353\260\217 \354\210\230\354\240\225", nullptr));
        label->setText(QApplication::translate("NoticeWriteDialog", "\354\240\234\353\252\251", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QApplication::translate("NoticeWriteDialog", "\353\202\264\354\232\251", nullptr));
        plainTextEdit->setPlainText(QString());
        okButton->setText(QApplication::translate("NoticeWriteDialog", "\355\231\225  \354\235\270", nullptr));
        cancelButton->setText(QApplication::translate("NoticeWriteDialog", "\354\267\250  \354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoticeWriteDialog: public Ui_NoticeWriteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICEWRITEDIALOG_H
