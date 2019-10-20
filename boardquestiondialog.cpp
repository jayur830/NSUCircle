#include "boardquestiondialog.h"
#include "memberofcirclepage.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QDate>
#include <QTextStream>
#include <QFile>
#include <QProcess>
BoardQuestionDialog::BoardQuestionDialog(QWidget* parent, MemberOfCirclePage* _myCircle, QTreeWidget* _list, QString _circleName, QString _comboBoxText, QString _searchLineEditText) :
    QDialog(parent),
    boardQuestionUi(new Ui::BoardQuestionDialog)
{
    boardQuestionUi->setupUi(this);
    myCircle = _myCircle;
    list = _list;
    circleName = _circleName;
    comboBoxText = _comboBoxText;
    searchLineEditText = _searchLineEditText;
}

BoardQuestionDialog::~BoardQuestionDialog()
{
    delete boardQuestionUi;
}

void BoardQuestionDialog::on_okButton_clicked()
{
    if (boardQuestionUi->titleLineEdit->text() == "" || boardQuestionUi->questionPlainTextEdit->toPlainText() == "")
        QMessageBox::information(this, tr("Post of question"), tr("Please complete each item."), tr("OK"));
    else
    {
        QMessageBox msg;
        msg.setButtonText(QMessageBox::Yes, tr("Yes"));
        msg.setButtonText(QMessageBox::No, tr("No"));
        QMessageBox::StandardButton boardWrite = msg.question(this, tr("Post of question"), tr("Would you post of new question what you wrote?"), QMessageBox::Yes|QMessageBox::No);
        if (boardWrite == QMessageBox::Yes)
        {
            QDate date = QDate::currentDate();
            int year = date.year();
            int month = date.month();
            int day = date.day();

            QFile board, select, file;
            board.setFileName("SelectFunction.txt");
            board.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream boardOut(&board);
            boardOut << 16;
            board.close();

            file.setFileName("boardWrite.txt");
            file.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream fout(&file);
            fout << boardQuestionUi->titleLineEdit->text();
            fout << "\n";
            fout << boardQuestionUi->questionPlainTextEdit->toPlainText();
            fout << "\n";
            if (month < 10 && day < 10) fout << QString::number(year) + "-0" + QString::number(month) + "-0" + QString::number(day);
            else if (month >= 10 && day < 10) fout << QString::number(year) + "-" + QString::number(month) + "-0" + QString::number(day);
            else if (month < 10 && day >= 10) fout << QString::number(year) + "-0" + QString::number(month) + "-" + QString::number(day);
            else fout << QString::number(year) + "-" + QString::number(month) + "-" + QString::number(day);
            fout << "\n";
            fout << circleName;
            file.close();

            myCircle->processRun("_NSUCircle.exe");

            QMessageBox::information(this, tr("Post of question"), tr("It was added a new question at board."), tr("OK"));

            QString __circleName = circleName;
            MemberOfCirclePage* __myCircle = myCircle;
            QTreeWidget* __list = list;
            QString __comboBoxText = comboBoxText;
            QString __searchLineEditText = searchLineEditText;
            delete this;
            __myCircle->board->showListWidgetOfCircle(1, __circleName, __comboBoxText, __searchLineEditText, __list, &__myCircle->boardOfCircle);
        }
    }
}

void BoardQuestionDialog::on_cancelButton_clicked()
{
    delete this;
}
