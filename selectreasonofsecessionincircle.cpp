#include "selectreasonofsecessionincircle.h"
#include "memberofcirclepage.h"
#include "nsucirclemainpage.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QProcess>

SelectReasonOfSecessionInCircle::SelectReasonOfSecessionInCircle(QWidget* parent, MemberOfCirclePage* _myCircle, StudentInfo* _stu, QString* _circleName) :
    QDialog(parent),
    selectReasonUi(new Ui::SelectReasonOfSecessionInCircle)
{
    selectReasonUi->setupUi(this);
    myCircle = _myCircle;
    stu = *_stu;
    circleName = *_circleName;

    if (!selectReasonUi->radioButton_4->isChecked()) selectReasonUi->plainTextEdit->setEnabled(true);
    else selectReasonUi->plainTextEdit->setEnabled(false);

    layout()->setSizeConstraint(QLayout::SetFixedSize);
}

SelectReasonOfSecessionInCircle::~SelectReasonOfSecessionInCircle()
{
    delete selectReasonUi;
}

void SelectReasonOfSecessionInCircle::on_okButton_clicked()
{
    QString reason;
    if (selectReasonUi->radioButton_1->isChecked()) reason = selectReasonUi->radioButton_1->text();
    else if (selectReasonUi->radioButton_2->isChecked()) reason = selectReasonUi->radioButton_2->text();
    else if (selectReasonUi->radioButton_3->isChecked()) reason = selectReasonUi->radioButton_3->text();
    else reason = selectReasonUi->plainTextEdit->toPlainText();

    if (reason == "") QMessageBox::information(this, tr("Other reason"), tr("Please enter other reason."), tr("OK"));
    else
    {
        QMessageBox msg;
        msg.setButtonText(QMessageBox::Yes, tr("Yes"));
        msg.setButtonText(QMessageBox::No, tr("No"));

        QString msgContent = tr("Would you really secession %s circle?").arg(circleName);
        QMessageBox::StandardButton selectReasonButton = msg.question(this, tr("Secession at %s").arg(circleName), msgContent, QMessageBox::Yes|QMessageBox::No);

        if (selectReasonButton == QMessageBox::Yes)
        {
            QFile delCircle, file;

            delCircle.setFileName("SelectFunction.txt");
            delCircle.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream delCircleOut(&delCircle);
            delCircleOut << 7;
            delCircle.close();

            file.setFileName("deleteCircleInfo.txt");
            file.open(QIODevice::WriteOnly|QIODevice::Text);
            if (file.isOpen())
            {
                QTextStream fout(&file);
                stu.numOfCircle--;
                fout << stu.stuNum;
                fout << "\n";
                fout << circleName;
                fout << "\n";
                fout << reason;
                fout << "\n";
                fout << stu.numOfCircle;
                file.close();

                myCircle->processRun("_NSUCircle.exe");
                QMessageBox::information(this, circleName + QString::fromLocal8Bit(" Å»Åð ¿Ï·á"), tr("Thank %s student for activiting hard from %s meantime. Goodbye.").arg(stu.name).arg(circleName), tr("OK"));
                MemberOfCirclePage* __myCircle = this->myCircle;
                StudentInfo __stu = this->stu;
                delete this;
                delete __myCircle;
                NSUCircleMainPage* nsuMain = new NSUCircleMainPage(nullptr, &__stu);
                nsuMain->show();
            }
        }
    }
}

void SelectReasonOfSecessionInCircle::on_cancelButton_clicked()
{
    delete this;
}
