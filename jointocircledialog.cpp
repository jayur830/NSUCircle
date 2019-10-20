#include "jointocircledialog.h"
#include "nsucirclemainpage.h"
#include "jointocirclebox.h"
#include <QTextStream>
#include <QFile>
#include <QProcess>

JoinToCircleDialog::JoinToCircleDialog(QWidget* parent, NSUCircleMainPage* _nsuMain, StudentInfo* _stu) :
    QDialog(parent),
    joinToCircleUi(new Ui::JoinToCircleDialog)
{
    joinToCircleUi->setupUi(this);
    nsuMain = _nsuMain;
    stu = _stu;

    joinButtonDisabled();
    plainTextEditHide();
    connectMoreButtons();
    setAlignTopToggledLayout();
}

JoinToCircleDialog::~JoinToCircleDialog()
{
    delete joinToCircleUi;
}

void JoinToCircleDialog::joinButtonDisabled()
{
    int i, circleNum[10];
    for (i = 0; i < 10; i++) circleNum[i] = NULL;

    QFile circle, stuNum, file;

    circle.setFileName("SelectFunction.txt");
    circle.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream circleOut(&circle);
    circleOut << 5;
    circle.close();

    stuNum.setFileName("searchCircleNumWithStuNum.txt");
    stuNum.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream stuNumOut(&stuNum);
    stuNumOut << stu->stuNum;
    stuNum.close();

    nsuMain->processRun("_NSUCircle.exe");

    file.setFileName("numOfCircle.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);

    if (file.isOpen())
    {
        QTextStream fin(&file);
        i = 0;
        while (!fin.atEnd())
        {
            fin >> circleNum[i];
            i++;
        }
        file.close();
        file.remove("numOfCircle.txt");

        for (i = 0; i < 10; i++)
        {
            if (circleNum[i] == NULL) break;
            else joinButtonDisabled(circleNum[i]);
        }
    }
}
void JoinToCircleDialog::joinButtonDisabled(int circleNum)
{
    if (circleNum == 1) joinToCircleUi->joinCircleButton->setEnabled(false);
    else if (circleNum == 2) joinToCircleUi->joinCircleButton_2->setEnabled(false);
    else if (circleNum == 3) joinToCircleUi->joinCircleButton_3->setEnabled(false);
    else if (circleNum == 4) joinToCircleUi->joinCircleButton_4->setEnabled(false);
    else if (circleNum == 5) joinToCircleUi->joinCircleButton_5->setEnabled(false);
    else if (circleNum == 6) joinToCircleUi->joinCircleButton_6->setEnabled(false);
    else if (circleNum == 7) joinToCircleUi->joinCircleButton_7->setEnabled(false);
    else if (circleNum == 8) joinToCircleUi->joinCircleButton_8->setEnabled(false);
    else if (circleNum == 9) joinToCircleUi->joinCircleButton_9->setEnabled(false);
    else if (circleNum == 10) joinToCircleUi->joinCircleButton_10->setEnabled(false);
    else if (circleNum == 11) joinToCircleUi->joinCircleButton_11->setEnabled(false);
    else if (circleNum == 12) joinToCircleUi->joinCircleButton_12->setEnabled(false);
    else if (circleNum == 13) joinToCircleUi->joinCircleButton_13->setEnabled(false);
    else if (circleNum == 14) joinToCircleUi->joinCircleButton_14->setEnabled(false);
    else if (circleNum == 15) joinToCircleUi->joinCircleButton_15->setEnabled(false);
    else if (circleNum == 16) joinToCircleUi->joinCircleButton_16->setEnabled(false);
    else if (circleNum == 17) joinToCircleUi->joinCircleButton_17->setEnabled(false);
    else if (circleNum == 18) joinToCircleUi->joinCircleButton_18->setEnabled(false);
    else if (circleNum == 19) joinToCircleUi->joinCircleButton_19->setEnabled(false);
    else if (circleNum == 20) joinToCircleUi->joinCircleButton_20->setEnabled(false);
    else if (circleNum == 21) joinToCircleUi->joinCircleButton_21->setEnabled(false);
    else if (circleNum == 22) joinToCircleUi->joinCircleButton_22->setEnabled(false);
    else if (circleNum == 23) joinToCircleUi->joinCircleButton_23->setEnabled(false);
    else if (circleNum == 24) joinToCircleUi->joinCircleButton_24->setEnabled(false);
    else if (circleNum == 25) joinToCircleUi->joinCircleButton_25->setEnabled(false);
    else if (circleNum == 26) joinToCircleUi->joinCircleButton_27->setEnabled(false);
    else if (circleNum == 27) joinToCircleUi->joinCircleButton_28->setEnabled(false);
    else if (circleNum == 28) joinToCircleUi->joinCircleButton_29->setEnabled(false);
    else if (circleNum == 29) joinToCircleUi->joinCircleButton_30->setEnabled(false);
}
void JoinToCircleDialog::plainTextEditHide()
{
    joinToCircleUi->plainTextEdit->hide();
    joinToCircleUi->plainTextEdit_2->hide();
    joinToCircleUi->plainTextEdit_3->hide();
    joinToCircleUi->plainTextEdit_4->hide();
    joinToCircleUi->plainTextEdit_5->hide();
    joinToCircleUi->plainTextEdit_6->hide();
    joinToCircleUi->plainTextEdit_7->hide();
    joinToCircleUi->plainTextEdit_8->hide();
    joinToCircleUi->plainTextEdit_9->hide();
    joinToCircleUi->plainTextEdit_10->hide();
    joinToCircleUi->plainTextEdit_11->hide();
    joinToCircleUi->plainTextEdit_12->hide();
    joinToCircleUi->plainTextEdit_13->hide();
    joinToCircleUi->plainTextEdit_14->hide();
    joinToCircleUi->plainTextEdit_15->hide();
    joinToCircleUi->plainTextEdit_16->hide();
    joinToCircleUi->plainTextEdit_17->hide();
    joinToCircleUi->plainTextEdit_18->hide();
    joinToCircleUi->plainTextEdit_19->hide();
    joinToCircleUi->plainTextEdit_20->hide();
    joinToCircleUi->plainTextEdit_21->hide();
    joinToCircleUi->plainTextEdit_22->hide();
    joinToCircleUi->plainTextEdit_23->hide();
    joinToCircleUi->plainTextEdit_24->hide();
    joinToCircleUi->plainTextEdit_25->hide();
    joinToCircleUi->plainTextEdit_26->hide();
    joinToCircleUi->plainTextEdit_27->hide();
    joinToCircleUi->plainTextEdit_28->hide();
    joinToCircleUi->plainTextEdit_29->hide();
}
void JoinToCircleDialog::connectMoreButtons()
{
    connect(joinToCircleUi->moreButton, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_1()));
    connect(joinToCircleUi->moreButton_2, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_2()));
    connect(joinToCircleUi->moreButton_3, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_3()));
    connect(joinToCircleUi->moreButton_4, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_4()));
    connect(joinToCircleUi->moreButton_5, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_5()));
    connect(joinToCircleUi->moreButton_6, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_6()));
    connect(joinToCircleUi->moreButton_7, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_7()));
    connect(joinToCircleUi->moreButton_8, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_8()));
    connect(joinToCircleUi->moreButton_9, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_9()));
    connect(joinToCircleUi->moreButton_10, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_10()));
    connect(joinToCircleUi->moreButton_11, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_11()));
    connect(joinToCircleUi->moreButton_12, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_12()));
    connect(joinToCircleUi->moreButton_13, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_13()));
    connect(joinToCircleUi->moreButton_14, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_14()));
    connect(joinToCircleUi->moreButton_15, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_15()));
    connect(joinToCircleUi->moreButton_16, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_16()));
    connect(joinToCircleUi->moreButton_17, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_17()));
    connect(joinToCircleUi->moreButton_18, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_18()));
    connect(joinToCircleUi->moreButton_19, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_19()));
    connect(joinToCircleUi->moreButton_20, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_20()));
    connect(joinToCircleUi->moreButton_21, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_21()));
    connect(joinToCircleUi->moreButton_22, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_22()));
    connect(joinToCircleUi->moreButton_23, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_23()));
    connect(joinToCircleUi->moreButton_24, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_24()));
    connect(joinToCircleUi->moreButton_25, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_25()));
    connect(joinToCircleUi->moreButton_26, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_26()));
    connect(joinToCircleUi->moreButton_27, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_27()));
    connect(joinToCircleUi->moreButton_28, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_28()));
    connect(joinToCircleUi->moreButton_29, SIGNAL(clicked()), this, SLOT(toggledCircleInfo_29()));
}
void JoinToCircleDialog::setAlignTopToggledLayout()
{
    joinToCircleUi->toggledLayout_1->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_2->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_3->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_4->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_5->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_6->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_7->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_8->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_9->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_10->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_11->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_12->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_13->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_14->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_15->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_16->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_17->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_18->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_19->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_20->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_21->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_22->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_23->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_24->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_25->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_26->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_27->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_28->setAlignment(Qt::AlignTop);
    joinToCircleUi->toggledLayout_29->setAlignment(Qt::AlignTop);
}

