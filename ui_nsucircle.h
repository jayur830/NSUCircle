/********************************************************************************
** Form generated from reading UI file 'nsucircle.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NSUCIRCLE_H
#define UI_NSUCIRCLE_H

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

class Ui_NSUCircle
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *idLabel;
    QLabel *passwordLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idLineEdit;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *findIdButton;
    QPushButton *findPasswordButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *okButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *joinButton;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *translateComboBox;
    QPushButton *translateButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *closeButton;

    void setupUi(QDialog *NSUCircle)
    {
        if (NSUCircle->objectName().isEmpty())
            NSUCircle->setObjectName(QStringLiteral("NSUCircle"));
        NSUCircle->resize(678, 390);
        NSUCircle->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(NSUCircle);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_3 = new QSpacerItem(658, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(308, 168, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        groupBox = new QGroupBox(NSUCircle);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(321, 171));
        groupBox->setMaximumSize(QSize(321, 171));
        groupBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        idLabel = new QLabel(groupBox);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout->addWidget(idLabel);


        verticalLayout->addLayout(horizontalLayout);

        passwordLabel = new QLabel(groupBox);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        verticalLayout->addWidget(passwordLabel);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        idLineEdit = new QLineEdit(groupBox);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));
        idLineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";\n"
"background-color: rgb(255, 255, 255);"));
        idLineEdit->setClearButtonEnabled(false);

        verticalLayout_2->addWidget(idLineEdit);

        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225\";\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(passwordLineEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        findIdButton = new QPushButton(groupBox);
        findIdButton->setObjectName(QStringLiteral("findIdButton"));
        findIdButton->setMinimumSize(QSize(101, 31));
        findIdButton->setMaximumSize(QSize(101, 31));
        findIdButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        findIdButton->setAutoDefault(true);

        verticalLayout_3->addWidget(findIdButton);

        findPasswordButton = new QPushButton(groupBox);
        findPasswordButton->setObjectName(QStringLiteral("findPasswordButton"));
        findPasswordButton->setMinimumSize(QSize(101, 31));
        findPasswordButton->setMaximumSize(QSize(101, 31));
        findPasswordButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        findPasswordButton->setAutoDefault(true);

        verticalLayout_3->addWidget(findPasswordButton);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        okButton = new QPushButton(groupBox);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setEnabled(false);
        okButton->setMinimumSize(QSize(111, 41));
        okButton->setMaximumSize(QSize(111, 41));
        okButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        okButton->setAutoDefault(true);
        okButton->setFlat(false);

        verticalLayout_4->addWidget(okButton);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox);


        verticalLayout_7->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(658, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        joinButton = new QPushButton(NSUCircle);
        joinButton->setObjectName(QStringLiteral("joinButton"));
        joinButton->setMinimumSize(QSize(121, 51));
        joinButton->setMaximumSize(QSize(121, 51));
        joinButton->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        joinButton->setAutoDefault(true);
        joinButton->setFlat(false);

        horizontalLayout_6->addWidget(joinButton);

        horizontalSpacer_3 = new QSpacerItem(88, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        translateComboBox = new QComboBox(NSUCircle);
        translateComboBox->addItem(QString());
        translateComboBox->addItem(QString());
        translateComboBox->setObjectName(QStringLiteral("translateComboBox"));
        translateComboBox->setMinimumSize(QSize(101, 31));
        translateComboBox->setMaximumSize(QSize(101, 31));
        translateComboBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(translateComboBox);

        translateButton = new QPushButton(NSUCircle);
        translateButton->setObjectName(QStringLiteral("translateButton"));
        translateButton->setMinimumSize(QSize(81, 31));
        translateButton->setMaximumSize(QSize(81, 31));
        translateButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));

        horizontalLayout_4->addWidget(translateButton);


        verticalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_6);

        horizontalSpacer_5 = new QSpacerItem(88, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        closeButton = new QPushButton(NSUCircle);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setMinimumSize(QSize(131, 51));
        closeButton->setMaximumSize(QSize(131, 51));
        closeButton->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        closeButton->setAutoDefault(true);

        horizontalLayout_6->addWidget(closeButton);


        verticalLayout_7->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(verticalLayout_7, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        idLabel->setBuddy(idLineEdit);
        passwordLabel->setBuddy(passwordLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(NSUCircle);

        okButton->setDefault(true);
        joinButton->setDefault(false);
        closeButton->setDefault(false);


        QMetaObject::connectSlotsByName(NSUCircle);
    } // setupUi

    void retranslateUi(QDialog *NSUCircle)
    {
        NSUCircle->setWindowTitle(QApplication::translate("NSUCircle", "NSUCircle", nullptr));
        groupBox->setTitle(QApplication::translate("NSUCircle", "\353\241\234\352\267\270\354\235\270", nullptr));
        idLabel->setText(QApplication::translate("NSUCircle", "\354\225\204\354\235\264\353\224\224", nullptr));
        passwordLabel->setText(QApplication::translate("NSUCircle", "\353\271\204\353\260\200\353\262\210\355\230\270", nullptr));
        idLineEdit->setText(QString());
        findIdButton->setText(QApplication::translate("NSUCircle", "\354\225\204\354\235\264\353\224\224 \354\260\276\352\270\260", nullptr));
        findPasswordButton->setText(QApplication::translate("NSUCircle", "\353\271\204\353\260\200\353\262\210\355\230\270 \354\260\276\352\270\260", nullptr));
        okButton->setText(QApplication::translate("NSUCircle", "\355\231\225  \354\235\270", nullptr));
        joinButton->setText(QApplication::translate("NSUCircle", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        translateComboBox->setItemText(0, QApplication::translate("NSUCircle", "\355\225\234\352\265\255\354\226\264", nullptr));
        translateComboBox->setItemText(1, QApplication::translate("NSUCircle", "English", nullptr));

        translateButton->setText(QApplication::translate("NSUCircle", "\353\262\210  \354\227\255", nullptr));
        closeButton->setText(QApplication::translate("NSUCircle", "\354\242\205  \353\243\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NSUCircle: public Ui_NSUCircle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NSUCIRCLE_H
