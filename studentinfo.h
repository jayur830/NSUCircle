#pragma once

#include <QString>

struct StudentInfo {
    QString stuNum, ID, Password, name, department, hobby, phoneNum;
    int numOfCircle;
};

struct NoticeOfCircle
{
    QString title, content, writer, writedDate;
};

struct ScheduleOfCircle
{
    QString scheduleTime, scheduleContent;
};

struct BoardOfCircle
{
    QString title, question, answer, writedDate, answerDate;
};

struct MemberOfCircle
{
    QString stuNum, name, stuYear, department, phoneNum, reason, promise, memberStatus;
};

// join == 1
// login == 2
// deleteMember == 3
// joinToCircleBox == 4
// joinToCircle == 5
// showListOfCircle == 6
// deleteCircle == 7
// showListNoticeOfCircle == 8
// showScheduleOfCircle == 9
// showBoardListOfCircle == 10
// showMemberListOfCircle == 11
// noticeWrite == 12
// noticeEditOrDelete == 13
// scheduleWrite == 14
// scheduleEditOrDelete == 15
// boardWrite == 16
// boardEditOrDelete == 17
// boardAnswerWrite == 18
// memberApprove == 19
// memberBeAdmin == 20
// memberDelete == 21
// findId == 22
// findPassword == 23
// passwordEdit == 24
// countOfCirclePage == 25