void JoinToCircleDialog::toggledCircleInfo_1()
{
    if (joinToCircleUi->plainTextEdit->isVisible()) joinToCircleUi->plainTextEdit->setVisible(false);
    else joinToCircleUi->plainTextEdit->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_2()
{
    if (joinToCircleUi->plainTextEdit_2->isVisible()) joinToCircleUi->plainTextEdit_2->setVisible(false);
    else joinToCircleUi->plainTextEdit_2->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_3()
{
    if (joinToCircleUi->plainTextEdit_3->isVisible()) joinToCircleUi->plainTextEdit_3->setVisible(false);
    else joinToCircleUi->plainTextEdit_3->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_4()
{
    if (joinToCircleUi->plainTextEdit_4->isVisible()) joinToCircleUi->plainTextEdit_4->setVisible(false);
    else joinToCircleUi->plainTextEdit_4->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_5()
{
    if (joinToCircleUi->plainTextEdit_5->isVisible()) joinToCircleUi->plainTextEdit_5->setVisible(false);
    else joinToCircleUi->plainTextEdit_5->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_6()
{
    if (joinToCircleUi->plainTextEdit_6->isVisible()) joinToCircleUi->plainTextEdit_6->setVisible(false);
    else joinToCircleUi->plainTextEdit_6->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_7()
{
    if (joinToCircleUi->plainTextEdit_7->isVisible()) joinToCircleUi->plainTextEdit_7->setVisible(false);
    else joinToCircleUi->plainTextEdit_7->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_8()
{
    if (joinToCircleUi->plainTextEdit_8->isVisible()) joinToCircleUi->plainTextEdit_8->setVisible(false);
    else joinToCircleUi->plainTextEdit_8->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_9()
{
    if (joinToCircleUi->plainTextEdit_9->isVisible()) joinToCircleUi->plainTextEdit_9->setVisible(false);
    else joinToCircleUi->plainTextEdit_9->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_10()
{
    if (joinToCircleUi->plainTextEdit_10->isVisible()) joinToCircleUi->plainTextEdit_10->setVisible(false);
    else joinToCircleUi->plainTextEdit_10->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_11()
{
    if (joinToCircleUi->plainTextEdit_11->isVisible()) joinToCircleUi->plainTextEdit_11->setVisible(false);
    else joinToCircleUi->plainTextEdit_11->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_12()
{
    if (joinToCircleUi->plainTextEdit_12->isVisible()) joinToCircleUi->plainTextEdit_12->setVisible(false);
    else joinToCircleUi->plainTextEdit_12->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_13()
{
    if (joinToCircleUi->plainTextEdit_13->isVisible()) joinToCircleUi->plainTextEdit_13->setVisible(false);
    else joinToCircleUi->plainTextEdit_13->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_14()
{
    if (joinToCircleUi->plainTextEdit_14->isVisible()) joinToCircleUi->plainTextEdit_14->setVisible(false);
    else joinToCircleUi->plainTextEdit_14->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_15()
{
    if (joinToCircleUi->plainTextEdit_15->isVisible()) joinToCircleUi->plainTextEdit_15->setVisible(false);
    else joinToCircleUi->plainTextEdit_15->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_16()
{
    if (joinToCircleUi->plainTextEdit_16->isVisible()) joinToCircleUi->plainTextEdit_16->setVisible(false);
    else joinToCircleUi->plainTextEdit_16->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_17()
{
    if (joinToCircleUi->plainTextEdit_17->isVisible()) joinToCircleUi->plainTextEdit_17->setVisible(false);
    else joinToCircleUi->plainTextEdit_17->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_18()
{
    if (joinToCircleUi->plainTextEdit_18->isVisible()) joinToCircleUi->plainTextEdit_18->setVisible(false);
    else joinToCircleUi->plainTextEdit_18->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_19()
{
    if (joinToCircleUi->plainTextEdit_19->isVisible()) joinToCircleUi->plainTextEdit_19->setVisible(false);
    else joinToCircleUi->plainTextEdit_19->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_20()
{
    if (joinToCircleUi->plainTextEdit_20->isVisible()) joinToCircleUi->plainTextEdit_20->setVisible(false);
    else joinToCircleUi->plainTextEdit_20->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_21()
{
    if (joinToCircleUi->plainTextEdit_21->isVisible()) joinToCircleUi->plainTextEdit_21->setVisible(false);
    else joinToCircleUi->plainTextEdit_21->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_22()
{
    if (joinToCircleUi->plainTextEdit_22->isVisible()) joinToCircleUi->plainTextEdit_22->setVisible(false);
    else joinToCircleUi->plainTextEdit_22->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_23()
{
    if (joinToCircleUi->plainTextEdit_23->isVisible()) joinToCircleUi->plainTextEdit_23->setVisible(false);
    else joinToCircleUi->plainTextEdit_23->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_24()
{
    if (joinToCircleUi->plainTextEdit_24->isVisible()) joinToCircleUi->plainTextEdit_24->setVisible(false);
    else joinToCircleUi->plainTextEdit_24->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_25()
{
    if (joinToCircleUi->plainTextEdit_25->isVisible()) joinToCircleUi->plainTextEdit_25->setVisible(false);
    else joinToCircleUi->plainTextEdit_25->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_26()
{
    if (joinToCircleUi->plainTextEdit_26->isVisible()) joinToCircleUi->plainTextEdit_26->setVisible(false);
    else joinToCircleUi->plainTextEdit_26->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_27()
{
    if (joinToCircleUi->plainTextEdit_27->isVisible()) joinToCircleUi->plainTextEdit_27->setVisible(false);
    else joinToCircleUi->plainTextEdit_27->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_28()
{
    if (joinToCircleUi->plainTextEdit_28->isVisible()) joinToCircleUi->plainTextEdit_28->setVisible(false);
    else joinToCircleUi->plainTextEdit_28->setVisible(true);
}
void JoinToCircleDialog::toggledCircleInfo_29()
{
    if (joinToCircleUi->plainTextEdit_29->isVisible()) joinToCircleUi->plainTextEdit_29->setVisible(false);
    else joinToCircleUi->plainTextEdit_29->setVisible(true);
}

void JoinToCircleDialog::on_joinCircleButton_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 1, joinToCircleUi->circleNameLabel_1->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_2_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 2, joinToCircleUi->circleNameLabel_2->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_3_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 3, joinToCircleUi->circleNameLabel_3->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_4_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 4, joinToCircleUi->circleNameLabel_4->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_5_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 5, joinToCircleUi->circleNameLabel_5->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_6_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 6, joinToCircleUi->circleNameLabel_6->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_7_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 7, joinToCircleUi->circleNameLabel_7->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_8_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 8, joinToCircleUi->circleNameLabel_8->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_9_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 9, joinToCircleUi->circleNameLabel_9->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_10_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 10, joinToCircleUi->circleNameLabel_10->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_11_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 11, joinToCircleUi->circleNameLabel_11->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_12_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 12, joinToCircleUi->circleNameLabel_12->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_13_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 13, joinToCircleUi->circleNameLabel_13->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_14_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 14, joinToCircleUi->circleNameLabel_14->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_15_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 15, joinToCircleUi->circleNameLabel_15->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_16_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 16, joinToCircleUi->circleNameLabel_16->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_17_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 17, joinToCircleUi->circleNameLabel_17->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_18_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 18, joinToCircleUi->circleNameLabel_18->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_19_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 19, joinToCircleUi->circleNameLabel_19->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_20_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 20, joinToCircleUi->circleNameLabel_20->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_21_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 21, joinToCircleUi->circleNameLabel_21->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_22_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 22, joinToCircleUi->circleNameLabel_22->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_23_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 23, joinToCircleUi->circleNameLabel_23->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_24_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 24, joinToCircleUi->circleNameLabel_24->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_25_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 25, joinToCircleUi->circleNameLabel_25->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_27_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 26, joinToCircleUi->circleNameLabel_26->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_28_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 27, joinToCircleUi->circleNameLabel_27->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_29_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 28, joinToCircleUi->circleNameLabel_28->text());
    circleBox->show();
}
void JoinToCircleDialog::on_joinCircleButton_30_clicked()
{
    JoinToCircleBox* circleBox = new JoinToCircleBox(nullptr, nsuMain, this, stu, 29, joinToCircleUi->circleNameLabel_29->text());
    circleBox->show();
}

void JoinToCircleDialog::on_cancelButton_clicked()
{
    delete this;
}
