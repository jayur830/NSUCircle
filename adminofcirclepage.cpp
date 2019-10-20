#include "adminofcirclepage.h"
#include "noticewritedialog.h"
#include "noticeeditdialog.h"
#include "scheduleuploaddialog.h"
#include "scheduleeditdialog.h"
#include "boardofcircledialog.h"
#include "memberofcircledialog.h"
#include "deletecircledialog.h"
#include "nsucirclemainpage.h"
#include "loadingform.h"
#include "thread.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QTextStream>
#include <QFile>
#include <QDate>

template class ConnectToCirclePage<NoticeOfCircle>;
template class ConnectToCirclePage<ScheduleOfCircle>;
template class ConnectToCirclePage<BoardOfCircle>;
template class ConnectToCirclePage<MemberOfCircle>;

AdminOfCirclePage::AdminOfCirclePage(
        QWidget* parent,
        StudentInfo* _stu,
        QString* _circleName,
        QVector<NoticeOfCircle>* _noticeOfCircle,
        QVector<ScheduleOfCircle>* _scheduleOfCircle,
        QVector<BoardOfCircle>* _boardOfCircle,
        QVector<MemberOfCircle>* _memberOfCircle) :
    QDialog(parent),
    myAdminUi(new Ui::AdminOfCirclePage)
{
    myAdminUi->setupUi(this);
    stu = *_stu;
    circleName = *_circleName;
    setWindowTitle("NSUCircle - " + circleName + QString::fromLocal8Bit(" 관리자 페이지"));
    myAdminUi->tabWidget->setTabText(3, circleName + QString::fromLocal8Bit(" 멤버"));
    myAdminUi->memberList->header()->resizeSection(0, 50);
    myAdminUi->memberList->header()->resizeSection(1, 100);
    myAdminUi->memberList->header()->resizeSection(2, 50);
    myAdminUi->memberList->header()->resizeSection(3, 150);
    myAdminUi->memberList->header()->resizeSection(4, 150);

    myAdminUi->dateEdit->setDate(myAdminUi->calendarWidget->selectedDate());

    noticeOfCircle = *_noticeOfCircle;
    scheduleOfCircle = *_scheduleOfCircle;
    boardOfCircle = *_boardOfCircle;
    memberOfCircle = *_memberOfCircle;

    setupTreeList(noticeOfCircle, myAdminUi->noticeList);
    setupTreeList(scheduleOfCircle, myAdminUi->scheduleList);
    setupTreeList(boardOfCircle, myAdminUi->boardList);
    setupTreeList(memberOfCircle, myAdminUi->memberList);

    connect(myAdminUi->noticeSearchLineEdit, SIGNAL(returnPressed()), myAdminUi->noticeSearchButton, SLOT(click()));
    connect(myAdminUi->boardSearchLineEdit, SIGNAL(returnPressed()), myAdminUi->boardSearchButton, SLOT(click()));
    connect(myAdminUi->memberSearchLineEdit, SIGNAL(returnPressed()), myAdminUi->memberSearchButton, SLOT(click()));
}

AdminOfCirclePage::~AdminOfCirclePage()
{
    delete myAdminUi;
}

template<typename Type>
void AdminOfCirclePage::setupTreeList(QVector<Type>& t, QTreeWidget* _list)
{
    for (int i = 0; i < t.size(); i++)
    {
        QTreeWidgetItem* list = new QTreeWidgetItem(_list);
        createListWidget(list, t, i);
    }
}

