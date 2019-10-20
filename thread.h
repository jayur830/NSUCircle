#pragma once

#include <QThread>
#include <QFile>
#include <QTreeWidget>
#include <QTextStream>
#include <QMessageBox>
#include <QVector>
#include <QTimer>
#include <QDate>
#include <QDebug>
#include "etcfunctionclass.h"
#include "nsucircle.h"
#include "join.h"
#include "findiddialog.h"
#include "findpassworddialog.h"
#include "passwordeditdialog.h"
#include "nsucirclemainpage.h"
#include "jointocircledialog.h"
#include "selectmycircledialog.h"
#include "progressloading.h"

class Thread :
        public QThread,
        virtual public EtcFunctionClass
{
public:
    Thread() {}
    ~Thread() {}
    virtual void run() = 0;
};

class LoginThread : public Thread
{
    Ui::NSUCircle* ui;
public:
    LoginThread(Ui::NSUCircle* _ui)
    {
        ui = _ui;
    }

    ~LoginThread() {}

    virtual void run()
    {
        QFile login, _file;

        login.setFileName("SelectFunction.txt");
        login.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream loginOut(&login);
        loginOut << 2;
        login.close();
        _file.setFileName("login.txt");
        _file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&_file);
        fout << ui->idLineEdit->text();
        fout << "\n";
        fout << ui->passwordLineEdit->text();
        _file.close();
        processRun("_NSUCircle.exe");
    }
};

class FindIDThread : public Thread
{
    Ui::FindIDDialog* ui;
public:
    FindIDThread(Ui::FindIDDialog* _ui)
    {
        ui = _ui;
    }

    ~FindIDThread() {}

    virtual void run()
    {
        QFile findId, file;

        findId.setFileName("SelectFunction.txt");
        findId.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream findIdOut(&findId);
        findIdOut << 22;
        findId.close();

        file.setFileName("findId.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << ui->stuNumLineEdit->text();
        fout << "\n";
        fout << ui->nameLineEdit->text();
        file.close();
        processRun("_NSUCircle.exe");
    }
};

class FindPasswordThread : public Thread
{
    Ui::FindPasswordDialog* ui;
public:
    explicit FindPasswordThread(Ui::FindPasswordDialog* _ui)
    {
        ui = _ui;
    }

    ~FindPasswordThread() {}

    virtual void run()
    {
        QFile findPassword, file;

        findPassword.setFileName("SelectFunction.txt");
        findPassword.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream findPasswordOut(&findPassword);
        findPasswordOut << 23;
        findPassword.close();

        file.setFileName("findPassword.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << ui->idLineEdit->text();
        fout << "\n";
        fout << ui->stuNumLineEdit->text();
        fout << "\n";
        fout << ui->nameLineEdit->text();
        file.close();

        processRun("_NSUCircle.exe");
    }
};

class PasswordEditThread : public Thread
{
    Ui::PasswordEditDialog* ui;
    QString id, stuNum, name;
public:
    explicit PasswordEditThread(Ui::PasswordEditDialog* _ui, QString _id, QString _stuNum, QString _name)
    {
        ui = _ui;
        id = _id;
        stuNum = _stuNum;
        name = _name;
    }

    ~PasswordEditThread() {}

    virtual void run()
    {
        QString boolText;
        QFile passwordEdit, file, currentPasswordSearch;

        passwordEdit.setFileName("SelectFunction.txt");
        passwordEdit.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream passwordEditOut(&passwordEdit);
        passwordEditOut << 24;
        passwordEdit.close();

        file.setFileName("passwordEdit.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << id;
        fout << "\n";
        fout << stuNum;
        fout << "\n";
        fout << name;
        fout << "\n";
        fout << ui->currentPasswordLineEdit->text();
        fout << "\n";
        fout << ui->newPasswordLineEdit->text();
        file.close();

        processRun("_NSUCircle.exe");
    }
};

class JoinThread : public Thread
{
    Ui::Join* ui;
public:
    explicit JoinThread(Ui::Join* _ui)
    {
        ui = _ui;
    }

    ~JoinThread() {}

    virtual void run()
    {
        QFile join, file;

        join.setFileName("SelectFunction.txt");
        join.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream joinOut(&join);
        joinOut << 1;
        join.close();

        file.setFileName("joinInfoOfStudent.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        if (file.isOpen())
        {
            QTextStream fout(&file);
            fout << ui->joinstuNumLineEdit->text();
            fout << "\n";
            fout << ui->joinIDLineEdit->text();
            fout << "\n";
            fout << ui->joinPasswordLineEdit->text();
            fout << "\n";
            fout << ui->joinNameLineEdit->text();
            fout << "\n";
            fout << ui->joinDepartLineEdit->text();
            fout << "\n";
            fout << ui->joinHobbyLineEdit->text();
            fout << "\n";
            fout << ui->joinPhoneNumLineEdit->text();
            file.close();
            processRun("_NSUCircle.exe");
        }
    }
};

class ShowMyCircleDialogThread : public Thread
{
    QString stuNumber;
public:
    ShowMyCircleDialogThread(QString _stuNumber)
    {
        stuNumber = _stuNumber;
    }

