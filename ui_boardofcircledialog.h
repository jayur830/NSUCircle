/********************************************************************************
** Form generated from reading UI file 'boardofcircledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDOFCIRCLEDIALOG_H
#define UI_BOARDOFCIRCLEDIALOG_H

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

class Ui_BoardOfCircleDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QLineEdit *titleLineEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *questionLabel;
    QSpacerItem *horizontalSpacer_5;
    QPlainTextEdit *questionPlainTextEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *answerLabel;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *answerPlainTextEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *BoardOfCircleDialog)
    {
        if (BoardOfCircleDialog->objectName().isEmpty())
            BoardOfCircleDialog->setObjectName(QStringLiteral("BoardOfCircleDialog"));
        BoardOfCircleDialog->resize(371, 318);
        gridLayout = new QGridLayout(BoardOfCircleDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        titleLabel = new QLabel(BoardOfCircleDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(titleLabel);

        titleLineEdit = new QLineEdit(BoardOfCircleDialog);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));
        titleLineEdit->setMinimumSize(QSize(311, 20));
        titleLineEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        titleLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(titleLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(BoardOfCircleDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        questionLabel = new QLabel(BoardOfCircleDialog);
        questionLabel->setObjectName(QStringLiteral("questionLabel"));
        questionLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(questionLabel);

        horizontalSpacer_5 = new QSpacerItem(305, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        questionPlainTextEdit = new QPlainTextEdit(BoardOfCircleDialog);
        questionPlainTextEdit->setObjectName(QStringLiteral("questionPlainTextEdit"));
        questionPlainTextEdit->setMinimumSize(QSize(351, 51));
        questionPlainTextEdit->setMaximumSize(QSize(35100, 510));
        questionPlainTextEdit->setBaseSize(QSize(351, 51));
        questionPlainTextEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        questionPlainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(questionPlainTextEdit);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        answerLabel = new QLabel(BoardOfCircleDialog);
        answerLabel->setObjectName(QStringLiteral("answerLabel"));
        answerLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(answerLabel);

        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        answerPlainTextEdit = new QPlainTextEdit(BoardOfCircleDialog);
        answerPlainTextEdit->setObjectName(QStringLiteral("answerPlainTextEdit"));
        answerPlainTextEdit->setMinimumSize(QSize(351, 100));
        answerPlainTextEdit->setMaximumSize(QSize(35100, 221000));
        answerPlainTextEdit->setBaseSize(QSize(351, 100));
        answerPlainTextEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        verticalLayout->addWidget(answerPlainTextEdit);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(70, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        okButton = new QPushButton(BoardOfCircleDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(81, 31));
        okButton->setMaximumSize(QSize(81, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(okButton);

        horizontalSpacer_4 = new QSpacerItem(3, 28, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        cancelButton = new QPushButton(BoardOfCircleDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(81, 31));
        cancelButton->setMaximumSize(QSize(81, 31));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(70, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(BoardOfCircleDialog);

        QMetaObject::connectSlotsByName(BoardOfCircleDialog);
    } // setupUi

    void retranslateUi(QDialog *BoardOfCircleDialog)
    {
        BoardOfCircleDialog->setWindowTitle(QApplication::translate("BoardOfCircleDialog", "\352\262\214\354\213\234\355\214\220 \353\213\265\353\263\200 \353\223\261\353\241\235", nullptr));
        titleLabel->setText(QApplication::translate("BoardOfCircleDialog", "\354\240\234\353\252\251", nullptr));
        titleLineEdit->setText(QString());
        questionLabel->setText(QApplication::translate("BoardOfCircleDialog", "\354\247\210\353\254\270", nullptr));
        answerLabel->setText(QApplication::translate("BoardOfCircleDialog", "\353\213\265\353\263\200", nullptr));
        answerPlainTextEdit->setPlainText(QString());
        okButton->setText(QApplication::translate("BoardOfCircleDialog", "\355\231\225  \354\235\270", nullptr));
        cancelButton->setText(QApplication::translate("BoardOfCircleDialog", "\354\267\250  \354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardOfCircleDialog: public Ui_BoardOfCircleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDOFCIRCLEDIALOG_H
