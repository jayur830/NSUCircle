/********************************************************************************
** Form generated from reading UI file 'noticedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICEDIALOG_H
#define UI_NOTICEDIALOG_H

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

class Ui_NoticeDialog
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
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *NoticeDialog)
    {
        if (NoticeDialog->objectName().isEmpty())
            NoticeDialog->setObjectName(QStringLiteral("NoticeDialog"));
        NoticeDialog->resize(405, 433);
        gridLayout = new QGridLayout(NoticeDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(NoticeDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(NoticeDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(351, 21));
        lineEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        line = new QFrame(NoticeDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(NoticeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(348, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(NoticeDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(381, 281));
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

        verticalSpacer_3 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(NoticeDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(81, 31));
        cancelButton->setMaximumSize(QSize(81, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_2 = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(NoticeDialog);

        QMetaObject::connectSlotsByName(NoticeDialog);
    } // setupUi

    void retranslateUi(QDialog *NoticeDialog)
    {
        NoticeDialog->setWindowTitle(QApplication::translate("NoticeDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("NoticeDialog", "\354\240\234\353\252\251", nullptr));
        label_2->setText(QApplication::translate("NoticeDialog", "\353\202\264\354\232\251", nullptr));
        cancelButton->setText(QApplication::translate("NoticeDialog", "\353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoticeDialog: public Ui_NoticeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICEDIALOG_H
