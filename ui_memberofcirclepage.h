/********************************************************************************
** Form generated from reading UI file 'memberofcirclepage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBEROFCIRCLEPAGE_H
#define UI_MEMBEROFCIRCLEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberOfCirclePage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *MyCircleTab;
    QWidget *tab_1;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTreeWidget *noticeListWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *noticeRefreshButton;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *noticeSearchComboBox;
    QLineEdit *noticeSearchLineEdit;
    QPushButton *noticeSearchButton;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QCalendarWidget *circleCalendarWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dateLabel;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *scheduleContentsLabel;
    QSpacerItem *horizontalSpacer_4;
    QTreeWidget *scheduleListWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *scheduleRefreshButton;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTreeWidget *boardListWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *boardRefreshButton;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *boardSearchComboBox;
    QLineEdit *boardSearchLineEdit;
    QPushButton *boardSearchButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *boardWriteButton;
    QPushButton *deleteBoardButton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *deleteMyCircleButton;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *exitMyCircleButton;

    void setupUi(QMainWindow *MemberOfCirclePage)
    {
        if (MemberOfCirclePage->objectName().isEmpty())
            MemberOfCirclePage->setObjectName(QStringLiteral("MemberOfCirclePage"));
        MemberOfCirclePage->resize(664, 416);
        MemberOfCirclePage->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MemberOfCirclePage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        MyCircleTab = new QTabWidget(centralwidget);
        MyCircleTab->setObjectName(QStringLiteral("MyCircleTab"));
        MyCircleTab->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gridLayout = new QGridLayout(tab_1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        noticeListWidget = new QTreeWidget(tab_1);
        noticeListWidget->setObjectName(QStringLiteral("noticeListWidget"));

        verticalLayout->addWidget(noticeListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        noticeRefreshButton = new QPushButton(tab_1);
        noticeRefreshButton->setObjectName(QStringLiteral("noticeRefreshButton"));
        noticeRefreshButton->setMinimumSize(QSize(81, 31));

        horizontalLayout->addWidget(noticeRefreshButton);

        horizontalSpacer_2 = new QSpacerItem(28, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        noticeSearchComboBox = new QComboBox(tab_1);
        noticeSearchComboBox->addItem(QString());
        noticeSearchComboBox->addItem(QString());
        noticeSearchComboBox->addItem(QString());
        noticeSearchComboBox->setObjectName(QStringLiteral("noticeSearchComboBox"));
        noticeSearchComboBox->setMinimumSize(QSize(76, 31));

        horizontalLayout->addWidget(noticeSearchComboBox);

        noticeSearchLineEdit = new QLineEdit(tab_1);
        noticeSearchLineEdit->setObjectName(QStringLiteral("noticeSearchLineEdit"));
        noticeSearchLineEdit->setMinimumSize(QSize(191, 31));
        noticeSearchLineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(noticeSearchLineEdit);

        noticeSearchButton = new QPushButton(tab_1);
        noticeSearchButton->setObjectName(QStringLiteral("noticeSearchButton"));
        noticeSearchButton->setMinimumSize(QSize(75, 31));

        horizontalLayout->addWidget(noticeSearchButton);

        horizontalSpacer = new QSpacerItem(118, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MyCircleTab->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        circleCalendarWidget = new QCalendarWidget(tab_2);
        circleCalendarWidget->setObjectName(QStringLiteral("circleCalendarWidget"));

        horizontalLayout_5->addWidget(circleCalendarWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dateLabel = new QLabel(tab_2);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setMinimumSize(QSize(30, 21));
        dateLabel->setMaximumSize(QSize(30, 21));

        horizontalLayout_2->addWidget(dateLabel);

        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMinimumSize(QSize(154, 21));
        dateEdit->setMaximumSize(QSize(154, 21));

        horizontalLayout_2->addWidget(dateEdit);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        scheduleContentsLabel = new QLabel(tab_2);
        scheduleContentsLabel->setObjectName(QStringLiteral("scheduleContentsLabel"));

        horizontalLayout_3->addWidget(scheduleContentsLabel);

        horizontalSpacer_4 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        scheduleListWidget = new QTreeWidget(tab_2);
        scheduleListWidget->setObjectName(QStringLiteral("scheduleListWidget"));
        scheduleListWidget->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        verticalLayout_2->addWidget(scheduleListWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        scheduleRefreshButton = new QPushButton(tab_2);
        scheduleRefreshButton->setObjectName(QStringLiteral("scheduleRefreshButton"));
        scheduleRefreshButton->setMinimumSize(QSize(81, 31));

        horizontalLayout_4->addWidget(scheduleRefreshButton);

        horizontalSpacer_5 = new QSpacerItem(218, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        MyCircleTab->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        boardListWidget = new QTreeWidget(tab_3);
        boardListWidget->setObjectName(QStringLiteral("boardListWidget"));

        verticalLayout_3->addWidget(boardListWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        boardRefreshButton = new QPushButton(tab_3);
        boardRefreshButton->setObjectName(QStringLiteral("boardRefreshButton"));
        boardRefreshButton->setMinimumSize(QSize(81, 31));

        horizontalLayout_6->addWidget(boardRefreshButton);

        horizontalSpacer_6 = new QSpacerItem(28, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        boardSearchComboBox = new QComboBox(tab_3);
        boardSearchComboBox->addItem(QString());
        boardSearchComboBox->addItem(QString());
        boardSearchComboBox->setObjectName(QStringLiteral("boardSearchComboBox"));
        boardSearchComboBox->setMinimumSize(QSize(76, 31));

        horizontalLayout_6->addWidget(boardSearchComboBox);

        boardSearchLineEdit = new QLineEdit(tab_3);
        boardSearchLineEdit->setObjectName(QStringLiteral("boardSearchLineEdit"));
        boardSearchLineEdit->setMinimumSize(QSize(191, 31));
        boardSearchLineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_6->addWidget(boardSearchLineEdit);

        boardSearchButton = new QPushButton(tab_3);
        boardSearchButton->setObjectName(QStringLiteral("boardSearchButton"));
        boardSearchButton->setMinimumSize(QSize(75, 31));

        horizontalLayout_6->addWidget(boardSearchButton);

        horizontalSpacer_7 = new QSpacerItem(28, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        boardWriteButton = new QPushButton(tab_3);
        boardWriteButton->setObjectName(QStringLiteral("boardWriteButton"));
        boardWriteButton->setMinimumSize(QSize(50, 31));
        boardWriteButton->setMaximumSize(QSize(50, 31));

        horizontalLayout_6->addWidget(boardWriteButton);

        deleteBoardButton = new QPushButton(tab_3);
        deleteBoardButton->setObjectName(QStringLiteral("deleteBoardButton"));
        deleteBoardButton->setMinimumSize(QSize(50, 31));
        deleteBoardButton->setMaximumSize(QSize(50, 31));

        horizontalLayout_6->addWidget(deleteBoardButton);


        verticalLayout_3->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        MyCircleTab->addTab(tab_3, QString());

        verticalLayout_4->addWidget(MyCircleTab);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        deleteMyCircleButton = new QPushButton(centralwidget);
        deleteMyCircleButton->setObjectName(QStringLiteral("deleteMyCircleButton"));
        deleteMyCircleButton->setMinimumSize(QSize(111, 41));
        deleteMyCircleButton->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_7->addWidget(deleteMyCircleButton);

        horizontalSpacer_8 = new QSpacerItem(408, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        exitMyCircleButton = new QPushButton(centralwidget);
        exitMyCircleButton->setObjectName(QStringLiteral("exitMyCircleButton"));
        exitMyCircleButton->setMinimumSize(QSize(111, 41));
        exitMyCircleButton->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_7->addWidget(exitMyCircleButton);


        verticalLayout_4->addLayout(horizontalLayout_7);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        MemberOfCirclePage->setCentralWidget(centralwidget);
#ifndef QT_NO_SHORTCUT
        dateLabel->setBuddy(dateEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(MemberOfCirclePage);

        MyCircleTab->setCurrentIndex(1);
        scheduleRefreshButton->setDefault(true);


        QMetaObject::connectSlotsByName(MemberOfCirclePage);
    } // setupUi

    void retranslateUi(QMainWindow *MemberOfCirclePage)
    {
        MemberOfCirclePage->setWindowTitle(QString());
        label_2->setText(QApplication::translate("MemberOfCirclePage", "\354\241\260\355\232\214\355\225\240 \352\270\200\354\235\230 \353\252\251\353\241\235\354\235\204 \354\204\240\355\203\235\355\225\230\354\227\254 \353\215\224\353\270\224\355\201\264\353\246\255\355\225\230\354\204\270\354\232\224.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = noticeListWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("MemberOfCirclePage", "\354\236\221\354\204\261\354\235\274", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("MemberOfCirclePage", "\354\236\221\354\204\261\354\236\220", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("MemberOfCirclePage", "\354\240\234\353\252\251", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MemberOfCirclePage", "No.", nullptr));
        noticeRefreshButton->setText(QApplication::translate("MemberOfCirclePage", "\354\203\210\353\241\234\352\263\240\354\271\250", nullptr));
        noticeSearchComboBox->setItemText(0, QApplication::translate("MemberOfCirclePage", "\354\240\234\353\252\251", nullptr));
        noticeSearchComboBox->setItemText(1, QApplication::translate("MemberOfCirclePage", "\354\236\221\354\204\261\354\236\220", nullptr));
        noticeSearchComboBox->setItemText(2, QApplication::translate("MemberOfCirclePage", "\354\236\221\354\204\261\354\235\274", nullptr));

        noticeSearchButton->setText(QApplication::translate("MemberOfCirclePage", "\352\262\200  \354\203\211", nullptr));
        MyCircleTab->setTabText(MyCircleTab->indexOf(tab_1), QApplication::translate("MemberOfCirclePage", "\352\263\265\354\247\200\354\202\254\355\225\255", nullptr));
        dateLabel->setText(QApplication::translate("MemberOfCirclePage", "\353\202\240\354\247\234 :", nullptr));
        scheduleContentsLabel->setText(QApplication::translate("MemberOfCirclePage", "\354\235\274\354\240\225\353\202\264\354\232\251", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = scheduleListWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("MemberOfCirclePage", "\354\235\274\354\240\225\353\202\264\354\232\251", nullptr));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MemberOfCirclePage", "\354\213\234\352\260\204", nullptr));
        scheduleRefreshButton->setText(QApplication::translate("MemberOfCirclePage", "\354\203\210\353\241\234\352\263\240\354\271\250", nullptr));
        MyCircleTab->setTabText(MyCircleTab->indexOf(tab_2), QApplication::translate("MemberOfCirclePage", "\354\235\264\353\262\210 \353\213\254 \354\235\274\354\240\225", nullptr));
        label->setText(QApplication::translate("MemberOfCirclePage", "\354\241\260\355\232\214\355\225\240 \352\270\200\354\235\230 \353\252\251\353\241\235\354\235\204 \354\204\240\355\203\235\355\225\230\354\227\254 \353\215\224\353\270\224\355\201\264\353\246\255\355\225\230\354\204\270\354\232\224.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = boardListWidget->headerItem();
        ___qtreewidgetitem2->setText(3, QApplication::translate("MemberOfCirclePage", "\353\213\265\353\263\200\354\235\274", nullptr));
        ___qtreewidgetitem2->setText(2, QApplication::translate("MemberOfCirclePage", "\354\236\221\354\204\261\354\235\274", nullptr));
        ___qtreewidgetitem2->setText(1, QApplication::translate("MemberOfCirclePage", "\354\240\234\353\252\251", nullptr));
        ___qtreewidgetitem2->setText(0, QApplication::translate("MemberOfCirclePage", "No.", nullptr));
        boardRefreshButton->setText(QApplication::translate("MemberOfCirclePage", "\354\203\210\353\241\234\352\263\240\354\271\250", nullptr));
        boardSearchComboBox->setItemText(0, QApplication::translate("MemberOfCirclePage", "\354\240\234\353\252\251", nullptr));
        boardSearchComboBox->setItemText(1, QApplication::translate("MemberOfCirclePage", "\354\236\221\354\204\261\354\235\274", nullptr));

        boardSearchLineEdit->setText(QString());
        boardSearchButton->setText(QApplication::translate("MemberOfCirclePage", "\352\262\200  \354\203\211", nullptr));
        boardWriteButton->setText(QApplication::translate("MemberOfCirclePage", "\352\270\200\354\223\260\352\270\260", nullptr));
        deleteBoardButton->setText(QApplication::translate("MemberOfCirclePage", "\352\270\200 \354\202\255\354\240\234", nullptr));
        MyCircleTab->setTabText(MyCircleTab->indexOf(tab_3), QApplication::translate("MemberOfCirclePage", "\353\217\231\354\225\204\353\246\254 \352\264\200\353\246\254\354\236\220\354\227\220\352\262\214 \352\266\201\352\270\210\355\225\234 \355\225\234 \353\247\210\353\224\224", nullptr));
        deleteMyCircleButton->setText(QApplication::translate("MemberOfCirclePage", "\353\217\231\354\225\204\353\246\254 \355\203\210\355\207\264", nullptr));
        exitMyCircleButton->setText(QApplication::translate("MemberOfCirclePage", "\353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberOfCirclePage: public Ui_MemberOfCirclePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBEROFCIRCLEPAGE_H
