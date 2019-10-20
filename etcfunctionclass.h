#pragma once

#include <QVector>
#include "studentinfo.h"
//#include "loadingform.h"
//#include <QThread>

class QTreeWidget;

class EtcFunctionClass
{    
public:
//    void showListNoticeOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<NoticeOfCircle>* noticeOfCircle = nullptr);
    void showScheduleOfCircle(QString date = "", QString circleName = "", QTreeWidget* item = nullptr, QVector<ScheduleOfCircle>* scheduleOfCircle = nullptr);
//    void showListBoardOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<BoardOfCircle>* boardOfCircle = nullptr);
//    void showListMemberOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<MemberOfCircle>* memberOfCircle = nullptr);

    void processRun(const char* file);
};

