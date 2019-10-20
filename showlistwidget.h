#pragma once

#include "etcfunctionclass.h"

class QTextStream;
class QString;
class QTreeWidget;
class QTreeWidgetItem;

template<typename Type>
class ShowListWidget : public EtcFunctionClass
{
    QString searchFileName, countFileName, itemFileName;
public:
    ShowListWidget(QString, QString, QString);
    ~ShowListWidget();

    void showListWidgetOfCircle(int n = NULL, QString circleName = "", QString comboBoxText = "", QString searchLineEdit = "", QTreeWidget* _item = nullptr, QVector<Type>* t = nullptr);
    void inputItemFromFile(QTextStream& fin, NoticeOfCircle& noticeOfCircle);
    void inputItemFromFile(QTextStream& fin, BoardOfCircle& boardOfCircle);
    void inputItemFromFile(QTextStream& fin, MemberOfCircle& memberOfCircle);
    void createListWidget(QTreeWidgetItem* list, QVector<NoticeOfCircle>* noticeOfCircle, int i);
    void createListWidget(QTreeWidgetItem* list, QVector<BoardOfCircle>* boardOfCircle, int i);
    void createListWidget(QTreeWidgetItem* list, QVector<MemberOfCircle>* memberOfCircle, int i);
};
