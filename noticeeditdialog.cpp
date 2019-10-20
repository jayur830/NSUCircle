#include "noticeeditdialog.h"
#include "adminofcirclepage.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QTextStream>
#include <QFile>
#include <QDate>
#include <QProcess>

NoticeEditDialog::NoticeEditDialog(QWidget* parent, AdminOfCirclePage* _myAdmin, QTreeWidget* _list, QString _circleName, int _index, QString _comboBoxText, QString _searchLineEditText) :
    QDialog(parent),
    noticeEditUi(new Ui::NoticeEditDialog)
{
    noticeEditUi->setupUi(this);
    myAdmin = _myAdmin;
    list = _list;
    circleName = _circleName;
    index = _index;
    comboBoxText = _comboBoxText;
    searchLineEditText = _searchLineEditText;
    noticeEditUi->lineEdit->setText(myAdmin->noticeOfCircle.at(index).title);
    noticeEditUi->plainTextEdit->setPlainText(myAdmin->noticeOfCircle.at(index).content);
}

NoticeEditDialog::~NoticeEditDialog()
{
    delete noticeEditUi;
}

void NoticeEditDialog::on_okButton_clicked()
{
    if (noticeEditUi->lineEdit->text() == myAdmin->noticeOfCircle.at(index).title && noticeEditUi->plainTextEdit->toPlainText() == myAdmin->noticeOfCircle.at(index).content) delete this;
    else
    {
        if (noticeEditUi->lineEdit->text() == "" || noticeEditUi->plainTextEdit->toPlainText() == "") QMessageBox::information(this, tr("Edit notice"), tr("Please complete each item."), tr("OK"));
        else
        {
            QMessageBox msg;
            msg.setButtonText(QMessageBox::Yes, tr("Yes"));
            msg.setButtonText(QMessageBox::No, tr("No"));
            QMessageBox::StandardButton noticeUpdate = msg.question(this, tr("Edit notice"), tr("Would you Edit the post into what you wrote?"), QMessageBox::Yes|QMessageBox::No);
            if (noticeUpdate == QMessageBox::Yes)
            {
                QDate date = QDate::currentDate();
                int year = date.year();
                int month = date.month();
                int day = date.day();

                QFile notice, select, file;
                notice.setFileName("SelectFunction.txt");
                notice.open(QIODevice::WriteOnly|QIODevice::Text);
                QTextStream noticeOut(&notice);
                noticeOut << 13;
                notice.close();

                select.setFileName("updateOrDelete.txt");
                select.open(QIODevice::WriteOnly|QIODevice::Text);
                QTextStream selectOut(&select);
                selectOut << 1;
                select.close();

                file.setFileName("noticeUpdate.txt");
                file.open(QIODevice::WriteOnly|QIODevice::Text);
                QTextStream fout(&file);
                fout << myAdmin->noticeOfCircle.at(index).title;
                fout << "\n";
                fout << myAdmin->noticeOfCircle.at(index).content;
                fout << "\n";
                fout << myAdmin->noticeOfCircle.at(index).writer;
                fout << "\n";
                fout << myAdmin->noticeOfCircle.at(index).writedDate;
                fout << "\n";
                fout << noticeEditUi->lineEdit->text();
                fout << "\n";
                fout << noticeEditUi->plainTextEdit->toPlainText();
                fout << "\n";
                if (month < 10 && day < 10) fout << QString::number(year) + "-0" + QString::number(month) + "-0" + QString::number(day);
                else if (month >= 10 && day < 10) fout << QString::number(year) + "-" + QString::number(month) + "-0" + QString::number(day);
                else if (month < 10 && day >= 10) fout << QString::number(year) + "-0" + QString::number(month) + "-" + QString::number(day);
                else fout << QString::number(year) + "-" + QString::number(month) + "-" + QString::number(day);
                fout << "\n";
                fout << circleName;
                file.close();

                myAdmin->processRun("_NSUCircle.exe");

                QMessageBox::information(this, tr("Edit notice"), tr("It was edited the post is."), tr("OK"));

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
}

void NoticeEditDialog::on_cancelButton_clicked()
{
    delete this;
}

void NoticeEditDialog::on_noticeDeleteButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    QMessageBox::StandardButton noticeDelete = msg.question(this, tr("Delete notice"), tr("Are you delete current post?"), QMessageBox::Yes|QMessageBox::No);
    if (noticeDelete == QMessageBox::Yes)
    {
        QFile notice, select, file;
        notice.setFileName("SelectFunction.txt");
        notice.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream noticeOut(&notice);
        noticeOut << 13;
        notice.close();

        select.setFileName("updateOrDelete.txt");
        select.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream selectOut(&select);
        selectOut << 2;
        select.close();

        file.setFileName("noticeDelete.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << myAdmin->noticeOfCircle.at(index).title;
        fout << "\n";
        fout << myAdmin->noticeOfCircle.at(index).content;
        fout << "\n";
        fout << myAdmin->noticeOfCircle.at(index).writer;
        fout << "\n";
        fout << myAdmin->noticeOfCircle.at(index).writedDate;
        fout << "\n";
        fout << circleName;
        file.close();

        myAdmin->processRun("_NSUCircle.exe");

        QMessageBox::information(this, tr("Delete notice"), tr("It was deleted current post is."), tr("OK"));

        QString __circleName = circleName;
        AdminOfCirclePage* __myAdmin = myAdmin;
        QTreeWidget* __list = list;
        delete this;
        __myAdmin->notice->showListWidgetOfCircle(0, __circleName, nullptr, nullptr, __list, &__myAdmin->noticeOfCircle);
    }
}