void AdminOfCirclePage::createListWidget(QTreeWidgetItem* list, QVector<NoticeOfCircle>& noticeOfCircle, int i)
{
    list->setText(0, QString::number(i + 1));
    list->setText(1, noticeOfCircle.at(i).title);
    list->setText(2, noticeOfCircle.at(i).writer);
    list->setText(3, noticeOfCircle.at(i).writedDate);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

void AdminOfCirclePage::createListWidget(QTreeWidgetItem* list, QVector<ScheduleOfCircle>& scheduleOfCircle, int i)
{
    list->setText(0, scheduleOfCircle.at(i).scheduleTime);
    list->setText(1, scheduleOfCircle.at(i).scheduleContent);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

void AdminOfCirclePage::createListWidget(QTreeWidgetItem* list, QVector<BoardOfCircle>& boardOfCircle, int i)
{
    list->setText(0, QString::number(i + 1));
    list->setText(1, boardOfCircle.at(i).title);
    list->setText(2, boardOfCircle.at(i).writedDate);
    list->setText(3, boardOfCircle.at(i).answerDate);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

void AdminOfCirclePage::createListWidget(QTreeWidgetItem* list, QVector<MemberOfCircle>& memberOfCircle, int i)
{
    list->setText(0, QString::number(i + 1));
    list->setText(1, memberOfCircle.at(i).stuNum);
    list->setText(2, memberOfCircle.at(i).name);
    list->setText(3, memberOfCircle.at(i).department);
    list->setText(4, memberOfCircle.at(i).phoneNum);
    list->setText(5, memberOfCircle.at(i).memberStatus);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

void AdminOfCirclePage::on_noticeList_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if (noticeOfCircle.size() != 0)
    {
        column = NULL;
        int index = NULL;
        for (int i = 0; i < noticeOfCircle.size(); i++)
        {
            if (item->text(1) == noticeOfCircle.at(i).title && item->text(2) == noticeOfCircle.at(i).writer && item->text(3) == noticeOfCircle.at(i).writedDate)
            {
                index = i;
                break;
            }
        }
        NoticeEditDialog* noticeEdit = new NoticeEditDialog(nullptr, this, myAdminUi->noticeList, circleName, index, myAdminUi->noticeSearchComboBox->currentText(), myAdminUi->noticeSearchLineEdit->text());
        noticeEdit->show();
    }
}

void AdminOfCirclePage::on_scheduleList_itemDoubleClicked(QTreeWidgetItem *item, int column)
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

        ScheduleEditDialog* scheduleEdit = new ScheduleEditDialog(nullptr, this, myAdminUi->scheduleList, myAdminUi->dateEdit, circleName, index);
        scheduleEdit->show();
    }
}

void AdminOfCirclePage::on_boardList_itemDoubleClicked(QTreeWidgetItem *item, int column)
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

        BoardOfCircleDialog* __boardOfCircle = new BoardOfCircleDialog(nullptr, this, myAdminUi->boardList, circleName, index, myAdminUi->boardSearchComboBox->currentText(), myAdminUi->boardSearchLineEdit->text());
        __boardOfCircle->show();
    }
}

void AdminOfCirclePage::on_memberList_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if (memberOfCircle.size() != 0)
    {
        column = NULL;
        int index = NULL;
        for (int i = 0; i < memberOfCircle.size(); i++)
        {
            if (item->text(1) == memberOfCircle[i].stuNum)
            {
                index = i;
                break;
            }
        }

        MemberOfCircleDialog* __memberOfCircle = new MemberOfCircleDialog(nullptr, this, &stu, myAdminUi->memberList, item, circleName, memberOfCircle.at(index).reason, memberOfCircle.at(index).promise, myAdminUi->memberSearchComboBox->currentText(), myAdminUi->memberSearchLineEdit->text(), index);
        __memberOfCircle->show();
    }
}

void AdminOfCirclePage::on_noticeRefreshButton_clicked()
{
    this->notice->showListWidgetOfCircle(0, circleName, nullptr, nullptr, myAdminUi->noticeList, &noticeOfCircle);
}

void AdminOfCirclePage::on_noticeSearchButton_clicked()
{
    this->notice->showListWidgetOfCircle(1, circleName, myAdminUi->noticeSearchComboBox->currentText(), myAdminUi->noticeSearchLineEdit->text(), myAdminUi->noticeList, &noticeOfCircle);
}

void AdminOfCirclePage::on_noticeNewWriteButton_clicked()
{
    QString comboBoxText = myAdminUi->noticeSearchComboBox->currentText();
    QString searchLineEditText = myAdminUi->noticeSearchLineEdit->text();
    NoticeWriteDialog* noticeWrite = new NoticeWriteDialog(nullptr, this, myAdminUi->noticeList, stu.name, circleName, comboBoxText, searchLineEditText);
    noticeWrite->show();
}

void AdminOfCirclePage::on_calendarWidget_clicked(const QDate &date)
{
    myAdminUi->dateEdit->setDate(date);
}

void AdminOfCirclePage::on_dateEdit_userDateChanged(const QDate &date)
{
    myAdminUi->calendarWidget->setSelectedDate(date);
    showScheduleOfCircle(myAdminUi->dateEdit->text(), circleName, myAdminUi->scheduleList, &scheduleOfCircle);
}

void AdminOfCirclePage::on_scheduleRefreshButton_clicked()
{
    showScheduleOfCircle(myAdminUi->dateEdit->text(), circleName, myAdminUi->scheduleList, &scheduleOfCircle);
}

void AdminOfCirclePage::on_scheduleUploadButton_clicked()
{
    ScheduleUploadDialog* schedule = new ScheduleUploadDialog(nullptr, this, myAdminUi->scheduleList, myAdminUi->dateEdit, circleName);
    schedule->show();
}

