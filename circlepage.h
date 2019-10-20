#pragma once

#include <QTextStream>
#include <QFile>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVector>
#include <QDebug>
#include "studentinfo.h"

class CirclePage
{
public:
    void showListNoticeOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<NoticeOfCircle>* noticeOfCircle = nullptr);
    void showScheduleOfCircle(QString date = "", QString circleName = "", QTreeWidget* item = nullptr, QVector<ScheduleOfCircle>* scheduleOfCircle = nullptr);
    void showListBoardOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<BoardOfCircle>* boardOfCircle = nullptr);
    void showListMemberOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* item = nullptr, QVector<MemberOfCircle>* memberOfCircle = nullptr);
};
