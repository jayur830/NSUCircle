#include "memberofcirclepage.h"
#include "noticedialog.h"
#include "scheduledialog.h"
#include "boarddialog.h"
#include "boardquestiondialog.h"
#include "nsucirclemainpage.h"
#include "deletecircledialog.h"
#include <QTreeWidgetItem>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QDate>
#include <QProcess>

MemberOfCirclePage::MemberOfCirclePage(QWidget* parent, StudentInfo* _stu, QString* _circleName, QVector<NoticeOfCircle>* _noticeOfCircle, QVector<ScheduleOfCircle>* _scheduleOfCircle, QVector<BoardOfCircle>* _boardOfCircle) :
    QMainWindow(parent),
    myCircleUi(new Ui::MemberOfCirclePage)
{
    myCircleUi->setupUi(this);
    stu = *_stu;
    circleName = *_circleName;
    setWindowTitle(QString::fromLocal8Bit("NSUCircle - ") + circleName + tr(" Page"));

    myCircleUi->dateEdit->setDate(myCircleUi->circleCalendarWidget->selectedDate());

    this->noticeOfCircle = *_noticeOfCircle;
    this->scheduleOfCircle = *_scheduleOfCircle;
    this->boardOfCircle = *_boardOfCircle;

    setupTreeList(noticeOfCircle, myCircleUi->noticeListWidget);
    setupTreeList(scheduleOfCircle, myCircleUi->scheduleListWidget);
    setupTreeList(boardOfCircle, myCircleUi->boardListWidget);

    connect(myCircleUi->noticeSearchLineEdit, SIGNAL(returnPressed()), myCircleUi->noticeSearchButton, SLOT(click()));
    connect(myCircleUi->boardSearchLineEdit, SIGNAL(returnPressed()), myCircleUi->boardSearchButton, SLOT(click()));
}

MemberOfCirclePage::~MemberOfCirclePage()
{
    delete myCircleUi;
}

template<typename Type>
void MemberOfCirclePage::setupTreeList(QVector<Type>& t, QTreeWidget* _list)
{
    for (int i = 0; i < t.size(); i++)
    {
        QTreeWidgetItem* list = new QTreeWidgetItem(_list);
        createListWidget(list, t, i);
    }
}

void MemberOfCirclePage::createListWidget(QTreeWidgetItem* list, QVector<NoticeOfCircle>& noticeOfCircle, int i)
{
    list->setText(0, QString::number(i + 1));
    list->setText(1, noticeOfCircle.at(i).title);
    list->setText(2, noticeOfCircle.at(i).writer);
    list->setText(3, noticeOfCircle.at(i).writedDate);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

void MemberOfCirclePage::createListWidget(QTreeWidgetItem* list, QVector<ScheduleOfCircle>& scheduleOfCircle, int i)
{
    list->setText(0, scheduleOfCircle.at(i).scheduleTime);
    list->setText(1, scheduleOfCircle.at(i).scheduleContent);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

void MemberOfCirclePage::createListWidget(QTreeWidgetItem* list, QVector<BoardOfCircle>& boardOfCircle, int i)
{
    list->setText(0, QString::number(i + 1));
    list->setText(1, boardOfCircle.at(i).title);
    list->setText(2, boardOfCircle.at(i).writedDate);
    list->setText(3, boardOfCircle.at(i).answerDate);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

void MemberOfCirclePage::on_noticeListWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if (noticeOfCircle.size() != 0)
    {
        column = NULL;
        int index = NULL;
        for (int i = 0; i < noticeOfCircle.size(); i++)
        {
            if (item->text(1) == noticeOfCircle[i].title && item->text(2) == noticeOfCircle[i].writer && item->text(3) == noticeOfCircle[i].writedDate)
            {
                index = i;
                break;
            }
        }

        NoticeDialog* noticeDialog = new NoticeDialog(nullptr, this, index);
        noticeDialog->show();
    }
}

void MemberOfCirclePage::on_scheduleListWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if (scheduleOfCircle.size() != 0)
    {
        column = NULL;
        int index = NULL;
        for (int i = 0; i < scheduleOfCircle.size(); i++)
        {
            if (item->text(0) == scheduleOfCircle.at(i).scheduleTime && item->text(1) == scheduleOfCircle.at(i).scheduleContent)
            {
                index = i;
                break;
            }
        }

        ScheduleDialog* schedule = new ScheduleDialog(nullptr, this, myCircleUi->dateEdit, index);
        schedule->show();
    }
}

void MemberOfCirclePage::on_boardListWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if (boardOfCircle.size() != 0)
    {
        column = NULL;
        int index = NULL;
        for (int i = 0; i < boardOfCircle.size(); i++)
        {
            if (item->text(1) == boardOfCircle[i].title && item->text(2) == boardOfCircle[i].writedDate)
            {
                index = i;
                break;
            }
        }

        BoardDialog* __boardDialog = new BoardDialog(nullptr, this, myCircleUi->boardListWidget, circleName, index, myCircleUi->boardSearchComboBox->currentText(), myCircleUi->boardSearchLineEdit->text());
        __boardDialog->show();
    }
}

