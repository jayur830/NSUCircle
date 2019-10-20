/********************************************************************************
** Form generated from reading UI file 'nsucirclemainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NSUCIRCLEMAINPAGE_H
#define UI_NSUCIRCLEMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NSUCircleMainPage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *joinToCircleButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *myCircleHomeButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *deleteMemberOfNSUCircleButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *logOutButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *translateComboBox;
    QPushButton *translateButton;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QMainWindow *NSUCircleMainPage)
    {
        if (NSUCircleMainPage->objectName().isEmpty())
            NSUCircleMainPage->setObjectName(QStringLiteral("NSUCircleMainPage"));
        NSUCircleMainPage->setWindowModality(Qt::WindowModal);
        NSUCircleMainPage->resize(595, 395);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NSUCircleMainPage->sizePolicy().hasHeightForWidth());
        NSUCircleMainPage->setSizePolicy(sizePolicy);
        NSUCircleMainPage->setMinimumSize(QSize(595, 395));
        NSUCircleMainPage->setMaximumSize(QSize(595, 395));
        NSUCircleMainPage->setBaseSize(QSize(595, 395));
        centralwidget = new QWidget(NSUCircleMainPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(48, 78, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        joinToCircleButton = new QPushButton(centralwidget);
        joinToCircleButton->setObjectName(QStringLiteral("joinToCircleButton"));
        joinToCircleButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(joinToCircleButton->sizePolicy().hasHeightForWidth());
        joinToCircleButton->setSizePolicy(sizePolicy1);
        joinToCircleButton->setMaximumSize(QSize(200, 98));
        joinToCircleButton->setStyleSheet(QString::fromUtf8("font:16pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        joinToCircleButton->setAutoDefault(true);

        horizontalLayout->addWidget(joinToCircleButton);

        horizontalSpacer = new QSpacerItem(68, 78, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        myCircleHomeButton = new QPushButton(centralwidget);
        myCircleHomeButton->setObjectName(QStringLiteral("myCircleHomeButton"));
        sizePolicy1.setHeightForWidth(myCircleHomeButton->sizePolicy().hasHeightForWidth());
        myCircleHomeButton->setSizePolicy(sizePolicy1);
        myCircleHomeButton->setMaximumSize(QSize(200, 98));
        myCircleHomeButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        myCircleHomeButton->setAutoDefault(true);

        horizontalLayout->addWidget(myCircleHomeButton);

        horizontalSpacer_3 = new QSpacerItem(48, 78, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(17, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(48, 78, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        deleteMemberOfNSUCircleButton = new QPushButton(centralwidget);
        deleteMemberOfNSUCircleButton->setObjectName(QStringLiteral("deleteMemberOfNSUCircleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(deleteMemberOfNSUCircleButton->sizePolicy().hasHeightForWidth());
        deleteMemberOfNSUCircleButton->setSizePolicy(sizePolicy2);
        deleteMemberOfNSUCircleButton->setMaximumSize(QSize(200, 95));
        deleteMemberOfNSUCircleButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        deleteMemberOfNSUCircleButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(deleteMemberOfNSUCircleButton);

        horizontalSpacer_5 = new QSpacerItem(68, 78, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        logOutButton = new QPushButton(centralwidget);
        logOutButton->setObjectName(QStringLiteral("logOutButton"));
        sizePolicy2.setHeightForWidth(logOutButton->sizePolicy().hasHeightForWidth());
        logOutButton->setSizePolicy(sizePolicy2);
        logOutButton->setMaximumSize(QSize(200, 98));
        logOutButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        logOutButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(logOutButton);

        horizontalSpacer_4 = new QSpacerItem(48, 78, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(17, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(178, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        translateComboBox = new QComboBox(centralwidget);
        translateComboBox->addItem(QString());
        translateComboBox->addItem(QString());
        translateComboBox->setObjectName(QStringLiteral("translateComboBox"));
        translateComboBox->setMinimumSize(QSize(101, 31));
        translateComboBox->setMaximumSize(QSize(101, 31));
        translateComboBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(translateComboBox);

        translateButton = new QPushButton(centralwidget);
        translateButton->setObjectName(QStringLiteral("translateButton"));
        translateButton->setMinimumSize(QSize(81, 31));
        translateButton->setMaximumSize(QSize(81, 31));
        translateButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(translateButton);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalSpacer_8 = new QSpacerItem(178, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        NSUCircleMainPage->setCentralWidget(centralwidget);
        QWidget::setTabOrder(joinToCircleButton, myCircleHomeButton);
        QWidget::setTabOrder(myCircleHomeButton, deleteMemberOfNSUCircleButton);
        QWidget::setTabOrder(deleteMemberOfNSUCircleButton, logOutButton);

        retranslateUi(NSUCircleMainPage);

        QMetaObject::connectSlotsByName(NSUCircleMainPage);
    } // setupUi

    void retranslateUi(QMainWindow *NSUCircleMainPage)
    {
        NSUCircleMainPage->setWindowTitle(QApplication::translate("NSUCircleMainPage", "NSUCircle - \353\251\224\354\235\270\355\216\230\354\235\264\354\247\200", nullptr));
        joinToCircleButton->setText(QApplication::translate("NSUCircleMainPage", "\353\217\231\354\225\204\353\246\254 \352\260\200\354\236\205", nullptr));
        myCircleHomeButton->setText(QApplication::translate("NSUCircleMainPage", "\353\202\230\354\235\230 \353\217\231\354\225\204\353\246\254", nullptr));
        deleteMemberOfNSUCircleButton->setText(QApplication::translate("NSUCircleMainPage", "\355\232\214\354\233\220\355\203\210\355\207\264", nullptr));
        logOutButton->setText(QApplication::translate("NSUCircleMainPage", "\353\241\234\352\267\270\354\225\204\354\233\203", nullptr));
        translateComboBox->setItemText(0, QApplication::translate("NSUCircleMainPage", "\355\225\234\352\265\255\354\226\264", nullptr));
        translateComboBox->setItemText(1, QApplication::translate("NSUCircleMainPage", "English", nullptr));

        translateButton->setText(QApplication::translate("NSUCircleMainPage", "\353\262\210  \354\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NSUCircleMainPage: public Ui_NSUCircleMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NSUCIRCLEMAINPAGE_H