    ~ShowMyCircleDialogThread() {}

    virtual void run()
    {
        QFile showListOfCircle, file, stuNum;

        showListOfCircle.setFileName("SelectFunction.txt");
        showListOfCircle.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream showListOfCircleOut(&showListOfCircle);
        showListOfCircleOut << 6;
        showListOfCircle.close();

        stuNum.setFileName("showListOfCircle.txt");
        stuNum.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream stuNumOut(&stuNum);
        stuNumOut << stuNumber;
        stuNum.close();
        processRun("_NSUCircle.exe");
    }
};

class SecessionThread : public Thread
{
    QString stuNum;
public:
    SecessionThread(QString _stuNum)
    {
        stuNum = _stuNum;
    }

    ~SecessionThread() {}

    virtual void run()
    {
        QFile deleteMember, file;

        deleteMember.setFileName("SelectFunction.txt");
        deleteMember.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream deleteMemberOut(&deleteMember);
        deleteMemberOut << 3;
        deleteMember.close();

        file.setFileName("deleteStudentInfo.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << stuNum;
        file.close();

        processRun("_NSUCircle.exe");
        file.remove("deleteStudentInfo.txt");
    }
};

//extern int value, noticeCount, scheduleCount, boardCount, memberCount;

class CountThread : virtual public Thread
{
    QString circleName;
public:
    CountThread(QString _circleName)
    {
        circleName = _circleName;
    }
    ~CountThread() {}

    virtual void run()
    {
        QFile count, circle, totalCount;

        count.setFileName("SelectFunction.txt");
        count.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream countOut(&count);
        countOut << 25;
        count.close();

        circle.setFileName("circleName.txt");
        circle.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream circleOut(&circle);
        circleOut << circleName;
        circle.close();

        processRun("_NSUCircle.exe");

        int __noticeCount, __scheduleCount, __boardCount, __memberCount;
        totalCount.setFileName("countOfCircle.txt");
        totalCount.open(QIODevice::ReadOnly|QIODevice::Text);
        QTextStream countIn(&totalCount);
        countIn >> __noticeCount;
        countIn >> __scheduleCount;
        countIn >> __boardCount;
        countIn >> __memberCount;
        ::noticeCount = __noticeCount;
        ::scheduleCount = __scheduleCount;
        ::boardCount = __boardCount;
        ::memberCount = __memberCount;
        totalCount.close();
        totalCount.remove("countOfCircle.txt");
        *(&::maximum) = 126 + (5 * ::noticeCount) +  (3 * ::scheduleCount) + (6 * ::boardCount);
        *(&::value) = 0;
        ::loading->loadingProgressBar->setMaximum(::maximum);
        qDebug() << ::noticeCount << ::scheduleCount << ::boardCount << ::memberCount;
        qDebug() << ::value << ::maximum;
    }
};

template<typename Type>
class ConnectToCirclePage : virtual public Thread
{
    int count;
    QString circleName, searchFileName, countFileName, itemFileName, comboBoxText, searchLineEditText;
    QVector<Type>* t;
    int n;
public:
    ConnectToCirclePage(QString _circleName, int _n, QVector<Type>* _t, QString _searchFileName, QString _countFileName, QString _itemFileName, QString _comboBoxText, QString _searchLineEditText, int _count)
    {
        circleName = _circleName;
        ::loading->valueChange();
        n = _n;
        ::loading->valueChange();
        searchFileName = _searchFileName;
        ::loading->valueChange();
        countFileName = _countFileName;
        ::loading->valueChange();
        itemFileName = _itemFileName;
        ::loading->valueChange();
        comboBoxText = _comboBoxText;
        ::loading->valueChange();
        searchLineEditText = _searchLineEditText;
        ::loading->valueChange();
        t = _t;
        ::loading->valueChange();
        count = _count;
        ::loading->valueChange();
    }

    ~ConnectToCirclePage() {}

    virtual void run()
    {
        QFile __item, circle, itemCount, file;
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));

        __item.setFileName("SelectFunction.txt");
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        __item.open(QIODevice::WriteOnly|QIODevice::Text);
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        QTextStream itemOut(&__item);
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        if (n == 1) itemOut << 8;
        else if (n == 2) itemOut << 9;
        else if (n == 3) itemOut << 10;
        else if (n == 4) itemOut << 11;
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        __item.close();
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));

        qDebug() << n;

        circle.setFileName("circleName.txt");
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        circle.open(QIODevice::WriteOnly|QIODevice::Text);
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        QTextStream circleOut(&circle);
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        circleOut << circleName;
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        circle.close();
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));

