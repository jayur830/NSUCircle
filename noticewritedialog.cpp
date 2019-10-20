#include "noticewritedialog.h"
#include "adminofcirclepage.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QDate>
#include <QTextStream>
#include <QFile>
#include <QProcess>

NoticeWriteDialog::NoticeWriteDialog(QWidget* parent, AdminOfCirclePage* _myAdmin, QTreeWidget* _list, QString _name, QString _circleName, QString _comboBoxText, QString _searchLineEditText) :
    QDialog(parent),
    noticeWriteUi(new Ui::NoticeWriteDialog)
{
    noticeWriteUi->setupUi(this);
    myAdmin = _myAdmin;
    list = _list;
    name = _name;
    circleName = _circleName;
    comboBoxText = _comboBoxText;
    searchLineEditText = _searchLineEditText;
}

NoticeWriteDialog::~NoticeWriteDialog()
{
    delete noticeWriteUi;
}

void NoticeWriteDialog::on_okButton_clicked()
{
    if (noticeWriteUi->lineEdit->text() == "" || noticeWriteUi->plainTextEdit->toPlainText() == "") QMessageBox::information(this, tr("Write a new post of notice"), tr("Please complete each item."), tr("OK"));
    else
    {
        QMessageBox msg;
        msg.setButtonText(QMessageBox::Yes, tr("Yes"));
        msg.setButtonText(QMessageBox::No, tr("No"));
        QMessageBox::StandardButton noticeFinalButton = msg.question(this, tr("Write a new post of notice"), tr("Would you post to what you wrote?"), QMessageBox::Yes|QMessageBox::No);
        if (noticeFinalButton == QMessageBox::Yes)
        {
            QDate date = QDate::currentDate();
            int year = date.year();
            int month = date.month();
            int day = date.day();

            NoticeOfCircle temp;
            temp.title = noticeWriteUi->lineEdit->text();
            temp.content = noticeWriteUi->plainTextEdit->toPlainText();
            temp.writer = name;
            if (month < 10 && day < 10) temp.writedDate =  QString::number(year) + "-0" + QString::number(month) + "-0" + QString::number(day);
            else if (month >= 10 && day < 10) temp.writedDate = QString::number(year) + "-" + QString::number(month) + "-0" + QString::number(day);
            else if (month < 10 && day >= 10) temp.writedDate = QString::number(year) + "-0" + QString::number(month) + "-" + QString::number(day);
            else temp.writedDate = QString::number(year) + "-" + QString::number(month) + "-" + QString::number(day);
            myAdmin->noticeOfCircle.push_back(temp);

            QFile notice, file;
            notice.setFileName("SelectFunction.txt");
            notice.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream noticeOut(&notice);
            noticeOut << 12;
            notice.close();

            file.setFileName("noticeWrite.txt");
            file.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream fout(&file);
            fout << noticeWriteUi->lineEdit->text();
            fout << "\n";
            fout << noticeWriteUi->plainTextEdit->toPlainText();
            fout << "\n";
            fout << name;
            fout << "\n";
            if (month < 10 && day < 10) fout << QString::number(year) + "-0" + QString::number(month) + "-0" + QString::number(day);
            else if (month >= 10 && day < 10) fout << QString::number(year) + "-" + QString::number(month) + "-0" + QString::number(day);
            else if (month < 10 && day >= 10) fout << QString::number(year) + "-0" + QString::number(month) + "-" + QString::number(day);
            else fout << QString::number(year) + "-" + QString::number(month) + "-" + QString::number(day);
            fout << "\n";
            fout << circleName;
            file.close();

            myAdmin->processRun("_NSUCircle.exe");

            QMessageBox::information(this, tr("Write a new post of notice"), tr("It was added a new post of notice."), tr("OK"));

            QString __circleName = circleName;
            AdminOfCirclePage* __myAdmin = myAdmin;
            QTreeWidget* __list = list;
            QString __comboBoxText = comboBoxText;
            QString __searchLineEditText = searchLineEditText;
            delete this;
            __myAdmin->notice->showListWidgetOfCircle(1, __circleName, __comboBoxText, __searchLineEditText, __list, &__myAdmin->noticeOfCircle);
        }
    }
}

void NoticeWriteDialog::on_cancelButton_clicked()
{
    delete this;
}