void MemberOfCirclePage::on_noticeRefreshButton_clicked()
{
    this->notice->showListWidgetOfCircle(0, circleName, nullptr, nullptr, myCircleUi->noticeListWidget, &noticeOfCircle);
}

void MemberOfCirclePage::on_scheduleRefreshButton_clicked()
{
    showScheduleOfCircle(myCircleUi->dateEdit->text(), circleName, myCircleUi->scheduleListWidget, &scheduleOfCircle);
}

void MemberOfCirclePage::on_boardRefreshButton_clicked()
{
    this->board->showListWidgetOfCircle(0, circleName, nullptr, nullptr, myCircleUi->boardListWidget, &boardOfCircle);
}

void MemberOfCirclePage::on_deleteMyCircleButton_clicked()
{
    StudentInfo* __stu = &this->stu;
    QString* __circleName = &this->circleName;
    DeleteCircleDialog* delCircle = new DeleteCircleDialog(nullptr, this, nullptr, nullptr, __stu, __circleName, 0);
    delCircle->show();
}

void MemberOfCirclePage::on_exitMyCircleButton_clicked()
{
    StudentInfo __stu = this->stu;
    delete this;
    NSUCircleMainPage* nsuMain = new NSUCircleMainPage(nullptr, &__stu);
    nsuMain->show();
}

void MemberOfCirclePage::on_noticeSearchButton_clicked()
{
    this->notice->showListWidgetOfCircle(1, circleName, myCircleUi->noticeSearchComboBox->currentText(), myCircleUi->noticeSearchLineEdit->text(), myCircleUi->noticeListWidget, &noticeOfCircle);
}

void MemberOfCirclePage::on_circleCalendarWidget_clicked(const QDate &date)
{
    myCircleUi->dateEdit->setDate(date);
}

void MemberOfCirclePage::on_dateEdit_userDateChanged(const QDate &date)
{
    myCircleUi->circleCalendarWidget->setSelectedDate(date);
    showScheduleOfCircle(myCircleUi->dateEdit->text(), circleName, myCircleUi->scheduleListWidget, &scheduleOfCircle);
}

void MemberOfCirclePage::on_boardSearchButton_clicked()
{
    this->board->showListWidgetOfCircle(1, circleName, myCircleUi->boardSearchComboBox->currentText(), myCircleUi->boardSearchLineEdit->text(), myCircleUi->boardListWidget, &boardOfCircle);
}

void MemberOfCirclePage::on_boardWriteButton_clicked()
{
    BoardQuestionDialog* boardQuestion = new BoardQuestionDialog(nullptr, this, myCircleUi->boardListWidget, circleName, myCircleUi->boardSearchComboBox->currentText(), myCircleUi->boardSearchLineEdit->text());
    boardQuestion->show();
}

void MemberOfCirclePage::on_deleteBoardButton_clicked()
{
    if (myCircleUi->boardListWidget->currentItem() == nullptr) QMessageBox::information(this, tr("Select a post"), tr("Select a post to delete."), tr("OK"));
    else
    {
        QMessageBox msg;
        msg.setButtonText(QMessageBox::Yes, tr("Yes"));
        msg.setButtonText(QMessageBox::No, tr("No"));
        QMessageBox::StandardButton deleteBoard = msg.question(this, tr("Select a post"), tr("Are you delete current post?"), QMessageBox::Yes|QMessageBox::No);
        if (deleteBoard == QMessageBox::Yes)
        {
            QFile board, file, select;

            board.setFileName("SelectFunction.txt");
            board.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream boardOut(&board);
            boardOut << 17;
            board.close();

            select.setFileName("updateOrDelete.txt");
            select.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream selectOut(&select);
            selectOut << 2;
            select.close();

            int index = NULL;
            for (int i = 0; i < boardOfCircle.size(); i++)
            {
                if (myCircleUi->boardListWidget->currentItem()->text(1) == boardOfCircle.at(i).title && myCircleUi->boardListWidget->currentItem()->text(2) == boardOfCircle.at(i).writedDate)
                {
                    index = i;
                    break;
                }
            }
            file.setFileName("boardDelete.txt");
            file.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream fout(&file);
            fout << boardOfCircle.at(index).title;
            fout << "\n";
            fout << boardOfCircle.at(index).question;
            fout << "\n";
            fout << boardOfCircle.at(index).writedDate;
            fout << "\n";
            fout << circleName;
            file.close();

            processRun("_NSUCircle.exe");

            QMessageBox::information(this, tr("Delete a post"), tr("It was deleted current post."), tr("OK"));
            this->board->showListWidgetOfCircle(1, circleName, myCircleUi->boardSearchComboBox->currentText(), myCircleUi->boardSearchLineEdit->text(), myCircleUi->boardListWidget, &boardOfCircle);
        }
    }
}