        if (searchFileName != "")
        {
            QFile search;
            QTimer::singleShot(0, ::loading, SLOT(valueChange()));
            search.setFileName(searchFileName);
            QTimer::singleShot(0, ::loading, SLOT(valueChange()));
            search.open(QIODevice::WriteOnly|QIODevice::Text);
            QTimer::singleShot(0, ::loading, SLOT(valueChange()));
            QTextStream searchOut(&search);
            QTimer::singleShot(0, ::loading, SLOT(valueChange()));
            if (searchFileName == "scheduleDate.txt")
            {
                QString date = calculateDate();
                searchOut << date;
                QTimer::singleShot(0, ::loading, SLOT(valueChange()));
                qDebug() << date;
            }
            else
            {
                searchOut << comboBoxText;
                QTimer::singleShot(0, ::loading, SLOT(valueChange()));
                searchOut << "\n";
                QTimer::singleShot(0, ::loading, SLOT(valueChange()));
                searchOut << searchLineEditText;
                QTimer::singleShot(0, ::loading, SLOT(valueChange()));
                qDebug() << comboBoxText << searchLineEditText;
            }
            search.close();
            QTimer::singleShot(0, ::loading, SLOT(valueChange()));
        }

        processRun("_NSUCircle.exe");
        QTimer::singleShot(0, ::loading, SLOT(valueChange()));

        QFile countOfCircle;
        ++::value;
        countOfCircle.setFileName(countFileName);
        ++::value;
        countOfCircle.remove(countFileName);
        ++::value;
        file.setFileName(itemFileName);
        ++::value;
        // noticeOfCircle.txt, scheduleOfCircle.txt, boardOfCircle.txt, memberOfCircle.txt
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        ++::value;

        if (file.isOpen())
        {
            QTextStream fin(&file);
            ++::value;
            Type _t;
            ++::value;
            QString temp;
            ++::value;

            t->clear();
            ++::value;

            for (int i = 0; i < count; i++)
            {
                inputItemFromFile(fin, _t);
                t->push_back(_t);
                ++::value;
            }
            file.close();
            ++::value;
            file.remove(itemFileName);
            ++::value;
        }
    }

    void inputItemFromFile(QTextStream& fin, NoticeOfCircle& noticeOfCircle)
    {
        noticeOfCircle.title = fin.readLine();
        ++::value;
        noticeOfCircle.content = fin.readLine();
        ++::value;
        noticeOfCircle.writer = fin.readLine();
        ++::value;
        noticeOfCircle.writedDate = fin.readLine();
        ++::value;
        qDebug() << noticeOfCircle.title << noticeOfCircle.content << noticeOfCircle.writer << noticeOfCircle.writedDate;
    }

    void inputItemFromFile(QTextStream& fin, ScheduleOfCircle& scheduleOfCircle)
    {
        scheduleOfCircle.scheduleTime = fin.readLine();
        ++::value;
        scheduleOfCircle.scheduleContent = fin.readLine();
        ++::value;
        qDebug() << scheduleOfCircle.scheduleTime << scheduleOfCircle.scheduleContent;
    }

    void inputItemFromFile(QTextStream& fin, BoardOfCircle& boardOfCircle)
    {
        boardOfCircle.title = fin.readLine();
        ++::value;
        boardOfCircle.question = fin.readLine();
        ++::value;
        boardOfCircle.answer = fin.readLine();
        ++::value;
        boardOfCircle.writedDate = fin.readLine();
        ++::value;
        boardOfCircle.answerDate = fin.readLine();
        ++::value;
        qDebug() << boardOfCircle.title << boardOfCircle.question << boardOfCircle.answer << boardOfCircle.writedDate << boardOfCircle.answerDate;
    }

    void inputItemFromFile(QTextStream& fin, MemberOfCircle& memberOfCircle)
    {
        QString temp;
        ++::value;
        fin >> memberOfCircle.stuNum;
        ++::value;
        fin >> memberOfCircle.name;
        ++::value;
        fin >> memberOfCircle.stuYear;
        ++::value;
        fin >> memberOfCircle.department;
        ++::value;
        fin >> memberOfCircle.phoneNum;
        ++::value;
        temp = fin.readLine();
        ++::value;
        memberOfCircle.reason = fin.readLine();
        ++::value;
        memberOfCircle.promise = fin.readLine();
        ++::value;
        memberOfCircle.memberStatus = fin.readLine();
        ++::value;
        qDebug() << memberOfCircle.stuNum << memberOfCircle.name << memberOfCircle.stuYear << memberOfCircle.department << memberOfCircle.phoneNum;
    }

    QString calculateDate()
    {
        QString returnDate;
        ++::value;
        QDate date = QDate::currentDate();
        ++::value;
        int year, month, day;
        ++::value;
        year = date.year();
        ++::value;
        month = date.month();
        ++::value;
        day = date.day();
        ++::value;
        returnDate.append(QString::number(year));
        ++::value;
        returnDate.append("-");
        ++::value;
        if (month < 10) returnDate.append("0");
        returnDate.append(QString::number(month));
        ++::value;
        returnDate.append("-");
        ++::value;
        if (day < 10) returnDate.append("0");
        returnDate.append(QString::number(day));
        ++::value;
        return returnDate;
    }
};
