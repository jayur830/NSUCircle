#include "boarddialog.h"
#include "memberofcirclepage.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QTextStream>
#include <QFile>
#include <QDate>

BoardDialog::BoardDialog(QWidget* parent, MemberOfCirclePage* _myCircle, QTreeWidget* _list, QString _circleName, int _index, QString _comboBoxText, QString _searchLineEditText) :
    QDialog(parent),
    boardDialogUi(new Ui::BoardDialog)
{
    boardDialogUi->setupUi(this);
    myCircle = _myCircle;
    list = _list;
    circleName = _circleName;
    index = _index;
    comboBoxText = _comboBoxText;
    searchLineEditText = _searchLineEditText;

    boardDialogUi->titleLineEdit->setText(myCircle->boardOfCircle.at(index).title);
    boardDialogUi->questionPlainTextEdit->setPlainText(myCircle->boardOfCircle.at(index).question);
    boardDialogUi->answerPlainTextEdit->setPlainText(myCircle->boardOfCircle.at(index).answer);

    if (myCircle->boardOfCircle.at(index).answer != "" && myCircle->boardOfCircle.at(index).answerDate != "")
    {
        boardDialogUi->titleLineEdit->setReadOnly(true);
        boardDialogUi->questionPlainTextEdit->setReadOnly(true);
    }
}

BoardDialog::~BoardDialog()
{
    delete boardDialogUi;
}

void BoardDialog::on_okButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    if (boardDialogUi->titleLineEdit->text() == myCircle->boardOfCircle.at(index).title && boardDialogUi->questionPlainTextEdit->toPlainText() == myCircle->boardOfCircle.at(index).question) delete this;
    else
    {
        QMessageBox::StandardButton boardEdit = msg.question(this, tr("Edit a question of board"), tr("Would you edit from the post to contents what you wrote?"), QMessageBox::Yes|QMessageBox::No);
        if (boardEdit == QMessageBox::Yes)
        {
            QDate date = QDate::currentDate();
            int year = date.year();
            int month = date.month();
            int day = date.day();

            QFile board, select, file;
            board.setFileName("SelectFunction.txt");
            board.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream boardOut(&board);
            boardOut << 17;
            board.close();

            select.setFileName("updateOrDelete.txt");
            select.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream selectOut(&select);
            selectOut << 1;
            select.close();

            file.setFileName("boardUpdate.txt");
            file.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream fout(&file);
            fout << myCircle->boardOfCircle.at(index).title;
            fout << "\n";
            fout << myCircle->boardOfCircle.at(index).question;
            fout << "\n";
            fout << myCircle->boardOfCircle.at(index).writedDate;
            fout << "\n";
            fout << boardDialogUi->titleLineEdit->text();
            fout << "\n";
            fout << boardDialogUi->questionPlainTextEdit->toPlainText();
            fout << "\n";
            if (month < 10 && day < 10) fout << QString::number(year) + "-0" + QString::number(month) + "-0" + QString::number(day);
            else if (month >= 10 && day < 10) fout << QString::number(year) + "-" + QString::number(month) + "-0" + QString::number(day);
            else if (month < 10 && day >= 10) fout << QString::number(year) + "-0" + QString::number(month) + "-" + QString::number(day);
            else fout << QString::number(year) + "-" + QString::number(month) + "-" + QString::number(day);
            fout << "\n";
            fout << circleName;
            file.close();

            myCircle->processRun("_NSUCircle.exe");

            QMessageBox::information(this, tr("Edit a question of board"), tr("It was edited the post."), tr("OK"));

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

void BoardDialog::on_cancelButton_clicked()
{
    delete this;
}
