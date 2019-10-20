#include "etcfunctionclass.h"
#include "showlistwidget.hpp"
#include <QTextStream>
#include <QFile>
#include <QTreeWidget>
#include <QProcess>

//void EtcFunctionClass::showListNoticeOfCircle(int n, QString circleName, QString comboBoxText, QString searchLineEdit, QTreeWidget* item, QVector<NoticeOfCircle>* noticeOfCircle)
//{
//    QFile notice, circle, file, noticeCount;
//    int count;

//    notice.setFileName("SelectFunction.txt");
//    notice.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream noticeOut(&notice);
//    noticeOut << 8;
//    notice.close();

//    circle.setFileName("circleName.txt");
//    circle.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream circleOut(&circle);
//    circleOut << circleName;
//    circle.close();

//    if (n == 1)
//    {
//        QFile noticeSearch;
//        noticeSearch.setFileName("noticeSearch.txt");
//        noticeSearch.open(QIODevice::WriteOnly|QIODevice::Text);
//        QTextStream noticeSearchOut(&noticeSearch);
//        noticeSearchOut << comboBoxText;
//        noticeSearchOut << "\n";
//        noticeSearchOut << searchLineEdit;
//        noticeSearch.close();
//    }

//    processRun("_NSUCircle.exe");

//    noticeCount.setFileName("noticeCount.txt");
//    noticeCount.open(QIODevice::ReadOnly|QIODevice::Text);

//    item->clear();

//    if (noticeCount.isOpen())
//    {
//        QTextStream noticeCountIn(&noticeCount);
//        noticeCountIn >> count;
//        noticeCount.close();
//        noticeCount.remove("noticeCount.txt");

//        file.setFileName("noticeOfCircle.txt");
//        file.open(QIODevice::ReadOnly|QIODevice::Text);

//        if (file.isOpen())
//        {
//            QTextStream fin(&file);
//            NoticeOfCircle _noticeOfCircle;

//            noticeOfCircle->clear();
//            for (int i = 0; i < count; i++)
//            {
//                _noticeOfCircle.title = fin.readLine();
//                _noticeOfCircle.content = fin.readLine();
//                _noticeOfCircle.writer = fin.readLine();
//                _noticeOfCircle.writedDate = fin.readLine();
//                noticeOfCircle->push_back(_noticeOfCircle);
//            }
//            file.close();
//            file.remove("noticeOfCircle.txt");

//            for (int i = 0; i < count; i++)
//            {
//                QTreeWidgetItem* noticeList = new QTreeWidgetItem(item);
//                noticeList->setText(0, QString::number(i + 1));
//                noticeList->setText(1, noticeOfCircle->at(i).title);
//                noticeList->setText(2, noticeOfCircle->at(i).writer);
//                noticeList->setText(3, noticeOfCircle->at(i).writedDate);
//                noticeList->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
//            }
//        }
//    }
//}

void EtcFunctionClass::showScheduleOfCircle(QString date, QString circleName, QTreeWidget* item, QVector<ScheduleOfCircle>* scheduleOfCircle)
{
    QFile schedule, circle, scheduleDate, file, scheduleCount;
    int count;

    schedule.setFileName("SelectFunction.txt");
    schedule.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream scheduleOut(&schedule);
    scheduleOut << 9;
    schedule.close();

    circle.setFileName("circleName.txt");
    circle.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream circleOut(&circle);
    circleOut << circleName;
    circle.close();

    scheduleDate.setFileName("scheduleDate.txt");
    scheduleDate.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream scheduleDateOut(&scheduleDate);
    scheduleDateOut << date;
    scheduleDate.close();

    processRun("_NSUCircle.exe");

    scheduleCount.setFileName("scheduleCount.txt");
    scheduleCount.open(QIODevice::ReadOnly|QIODevice::Text);

    item->clear();

    if (scheduleCount.isOpen())
    {
        QTextStream scheduleCountIn(&scheduleCount);
        scheduleCountIn >> count;
        scheduleCount.close();
        scheduleCount.remove("scheduleCount.txt");

        file.setFileName("scheduleOfCircle.txt");
        file.open(QIODevice::ReadOnly|QIODevice::Text);

        if (file.isOpen())
        {
            QTextStream fin(&file);
            ScheduleOfCircle _scheduleOfCircle;

            scheduleOfCircle->clear();
            for (int i = 0; i < count; i++)
            {
                _scheduleOfCircle.scheduleTime = fin.readLine();
                _scheduleOfCircle.scheduleContent = fin.readLine();
                scheduleOfCircle->push_back(_scheduleOfCircle);
            }
            file.close();
            file.remove("scheduleOfCircle.txt");

            for (int i = 0; i < count; i++)
            {
                QTreeWidgetItem* scheduleList = new QTreeWidgetItem(item);
                scheduleList->setText(0, scheduleOfCircle->at(i).scheduleTime);
                scheduleList->setText(1, scheduleOfCircle->at(i).scheduleContent);
                scheduleList->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
            }
        }
    }
}

//void EtcFunctionClass::showListBoardOfCircle(int n, QString circleName, QString comboBoxText, QString searchLineEdit, QTreeWidget* item, QVector<BoardOfCircle>* boardOfCircle)
//{
//    QFile board, circle, file, boardCount;
//    int count;

//    board.setFileName("SelectFunction.txt");
//    board.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream boardOut(&board);
//    boardOut << 10;
//    board.close();

