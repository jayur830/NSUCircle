/********************************************************************************
** Form generated from reading UI file 'join.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOIN_H
#define UI_JOIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Join
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *joinStuNumLabel;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *joinIDLabel;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *joinPasswordLabel;
    QSpacerItem *verticalSpacer_14;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QLabel *joinPasswordLabel_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *joinstuNumLineEdit;
    QSpacerItem *verticalSpacer;
    QLineEdit *joinIDLineEdit;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *joinPasswordLineEdit;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *joinPasswordLineEdit_2;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *joinNameLabel;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QLabel *joinDepartmentLabel;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QLabel *joinHobbyLabel;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *joinPhoneNumLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *joinNameLineEdit;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *joinDepartLineEdit;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *joinHobbyLineEdit;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *joinPhoneNumLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *translateComboBox;
    QPushButton *translateButton;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *joinOkButton;
    QPushButton *joinCancelButton;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QDialog *Join)
    {
        if (Join->objectName().isEmpty())
            Join->setObjectName(QStringLiteral("Join"));
        Join->resize(589, 407);
        Join->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";"));
        gridLayout_2 = new QGridLayout(Join);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox = new QGroupBox(Join);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(30, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        joinStuNumLabel = new QLabel(groupBox);
        joinStuNumLabel->setObjectName(QStringLiteral("joinStuNumLabel"));
        joinStuNumLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_2->addWidget(joinStuNumLabel);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(85, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(20, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        joinIDLabel = new QLabel(groupBox);
        joinIDLabel->setObjectName(QStringLiteral("joinIDLabel"));
        joinIDLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_3->addWidget(joinIDLabel);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_13 = new QSpacerItem(85, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        joinPasswordLabel = new QLabel(groupBox);
        joinPasswordLabel->setObjectName(QStringLiteral("joinPasswordLabel"));
        joinPasswordLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(joinPasswordLabel);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_14 = new QSpacerItem(85, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_14);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(10, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        joinPasswordLabel_2 = new QLabel(groupBox);
        joinPasswordLabel_2->setObjectName(QStringLiteral("joinPasswordLabel_2"));
        joinPasswordLabel_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_9->addWidget(joinPasswordLabel_2);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        joinstuNumLineEdit = new QLineEdit(groupBox);
        joinstuNumLineEdit->setObjectName(QStringLiteral("joinstuNumLineEdit"));

        verticalLayout->addWidget(joinstuNumLineEdit);

        verticalSpacer = new QSpacerItem(17, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        joinIDLineEdit = new QLineEdit(groupBox);
        joinIDLineEdit->setObjectName(QStringLiteral("joinIDLineEdit"));

        verticalLayout->addWidget(joinIDLineEdit);

        verticalSpacer_6 = new QSpacerItem(17, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        joinPasswordLineEdit = new QLineEdit(groupBox);
        joinPasswordLineEdit->setObjectName(QStringLiteral("joinPasswordLineEdit"));

        verticalLayout->addWidget(joinPasswordLineEdit);

        verticalSpacer_8 = new QSpacerItem(17, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        joinPasswordLineEdit_2 = new QLineEdit(groupBox);
        joinPasswordLineEdit_2->setObjectName(QStringLiteral("joinPasswordLineEdit_2"));

        verticalLayout->addWidget(joinPasswordLineEdit_2);


        horizontalLayout_10->addLayout(verticalLayout);


        horizontalLayout_12->addLayout(horizontalLayout_10);

        horizontalSpacer_7 = new QSpacerItem(13, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        joinNameLabel = new QLabel(groupBox);
        joinNameLabel->setObjectName(QStringLiteral("joinNameLabel"));
        joinNameLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_6->addWidget(joinNameLabel);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalSpacer_11 = new QSpacerItem(53, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        joinDepartmentLabel = new QLabel(groupBox);
        joinDepartmentLabel->setObjectName(QStringLiteral("joinDepartmentLabel"));
        joinDepartmentLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_8->addWidget(joinDepartmentLabel);


        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalSpacer_12 = new QSpacerItem(53, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_12);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(13, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        joinHobbyLabel = new QLabel(groupBox);
        joinHobbyLabel->setObjectName(QStringLiteral("joinHobbyLabel"));
        joinHobbyLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_7->addWidget(joinHobbyLabel);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer_10 = new QSpacerItem(53, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(10, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        joinPhoneNumLabel = new QLabel(groupBox);
        joinPhoneNumLabel->setObjectName(QStringLiteral("joinPhoneNumLabel"));
        joinPhoneNumLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_5->addWidget(joinPhoneNumLabel);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_11->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        joinNameLineEdit = new QLineEdit(groupBox);
        joinNameLineEdit->setObjectName(QStringLiteral("joinNameLineEdit"));

        verticalLayout_2->addWidget(joinNameLineEdit);

        verticalSpacer_3 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        joinDepartLineEdit = new QLineEdit(groupBox);
        joinDepartLineEdit->setObjectName(QStringLiteral("joinDepartLineEdit"));

        verticalLayout_2->addWidget(joinDepartLineEdit);

        verticalSpacer_5 = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        joinHobbyLineEdit = new QLineEdit(groupBox);
        joinHobbyLineEdit->setObjectName(QStringLiteral("joinHobbyLineEdit"));

        verticalLayout_2->addWidget(joinHobbyLineEdit);

        verticalSpacer_7 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        joinPhoneNumLineEdit = new QLineEdit(groupBox);
        joinPhoneNumLineEdit->setObjectName(QStringLiteral("joinPhoneNumLineEdit"));

        verticalLayout_2->addWidget(joinPhoneNumLineEdit);


        horizontalLayout_11->addLayout(verticalLayout_2);


        horizontalLayout_12->addLayout(horizontalLayout_11);


        verticalLayout_5->addLayout(horizontalLayout_12);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer_12 = new QSpacerItem(338, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        translateComboBox = new QComboBox(groupBox);
        translateComboBox->addItem(QString());
        translateComboBox->addItem(QString());
        translateComboBox->setObjectName(QStringLiteral("translateComboBox"));
        translateComboBox->setMinimumSize(QSize(101, 31));
        translateComboBox->setMaximumSize(QSize(101, 31));
        translateComboBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_13->addWidget(translateComboBox);

        translateButton = new QPushButton(groupBox);
        translateButton->setObjectName(QStringLiteral("translateButton"));
        translateButton->setMinimumSize(QSize(81, 31));
        translateButton->setMaximumSize(QSize(81, 31));
        translateButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_13->addWidget(translateButton);


        horizontalLayout_14->addLayout(horizontalLayout_13);


        verticalLayout_5->addLayout(horizontalLayout_14);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox);

        verticalSpacer_9 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_9 = new QSpacerItem(101, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        joinOkButton = new QPushButton(Join);
        joinOkButton->setObjectName(QStringLiteral("joinOkButton"));
        joinOkButton->setEnabled(false);
        joinOkButton->setMinimumSize(QSize(91, 35));
        joinOkButton->setMaximumSize(QSize(91, 35));
        joinOkButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        joinOkButton->setAutoDefault(false);

        horizontalLayout->addWidget(joinOkButton);

        joinCancelButton = new QPushButton(Join);
        joinCancelButton->setObjectName(QStringLiteral("joinCancelButton"));
        joinCancelButton->setMinimumSize(QSize(91, 35));
        joinCancelButton->setMaximumSize(QSize(91, 35));
        joinCancelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        joinCancelButton->setAutoDefault(true);

        horizontalLayout->addWidget(joinCancelButton);

        horizontalSpacer_10 = new QSpacerItem(101, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        verticalLayout_6->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_6, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        joinStuNumLabel->setBuddy(joinstuNumLineEdit);
        joinIDLabel->setBuddy(joinIDLineEdit);
        joinPasswordLabel->setBuddy(joinPasswordLineEdit);
        joinPasswordLabel_2->setBuddy(joinPasswordLineEdit_2);
        joinNameLabel->setBuddy(joinNameLineEdit);
        joinDepartmentLabel->setBuddy(joinDepartLineEdit);
        joinHobbyLabel->setBuddy(joinHobbyLineEdit);
        joinPhoneNumLabel->setBuddy(joinPhoneNumLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(joinstuNumLineEdit, joinIDLineEdit);
        QWidget::setTabOrder(joinIDLineEdit, joinPasswordLineEdit);
        QWidget::setTabOrder(joinPasswordLineEdit, joinPasswordLineEdit_2);
        QWidget::setTabOrder(joinPasswordLineEdit_2, joinNameLineEdit);
        QWidget::setTabOrder(joinNameLineEdit, joinDepartLineEdit);
        QWidget::setTabOrder(joinDepartLineEdit, joinHobbyLineEdit);
        QWidget::setTabOrder(joinHobbyLineEdit, joinPhoneNumLineEdit);

        retranslateUi(Join);

        joinOkButton->setDefault(true);
        joinCancelButton->setDefault(false);


        QMetaObject::connectSlotsByName(Join);
    } // setupUi

    void retranslateUi(QDialog *Join)
    {
        Join->setWindowTitle(QApplication::translate("Join", "NSUCircle - \355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        groupBox->setTitle(QApplication::translate("Join", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        joinStuNumLabel->setText(QApplication::translate("Join", "\355\225\231\353\262\210", nullptr));
        joinIDLabel->setText(QApplication::translate("Join", "\354\225\204\354\235\264\353\224\224", nullptr));
        joinPasswordLabel->setText(QApplication::translate("Join", "\353\271\204\353\260\200\353\262\210\355\230\270", nullptr));
        joinPasswordLabel_2->setText(QApplication::translate("Join", "\353\271\204\353\260\200\353\262\210\355\230\270 \355\231\225\354\235\270", nullptr));
        joinNameLabel->setText(QApplication::translate("Join", "\354\235\264\353\246\204", nullptr));
        joinDepartmentLabel->setText(QApplication::translate("Join", "\354\206\214\354\206\215\355\225\231\352\263\274", nullptr));
        joinHobbyLabel->setText(QApplication::translate("Join", "\354\267\250\353\257\270", nullptr));
        joinPhoneNumLabel->setText(QApplication::translate("Join", "\354\240\204\355\231\224\353\262\210\355\230\270", nullptr));
        translateComboBox->setItemText(0, QApplication::translate("Join", "\355\225\234\352\265\255\354\226\264", nullptr));
        translateComboBox->setItemText(1, QApplication::translate("Join", "English", nullptr));

        translateButton->setText(QApplication::translate("Join", "\353\262\210\354\227\255", nullptr));
        joinOkButton->setText(QApplication::translate("Join", "\355\231\225\354\235\270", nullptr));
        joinCancelButton->setText(QApplication::translate("Join", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Join: public Ui_Join {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOIN_H
