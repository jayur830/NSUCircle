/********************************************************************************
** Form generated from reading UI file 'adminofcirclepage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINOFCIRCLEPAGE_H
#define UI_ADMINOFCIRCLEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminOfCirclePage
{
public:
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTreeWidget *noticeList;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *noticeRefreshButton;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *noticeSearchComboBox;
    QLineEdit *noticeSearchLineEdit;
    QPushButton *noticeSearchButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *noticeNewWriteButton;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QCalendarWidget *calendarWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *scheduleList;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *scheduleRefreshButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *scheduleUploadButton;
    QPushButton *scheduleDeleteButton;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QTreeWidget *boardList;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *boardRefreshButton;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *boardSearchComboBox;
    QLineEdit *boardSearchLineEdit;
    QPushButton *boardSearchButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *deleteBoardButton;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QTreeWidget *memberList;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *memberRefreshButton;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *memberSearchComboBox;
    QLineEdit *memberSearchLineEdit;
    QPushButton *memberSearchButton;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *deleteCircleButton;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *exitMyAdminButton;

    void setupUi(QDialog *AdminOfCirclePage)
    {
        if (AdminOfCirclePage->objectName().isEmpty())
            AdminOfCirclePage->setObjectName(QStringLiteral("AdminOfCirclePage"));
        AdminOfCirclePage->resize(664, 416);
        gridLayout_5 = new QGridLayout(AdminOfCirclePage);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget = new QTabWidget(AdminOfCirclePage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gridLayout_2 = new QGridLayout(tab_1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(tab_1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        noticeList = new QTreeWidget(tab_1);
        noticeList->setObjectName(QStringLiteral("noticeList"));

        verticalLayout_2->addWidget(noticeList);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        noticeRefreshButton = new QPushButton(tab_1);
        noticeRefreshButton->setObjectName(QStringLiteral("noticeRefreshButton"));
        noticeRefreshButton->setMinimumSize(QSize(81, 31));
        noticeRefreshButton->setMaximumSize(QSize(81, 31));

        horizontalLayout_5->addWidget(noticeRefreshButton);

        horizontalSpacer_4 = new QSpacerItem(28, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        noticeSearchComboBox = new QComboBox(tab_1);
        noticeSearchComboBox->addItem(QString());
        noticeSearchComboBox->addItem(QString());
        noticeSearchComboBox->addItem(QString());
        noticeSearchComboBox->setObjectName(QStringLiteral("noticeSearchComboBox"));
        noticeSearchComboBox->setMinimumSize(QSize(76, 31));
        noticeSearchComboBox->setMaximumSize(QSize(76, 31));

        horizontalLayout_5->addWidget(noticeSearchComboBox);

        noticeSearchLineEdit = new QLineEdit(tab_1);
        noticeSearchLineEdit->setObjectName(QStringLiteral("noticeSearchLineEdit"));
        noticeSearchLineEdit->setMinimumSize(QSize(191, 31));
        noticeSearchLineEdit->setMaximumSize(QSize(191, 31));
        noticeSearchLineEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_5->addWidget(noticeSearchLineEdit);

        noticeSearchButton = new QPushButton(tab_1);
        noticeSearchButton->setObjectName(QStringLiteral("noticeSearchButton"));
        noticeSearchButton->setMinimumSize(QSize(75, 31));
        noticeSearchButton->setMaximumSize(QSize(75, 31));

        horizontalLayout_5->addWidget(noticeSearchButton);

        horizontalSpacer_5 = new QSpacerItem(28, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        noticeNewWriteButton = new QPushButton(tab_1);
        noticeNewWriteButton->setObjectName(QStringLiteral("noticeNewWriteButton"));
        noticeNewWriteButton->setMinimumSize(QSize(81, 31));
        noticeNewWriteButton->setMaximumSize(QSize(81, 31));

        horizontalLayout_5->addWidget(noticeNewWriteButton);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        calendarWidget = new QCalendarWidget(tab_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        horizontalLayout_4->addWidget(calendarWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMinimumSize(QSize(154, 22));
        dateEdit->setMaximumSize(QSize(154, 22));

        horizontalLayout_2->addWidget(dateEdit);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(248, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        scheduleList = new QTreeWidget(tab_2);
        scheduleList->setObjectName(QStringLiteral("scheduleList"));
        scheduleList->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        verticalLayout->addWidget(scheduleList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        scheduleRefreshButton = new QPushButton(tab_2);
        scheduleRefreshButton->setObjectName(QStringLiteral("scheduleRefreshButton"));
        scheduleRefreshButton->setMinimumSize(QSize(81, 31));
        scheduleRefreshButton->setMaximumSize(QSize(81, 31));
        scheduleRefreshButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(scheduleRefreshButton);

        horizontalSpacer_3 = new QSpacerItem(64, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        scheduleUploadButton = new QPushButton(tab_2);
        scheduleUploadButton->setObjectName(QStringLiteral("scheduleUploadButton"));
        scheduleUploadButton->setMinimumSize(QSize(71, 31));
        scheduleUploadButton->setMaximumSize(QSize(71, 31));
        scheduleUploadButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(scheduleUploadButton);

        scheduleDeleteButton = new QPushButton(tab_2);
        scheduleDeleteButton->setObjectName(QStringLiteral("scheduleDeleteButton"));
        scheduleDeleteButton->setMinimumSize(QSize(71, 31));
        scheduleDeleteButton->setMaximumSize(QSize(71, 31));
        scheduleDeleteButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(scheduleDeleteButton);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        boardList = new QTreeWidget(tab_3);
        boardList->setObjectName(QStringLiteral("boardList"));

        verticalLayout_3->addWidget(boardList);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        boardRefreshButton = new QPushButton(tab_3);
        boardRefreshButton->setObjectName(QStringLiteral("boardRefreshButton"));
        boardRefreshButton->setMinimumSize(QSize(81, 31));
        boardRefreshButton->setMaximumSize(QSize(81, 31));

        horizontalLayout_6->addWidget(boardRefreshButton);

        horizontalSpacer_6 = new QSpacerItem(28, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        boardSearchComboBox = new QComboBox(tab_3);
        boardSearchComboBox->addItem(QString());
        boardSearchComboBox->addItem(QString());
        boardSearchComboBox->addItem(QString());
        boardSearchComboBox->setObjectName(QStringLiteral("boardSearchComboBox"));
        boardSearchComboBox->setMinimumSize(QSize(76, 31));
        boardSearchComboBox->setMaximumSize(QSize(76, 31));

        horizontalLayout_6->addWidget(boardSearchComboBox);

        boardSearchLineEdit = new QLineEdit(tab_3);
        boardSearchLineEdit->setObjectName(QStringLiteral("boardSearchLineEdit"));
        boardSearchLineEdit->setMinimumSize(QSize(191, 31));
        boardSearchLineEdit->setMaximumSize(QSize(191, 31));

        horizontalLayout_6->addWidget(boardSearchLineEdit);

        boardSearchButton = new QPushButton(tab_3);
        boardSearchButton->setObjectName(QStringLiteral("boardSearchButton"));
        boardSearchButton->setMinimumSize(QSize(75, 31));
        boardSearchButton->setMaximumSize(QSize(75, 31));

        horizontalLayout_6->addWidget(boardSearchButton);

        horizontalSpacer_7 = new QSpacerItem(28, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        deleteBoardButton = new QPushButton(tab_3);
        deleteBoardButton->setObjectName(QStringLiteral("deleteBoardButton"));
        deleteBoardButton->setMinimumSize(QSize(81, 31));
        deleteBoardButton->setMaximumSize(QSize(81, 31));

        horizontalLayout_6->addWidget(deleteBoardButton);


        verticalLayout_3->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        memberList = new QTreeWidget(tab_4);
        memberList->setObjectName(QStringLiteral("memberList"));

        verticalLayout_4->addWidget(memberList);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        memberRefreshButton = new QPushButton(tab_4);
        memberRefreshButton->setObjectName(QStringLiteral("memberRefreshButton"));
        memberRefreshButton->setMinimumSize(QSize(81, 31));
        memberRefreshButton->setMaximumSize(QSize(81, 31));

        horizontalLayout_7->addWidget(memberRefreshButton);

        horizontalSpacer_9 = new QSpacerItem(28, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        memberSearchComboBox = new QComboBox(tab_4);
        memberSearchComboBox->addItem(QString());
        memberSearchComboBox->addItem(QString());
        memberSearchComboBox->addItem(QString());
        memberSearchComboBox->addItem(QString());
        memberSearchComboBox->setObjectName(QStringLiteral("memberSearchComboBox"));
        memberSearchComboBox->setMinimumSize(QSize(76, 31));
        memberSearchComboBox->setMaximumSize(QSize(76, 31));

        horizontalLayout_7->addWidget(memberSearchComboBox);

        memberSearchLineEdit = new QLineEdit(tab_4);
        memberSearchLineEdit->setObjectName(QStringLiteral("memberSearchLineEdit"));
        memberSearchLineEdit->setMinimumSize(QSize(191, 31));
        memberSearchLineEdit->setMaximumSize(QSize(191, 31));

        horizontalLayout_7->addWidget(memberSearchLineEdit);

        memberSearchButton = new QPushButton(tab_4);
        memberSearchButton->setObjectName(QStringLiteral("memberSearchButton"));
        memberSearchButton->setMinimumSize(QSize(75, 31));
        memberSearchButton->setMaximumSize(QSize(75, 31));

        horizontalLayout_7->addWidget(memberSearchButton);

        horizontalSpacer_10 = new QSpacerItem(128, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_7);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_5->addWidget(tabWidget);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        deleteCircleButton = new QPushButton(AdminOfCirclePage);
        deleteCircleButton->setObjectName(QStringLiteral("deleteCircleButton"));
        deleteCircleButton->setMinimumSize(QSize(111, 41));
        deleteCircleButton->setMaximumSize(QSize(111, 41));
        deleteCircleButton->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_8->addWidget(deleteCircleButton);

        horizontalSpacer_8 = new QSpacerItem(518, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        exitMyAdminButton = new QPushButton(AdminOfCirclePage);
        exitMyAdminButton->setObjectName(QStringLiteral("exitMyAdminButton"));
        exitMyAdminButton->setMinimumSize(QSize(111, 41));
        exitMyAdminButton->setMaximumSize(QSize(111, 41));
        exitMyAdminButton->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));

        horizontalLayout_8->addWidget(exitMyAdminButton);


        verticalLayout_5->addLayout(horizontalLayout_8);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(dateEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, noticeList);
        QWidget::setTabOrder(noticeList, noticeRefreshButton);
        QWidget::setTabOrder(noticeRefreshButton, noticeSearchComboBox);
        QWidget::setTabOrder(noticeSearchComboBox, noticeSearchLineEdit);
        QWidget::setTabOrder(noticeSearchLineEdit, noticeSearchButton);
        QWidget::setTabOrder(noticeSearchButton, noticeNewWriteButton);
        QWidget::setTabOrder(noticeNewWriteButton, calendarWidget);
        QWidget::setTabOrder(calendarWidget, dateEdit);
        QWidget::setTabOrder(dateEdit, scheduleRefreshButton);
        QWidget::setTabOrder(scheduleRefreshButton, scheduleUploadButton);
        QWidget::setTabOrder(scheduleUploadButton, boardList);
        QWidget::setTabOrder(boardList, boardRefreshButton);
        QWidget::setTabOrder(boardRefreshButton, boardSearchComboBox);
        QWidget::setTabOrder(boardSearchComboBox, boardSearchLineEdit);
        QWidget::setTabOrder(boardSearchLineEdit, boardSearchButton);
        QWidget::setTabOrder(boardSearchButton, deleteBoardButton);
        QWidget::setTabOrder(deleteBoardButton, memberList);
        QWidget::setTabOrder(memberList, memberRefreshButton);
        QWidget::setTabOrder(memberRefreshButton, memberSearchComboBox);
        QWidget::setTabOrder(memberSearchComboBox, memberSearchLineEdit);
        QWidget::setTabOrder(memberSearchLineEdit, memberSearchButton);
        QWidget::setTabOrder(memberSearchButton, exitMyAdminButton);

        retranslateUi(AdminOfCirclePage);

        tabWidget->setCurrentIndex(3);
        noticeSearchButton->setDefault(false);


        QMetaObject::connectSlotsByName(AdminOfCirclePage);
    } // setupUi

    void retranslateUi(QDialog *AdminOfCirclePage)
    {
        AdminOfCirclePage->setWindowTitle(QApplication::translate("AdminOfCirclePage", "Dialog", nullptr));
        label_4->setText(QApplication::translate("AdminOfCirclePage", "\354\241\260\355\232\214\355\225\240 \352\270\200\354\235\230 \353\252\251\353\241\235\354\235\204 \354\204\240\355\203\235\355\225\230\354\227\254 \353\215\224\353\270\224\355\201\264\353\246\255\355\225\230\354\204\270\354\232\224.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = noticeList->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("AdminOfCirclePage", "\354\236\221\354\204\261\354\235\274", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("AdminOfCirclePage", "\354\236\221\354\204\261\354\236\220", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("AdminOfCirclePage", "\354\240\234\353\252\251", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("AdminOfCirclePage", "No.", nullptr));
        noticeRefreshButton->setText(QApplication::translate("AdminOfCirclePage", "\354\203\210\353\241\234\352\263\240\354\271\250", nullptr));
        noticeSearchComboBox->setItemText(0, QApplication::translate("AdminOfCirclePage", "\354\240\234\353\252\251", nullptr));
        noticeSearchComboBox->setItemText(1, QApplication::translate("AdminOfCirclePage", "\354\236\221\354\204\261\354\236\220", nullptr));
        noticeSearchComboBox->setItemText(2, QApplication::translate("AdminOfCirclePage", "\354\236\221\354\204\261\354\235\274", nullptr));

        noticeSearchLineEdit->setText(QString());
        noticeSearchButton->setText(QApplication::translate("AdminOfCirclePage", "\352\262\200  \354\203\211", nullptr));
        noticeNewWriteButton->setText(QApplication::translate("AdminOfCirclePage", "\352\270\200\354\223\260\352\270\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("AdminOfCirclePage", "\352\263\265\354\247\200\354\202\254\355\225\255 \353\223\261\353\241\235 \353\260\217 \354\210\230\354\240\225", nullptr));
        label->setText(QApplication::translate("AdminOfCirclePage", "\353\202\240\354\247\234 :", nullptr));
        label_3->setText(QApplication::translate("AdminOfCirclePage", "\354\235\274\354\240\225\353\202\264\354\232\251", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = scheduleList->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("AdminOfCirclePage", "\354\235\274\354\240\225\353\202\264\354\232\251", nullptr));
        ___qtreewidgetitem1->setText(0, QApplication::translate("AdminOfCirclePage", "\354\213\234\352\260\204", nullptr));
        scheduleRefreshButton->setText(QApplication::translate("AdminOfCirclePage", "\354\203\210\353\241\234\352\263\240\354\271\250", nullptr));
        scheduleUploadButton->setText(QApplication::translate("AdminOfCirclePage", "\354\235\274\354\240\225 \353\223\261\353\241\235", nullptr));
        scheduleDeleteButton->setText(QApplication::translate("AdminOfCirclePage", "\354\235\274\354\240\225 \354\202\255\354\240\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminOfCirclePage", "\354\235\274\354\240\225 \353\223\261\353\241\235", nullptr));
        label_6->setText(QApplication::translate("AdminOfCirclePage", "\354\241\260\355\232\214\355\225\240 \352\270\200\354\235\230 \353\252\251\353\241\235\354\235\204 \354\204\240\355\203\235\355\225\230\354\227\254 \353\215\224\353\270\224\355\201\264\353\246\255\355\225\230\354\204\270\354\232\224.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = boardList->headerItem();
        ___qtreewidgetitem2->setText(3, QApplication::translate("AdminOfCirclePage", "\353\213\265\353\263\200\354\235\274", nullptr));
        ___qtreewidgetitem2->setText(2, QApplication::translate("AdminOfCirclePage", "\354\236\221\354\204\261\354\235\274", nullptr));
        ___qtreewidgetitem2->setText(1, QApplication::translate("AdminOfCirclePage", "\354\240\234\353\252\251", nullptr));
        ___qtreewidgetitem2->setText(0, QApplication::translate("AdminOfCirclePage", "No.", nullptr));
        boardRefreshButton->setText(QApplication::translate("AdminOfCirclePage", "\354\203\210\353\241\234\352\263\240\354\271\250", nullptr));
        boardSearchComboBox->setItemText(0, QApplication::translate("AdminOfCirclePage", "\354\240\234\353\252\251", nullptr));
        boardSearchComboBox->setItemText(1, QApplication::translate("AdminOfCirclePage", "\354\236\221\354\204\261\354\235\274", nullptr));
        boardSearchComboBox->setItemText(2, QApplication::translate("AdminOfCirclePage", "\353\213\265\353\263\200\354\235\274", nullptr));

        boardSearchButton->setText(QApplication::translate("AdminOfCirclePage", "\352\262\200  \354\203\211", nullptr));
        deleteBoardButton->setText(QApplication::translate("AdminOfCirclePage", "\352\270\200 \354\202\255\354\240\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminOfCirclePage", "\352\262\214\354\213\234\355\214\220 \353\213\265\353\263\200 \353\223\261\353\241\235", nullptr));
        label_5->setText(QApplication::translate("AdminOfCirclePage", "\354\241\260\355\232\214\355\225\240 \355\225\231\354\232\260\354\235\230 \353\252\251\353\241\235\354\235\204 \354\204\240\355\203\235\355\225\230\354\227\254 \353\215\224\353\270\224\355\201\264\353\246\255\355\225\230\354\204\270\354\232\224.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = memberList->headerItem();
        ___qtreewidgetitem3->setText(5, QApplication::translate("AdminOfCirclePage", "\353\251\244\353\262\204\354\227\254\353\266\200", nullptr));
        ___qtreewidgetitem3->setText(4, QApplication::translate("AdminOfCirclePage", "\354\240\204\355\231\224\353\262\210\355\230\270", nullptr));
        ___qtreewidgetitem3->setText(3, QApplication::translate("AdminOfCirclePage", "\355\225\231\352\263\274", nullptr));
        ___qtreewidgetitem3->setText(2, QApplication::translate("AdminOfCirclePage", "\354\235\264\353\246\204", nullptr));
        ___qtreewidgetitem3->setText(1, QApplication::translate("AdminOfCirclePage", "\355\225\231\353\262\210", nullptr));
        ___qtreewidgetitem3->setText(0, QApplication::translate("AdminOfCirclePage", "No.", nullptr));
        memberRefreshButton->setText(QApplication::translate("AdminOfCirclePage", "\354\203\210\353\241\234\352\263\240\354\271\250", nullptr));
        memberSearchComboBox->setItemText(0, QApplication::translate("AdminOfCirclePage", "\355\225\231\353\262\210", nullptr));
        memberSearchComboBox->setItemText(1, QApplication::translate("AdminOfCirclePage", "\354\235\264\353\246\204", nullptr));
        memberSearchComboBox->setItemText(2, QApplication::translate("AdminOfCirclePage", "\355\225\231\352\263\274", nullptr));
        memberSearchComboBox->setItemText(3, QApplication::translate("AdminOfCirclePage", "\354\240\204\355\231\224\353\262\210\355\230\270", nullptr));

        memberSearchButton->setText(QApplication::translate("AdminOfCirclePage", "\352\262\200  \354\203\211", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QString());
        deleteCircleButton->setText(QApplication::translate("AdminOfCirclePage", "\353\217\231\354\225\204\353\246\254 \355\203\210\355\207\264", nullptr));
        exitMyAdminButton->setText(QApplication::translate("AdminOfCirclePage", "\353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminOfCirclePage: public Ui_AdminOfCirclePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINOFCIRCLEPAGE_H
