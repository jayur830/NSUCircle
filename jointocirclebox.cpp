#include "jointocirclebox.h"
#include "nsucirclemainpage.h"
#include "jointocircledialog.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QProcess>

JoinToCircleBox::JoinToCircleBox(QWidget* parent, NSUCircleMainPage* _nsuMain, JoinToCircleDialog* _joinToCircleDialog, StudentInfo* _stu, int _circleNum, QString _circleName) :
    QDialog(parent),
    circleBoxUi(new Ui::JoinToCircleBox)
{
    circleBoxUi->setupUi(this);
    nsuMain = _nsuMain;
    joinToCircleDialog = _joinToCircleDialog;
    stu = _stu;
    circleNum = _circleNum;
    circleName = _circleName;
    setWindowTitle("NSUCircle - " + tr("Join to %s").arg(circleName));
    circleBoxUi->groupBox->setTitle(circleName);
}

JoinToCircleBox::~JoinToCircleBox()
{
    delete circleBoxUi;
}

void JoinToCircleBox::on_okButton_clicked()
{
    if (circleBoxUi->comboBox->currentText() == QString::fromLocal8Bit("---학년선택---") || circleBoxUi->plainTextEdit->toPlainText() == "" || circleBoxUi->plainTextEdit_2->toPlainText() == "")
    {
        QMessageBox::information(this, tr("Input error"), tr("Please complete each item."), tr("OK"));
    }
    else
    {
        QFile joinToCircle, file;

        joinToCircle.setFileName("SelectFunction.txt");
        joinToCircle.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream joinToCircleOut(&joinToCircle);
        joinToCircleOut << 4;
        joinToCircle.close();

        file.setFileName("joinToCircle.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        if (file.isOpen())
        {
            QTextStream fout(&file);

            stu->numOfCircle++;

            fout << stu->stuNum;
            fout << "\n";
            fout << circleBoxUi->comboBox->currentText().left(1);
            fout << "\n";
            fout << circleNum;
            fout << "\n";
            fout << circleBoxUi->plainTextEdit->toPlainText();
            fout << "\n";
            fout << circleBoxUi->plainTextEdit_2->toPlainText();
            fout << "\n";
            fout << stu->numOfCircle;
            file.close();

            nsuMain->processRun("_NSUCircle.exe");

            QMessageBox::information(this, tr("Signed up"), tr("You have joined the circle <%s>. Once approved by the administrator, you will be officially admitted. You can check your approval on the \"My Circle\" on the NSUCircle main page. Thank you.").arg(circleName), tr("OK"));
            joinToCircleDialog->joinButtonDisabled();
            delete this;
        }
    }
}

void JoinToCircleBox::on_cancelButton_clicked()
{
    delete this;
}
