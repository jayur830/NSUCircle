#include "boardofcircledialog.h"
#include "adminofcirclepage.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QTextStream>
#include <QFile>
#include <QDate>
#include <QProcess>

BoardOfCircleDialog::BoardOfCircleDialog(QWidget* parent,  AdminOfCirclePage* _myAdmin, QTreeWidget* _list, QString _circleName, int _index, QString _comboBoxText, QString _searchLineEditText) :
    QDialog(parent),
    boardOfCircleUi(new Ui::BoardOfCircleDialog)
{
    boardOfCircleUi->setupUi(this);
    myAdmin = _myAdmin;
    list = _list;
    circleName = _circleName;
    index = _index;
    comboBoxText = _comboBoxText;
    searchLineEditText = _searchLineEditText;
    boardOfCircleUi->titleLineEdit->setText(myAdmin->boardOfCircle[index].title);
    boardOfCircleUi->questionPlainTextEdit->setPlainText(myAdmin->boardOfCircle[index].question);
    boardOfCircleUi->answerPlainTextEdit->setPlainText(myAdmin->boardOfCircle[index].answer);
}

BoardOfCircleDialog::~BoardOfCircleDialog()
{
    delete boardOfCircleUi;
}

void BoardOfCircleDialog::on_okButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    if (boardOfCircleUi->answerPlainTextEdit->toPlainText() == "") msg.information(this, tr("Post of answer"), QString::fromLocal8Bit("Please write the blank of answer."), QString::fromLocal8Bit("OK"));
    else if (boardOfCircleUi->answerPlainTextEdit->toPlainText() == myAdmin->boardOfCircle.at(index).answer) delete this;
    else
    {
        QMessageBox::StandardButton answerButton = QMessageBox::information(this, tr("Post of answer"), tr("Would you post of answer what you wrote?"), QMessageBox::Yes|QMessageBox::No);
        if (answerButton == QMessageBox::Yes)
        {
            QDate date = QDate::currentDate();
            int year = date.year();
            int month = date.month();
            int day = date.day();

            QFile board, select, file;
            board.setFileName("SelectFunction.txt");
            board.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream boardOut(&board);
            boardOut << 18;
            board.close();

            file.setFileName("boardUpdate.txt");
            file.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream fout(&file);
            fout << myAdmin->boardOfCircle[index].title;
            fout << "\n";
            fout << myAdmin->boardOfCircle[index].question;
            fout << "\n";
            fout << myAdmin->boardOfCircle[index].writedDate;
            fout << "\n";
            fout << boardOfCircleUi->answerPlainTextEdit->toPlainText();
            fout << "\n";
            if (month < 10 && day < 10) fout << QString::number(year) + "-0" + QString::number(month) + "-0" + QString::number(day);
            else if (month >= 10 && day < 10) fout << QString::number(year) + "-" + QString::number(month) + "-0" + QString::number(day);
            else if (month < 10 && day >= 10) fout << QString::number(year) + "-0" + QString::number(month) + "-" + QString::number(day);
            else fout << QString::number(year) + "-" + QString::number(month) + "-" + QString::number(day);
            fout << "\n";
            fout << circleName;
            file.close();

            myAdmin->processRun("_NSUCircle.exe");

            QMessageBox::information(this, tr("Post of answer"), tr("It was posted of answer what you wrote."), QString::fromLocal8Bit("OK"));

            QString __circleName = circleName;
            AdminOfCirclePage* __myAdmin = myAdmin;
            QTreeWidget* __list = list;
            QString __comboBoxText = comboBoxText;
            QString __searchLineEditText = searchLineEditText;
            delete this;
            __myAdmin->board->showListWidgetOfCircle(1, __circleName, __comboBoxText, __searchLineEditText, __list, &__myAdmin->boardOfCircle);
        }
    }
}

void BoardOfCircleDialog::on_cancelButton_clicked()
{
    delete this;
}