void AdminOfCirclePage::on_scheduleDeleteButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    QMessageBox::StandardButton selectDeleteSchedule = msg.question(this, tr("Delete Schedule"), tr("Are you delete current schedule?"), QMessageBox::Yes|QMessageBox::No);
    if (selectDeleteSchedule == QMessageBox::Yes)
    {
        QFile deleteSchedule, select, file;
        int index = NULL;
        for (int i = 0; i < scheduleOfCircle.size(); i++)
        {
            if (scheduleOfCircle.at(i).scheduleTime == myAdminUi->scheduleList->currentItem()->text(0) && scheduleOfCircle.at(i).scheduleContent == myAdminUi->scheduleList->currentItem()->text(1))
            {
                index = i;
                break;
            }
        }

        deleteSchedule.setFileName("SelectFunction.txt");
        deleteSchedule.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream deleteScheduleOut(&deleteSchedule);
        deleteScheduleOut << 15;
        deleteSchedule.close();

        select.setFileName("updateOrDelete.txt");
        select.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream selectOut(&select);
        selectOut << 2;
        select.close();

        file.setFileName("deleteSchedule.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << myAdminUi->dateEdit->text();
        fout << "\n";
        fout << scheduleOfCircle.at(index).scheduleTime;
        fout << "\n";
        fout << scheduleOfCircle.at(index).scheduleContent;
        fout << "\n";
        fout << circleName;
        file.close();

        processRun("_NSUCircle.exe");

        QMessageBox::information(this, tr("Delete schedule"), tr("It was deleted current schedule is."), tr("OK"));
        showScheduleOfCircle(myAdminUi->dateEdit->text(), circleName, myAdminUi->scheduleList, &scheduleOfCircle);
    }
}

void AdminOfCirclePage::on_boardRefreshButton_clicked()
{
    this->board->showListWidgetOfCircle(0, circleName, nullptr, nullptr, myAdminUi->boardList, &boardOfCircle);
}

void AdminOfCirclePage::on_boardSearchButton_clicked()
{
    this->board->showListWidgetOfCircle(1, circleName, myAdminUi->boardSearchComboBox->currentText(), myAdminUi->boardSearchLineEdit->text(), myAdminUi->boardList, &boardOfCircle);
}

void AdminOfCirclePage::on_deleteBoardButton_clicked()
{
    if (myAdminUi->boardList->currentItem() == nullptr) QMessageBox::information(this, tr("Delete a post"), tr("Select a post to delete."), tr("OK"));
    else
    {
        QMessageBox msg;
        msg.setButtonText(QMessageBox::Yes, tr("Yes"));
        msg.setButtonText(QMessageBox::No, tr("No"));
        QMessageBox::StandardButton deleteBoard = msg.question(this, tr("Delete a post"), tr("Are you delete current post?"), QMessageBox::Yes|QMessageBox::No);
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
                if (myAdminUi->boardList->currentItem()->text(1) == boardOfCircle.at(i).title && myAdminUi->boardList->currentItem()->text(2) == boardOfCircle.at(i).writedDate)
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

            QMessageBox::information(this, tr("Delete a post"), tr("It was deleted current post is."), tr("OK"));
            this->board->showListWidgetOfCircle(1, circleName, myAdminUi->boardSearchComboBox->currentText(), myAdminUi->boardSearchLineEdit->text(), myAdminUi->boardList, &boardOfCircle);
        }
    }
}

void AdminOfCirclePage::on_memberRefreshButton_clicked()
{
    this->member->showListWidgetOfCircle(0, circleName, nullptr, nullptr, myAdminUi->memberList, &memberOfCircle);
}

void AdminOfCirclePage::on_memberSearchButton_clicked()
{
    this->member->showListWidgetOfCircle(1, circleName, myAdminUi->memberSearchComboBox->currentText(), myAdminUi->memberSearchLineEdit->text(), myAdminUi->memberList, &memberOfCircle);
}

void AdminOfCirclePage::on_deleteCircleButton_clicked()
{
    StudentInfo* __stu = &this->stu;
    QString* __circleName = &this->circleName;
    DeleteCircleDialog* delCircle = new DeleteCircleDialog(nullptr, nullptr, this, nullptr, __stu, __circleName, 2);
    delCircle->show();
}

void AdminOfCirclePage::on_exitMyAdminButton_clicked()
{
    StudentInfo __stu = this->stu;
    delete this;
    NSUCircleMainPage* nsuMain = new NSUCircleMainPage(nullptr, &__stu);
    nsuMain->show();
}
