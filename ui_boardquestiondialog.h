/********************************************************************************
** Form generated from reading UI file 'boardquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDQUESTIONDIALOG_H
#define UI_BOARDQUESTIONDIALOG_H

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

class Ui_BoardQuestionDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *titleLineEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *questionLabel;
    QSpacerItem *horizontalSpacer_5;
    QPlainTextEdit *questionPlainTextEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *BoardQuestionDialog)
    {
        if (BoardQuestionDialog->objectName().isEmpty())
            BoardQuestionDialog->setObjectName(QStringLiteral("BoardQuestionDialog"));
        BoardQuestionDialog->resize(406, 346);
        gridLayout = new QGridLayout(BoardQuestionDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        titleLabel = new QLabel(BoardQuestionDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(titleLabel);

        horizontalSpacer_6 = new QSpacerItem(238, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        titleLineEdit = new QLineEdit(BoardQuestionDialog);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));
        titleLineEdit->setMinimumSize(QSize(311, 20));
        titleLineEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        titleLineEdit->setReadOnly(false);

        verticalLayout->addWidget(titleLineEdit);

        line = new QFrame(BoardQuestionDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        questionLabel = new QLabel(BoardQuestionDialog);
        questionLabel->setObjectName(QStringLiteral("questionLabel"));
        questionLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(questionLabel);

        horizontalSpacer_5 = new QSpacerItem(238, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        questionPlainTextEdit = new QPlainTextEdit(BoardQuestionDialog);
        questionPlainTextEdit->setObjectName(QStringLiteral("questionPlainTextEdit"));
        questionPlainTextEdit->setMinimumSize(QSize(351, 51));
        questionPlainTextEdit->setMaximumSize(QSize(35100, 510));
        questionPlainTextEdit->setBaseSize(QSize(351, 51));
        questionPlainTextEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        questionPlainTextEdit->setReadOnly(false);

        verticalLayout->addWidget(questionPlainTextEdit);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(98, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(BoardQuestionDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(81, 31));
        okButton->setMaximumSize(QSize(81, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(BoardQuestionDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(81, 31));
        cancelButton->setMaximumSize(QSize(81, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_2 = new QSpacerItem(98, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(BoardQuestionDialog);

        QMetaObject::connectSlotsByName(BoardQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *BoardQuestionDialog)
    {
        BoardQuestionDialog->setWindowTitle(QApplication::translate("BoardQuestionDialog", "\352\262\214\354\213\234\355\214\220 \352\270\200 \354\236\221\354\204\261", nullptr));
        titleLabel->setText(QApplication::translate("BoardQuestionDialog", "\354\240\234\353\252\251\354\235\204 \354\236\221\354\204\261\355\225\230\354\227\254 \354\243\274\354\204\270\354\232\224.", nullptr));
        titleLineEdit->setText(QString());
        questionLabel->setText(QApplication::translate("BoardQuestionDialog", "\354\247\210\353\254\270\354\235\204 \354\236\221\354\204\261\355\225\230\354\227\254 \354\243\274\354\204\270\354\232\224.", nullptr));
        okButton->setText(QApplication::translate("BoardQuestionDialog", "\355\231\225  \354\235\270", nullptr));
        cancelButton->setText(QApplication::translate("BoardQuestionDialog", "\354\267\250  \354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardQuestionDialog: public Ui_BoardQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDQUESTIONDIALOG_H