//    circle.setFileName("circleName.txt");
//    circle.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream circleOut(&circle);
//    circleOut << circleName;
//    circle.close();

//    if (n == 1)
//    {
//        QFile boardSearch;
//        boardSearch.setFileName("boardSearch.txt");
//        boardSearch.open(QIODevice::WriteOnly|QIODevice::Text);
//        QTextStream boardSearchOut(&boardSearch);
//        boardSearchOut << comboBoxText;
//        boardSearchOut << "\n";
//        boardSearchOut << searchLineEdit;
//        boardSearch.close();
//    }

//    processRun("_NSUCircle.exe");

//    boardCount.setFileName("boardCount.txt");
//    boardCount.open(QIODevice::ReadOnly|QIODevice::Text);

//    item->clear();

//    if (boardCount.isOpen())
//    {
//        QTextStream boardCountIn(&boardCount);
//        boardCountIn >> count;
//        boardCount.close();
//        boardCount.remove("boardCount.txt");

//        file.setFileName("boardOfCircle.txt");
//        file.open(QIODevice::ReadOnly|QIODevice::Text);

//        if (file.isOpen())
//        {
//            QTextStream fin(&file);
//            BoardOfCircle _boardOfCircle;

//            boardOfCircle->clear();
//            for (int i = 0; i < count; i++)
//            {
//                _boardOfCircle.title = fin.readLine();
//                _boardOfCircle.question = fin.readLine();
//                _boardOfCircle.answer = fin.readLine();
//                _boardOfCircle.writedDate = fin.readLine();
//                _boardOfCircle.answerDate = fin.readLine();
//                boardOfCircle->push_back(_boardOfCircle);
//            }
//            file.close();
//            file.remove("boardOfCircle.txt");

//            for (int i = 0; i < count; i++)
//            {
//                QTreeWidgetItem* boardList = new QTreeWidgetItem(item);
//                boardList->setText(0, QString::number(i + 1));
//                boardList->setText(1, boardOfCircle->at(i).title);
//                boardList->setText(2, boardOfCircle->at(i).writedDate);
//                boardList->setText(3, boardOfCircle->at(i).answerDate);
//                boardList->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
//            }
//        }
//    }
//}

//void EtcFunctionClass::showListMemberOfCircle(int n, QString circleName, QString comboBoxText, QString searchLineEdit, QTreeWidget* item, QVector<MemberOfCircle>* memberOfCircle)
//{
//    QFile member, circle, memberCount, file;
//    int count;

//    member.setFileName("SelectFunction.txt");
//    member.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream memberOut(&member);
//    memberOut << 11;
//    member.close();

//    circle.setFileName("circleName.txt");
//    circle.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream circleOut(&circle);
//    circleOut << circleName;
//    circle.close();

//    if (n == 1)
//    {
//        QFile memberSearch;
//        memberSearch.setFileName("memberSearch.txt");
//        memberSearch.open(QIODevice::WriteOnly|QIODevice::Text);
//        QTextStream memberSearchOut(&memberSearch);
//        memberSearchOut << comboBoxText;
//        memberSearchOut << "\n";
//        memberSearchOut << searchLineEdit;
//        memberSearch.close();
//    }

//    processRun("_NSUCircle.exe");

//    memberCount.setFileName("memberCount.txt");
//    memberCount.open(QIODevice::ReadOnly|QIODevice::Text);

//    item->clear();

//    if (memberCount.isOpen())
//    {
//        QTextStream memberCountIn(&memberCount);
//        memberCountIn >> count;
//        memberCount.close();
//        memberCount.remove("memberCount.txt");

//        file.setFileName("memberOfCircle.txt");
//        file.open(QIODevice::ReadOnly|QIODevice::Text);

//        if (file.isOpen())
//        {
//            QTextStream fin(&file);
//            MemberOfCircle _memberOfCircle;
//            QString temp;

//            memberOfCircle->clear();
//            for (int i = 0; i < count; i++)
//            {
//                fin >> _memberOfCircle.stuNum;
//                fin >> _memberOfCircle.name;
//                fin >> _memberOfCircle.stuYear;
//                fin >> _memberOfCircle.department;
//                fin >> _memberOfCircle.phoneNum;
//                temp = fin.readLine();
//                _memberOfCircle.reason = fin.readLine();
//                _memberOfCircle.promise = fin.readLine();
//                _memberOfCircle.memberStatus = fin.readLine();
//                memberOfCircle->push_back(_memberOfCircle);
//            }
//            file.close();
//            file.remove("memberOfCircle.txt");

//            for (int i = 0; i < count; i++)
//            {
//                QTreeWidgetItem* memberList = new QTreeWidgetItem(item);
//                memberList->setText(0, QString::number(i + 1));
//                memberList->setText(1, memberOfCircle->at(i).stuNum);
//                memberList->setText(2, memberOfCircle->at(i).name);
//                memberList->setText(3, memberOfCircle->at(i).department);
//                memberList->setText(4, memberOfCircle->at(i).phoneNum);
//                memberList->setText(5, memberOfCircle->at(i).memberStatus);
//                memberList->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
//            }
//        }
//    }
//}

void EtcFunctionClass::processRun(const char* file)
{
    QProcess process;
    process.start(file);
    while (!process.waitForFinished(100)) {}
    process.close();
}
