#include "showlistwidget.h"
#include "etcfunctionclass.h"
#include <QVector>
#include <QString>
#include <QTreeWidget>
#include <QFile>
#include <QTextStream>

template class ShowListWidget<NoticeOfCircle>;
template class ShowListWidget<BoardOfCircle>;
template class ShowListWidget<MemberOfCircle>;

template<typename Type>
ShowListWidget<Type>::ShowListWidget(QString _searchFileName, QString _countFileName, QString _itemFileName)
{
    searchFileName = _searchFileName;
    countFileName = _countFileName;
    itemFileName = _itemFileName;
}

template<typename Type>
ShowListWidget<Type>::~ShowListWidget() {}

template<typename Type>
void ShowListWidget<Type>::showListWidgetOfCircle(int n, QString circleName, QString comboBoxText, QString searchLineEdit, QTreeWidget* _item, QVector<Type>* t)
{
//    QFile item, circle, itemCount, file;
//    int count;

//    item.setFileName("SelectFunction.txt");
//    item.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream itemOut(&item);
//    itemOut << 11;
//    item.close();

//    circle.setFileName("circleName.txt");
//    circle.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream circleOut(&circle);
//    circleOut << circleName;
//    circle.close();

//    if (n == 1)
//    {
//        QFile search;
//        search.setFileName(searchFileName);
//        // noticeSearch.txt, boardSearch.txt, memberSearch.txt
//        search.open(QIODevice::WriteOnly|QIODevice::Text);
//        QTextStream searchOut(&search);
//        searchOut << comboBoxText;
//        searchOut << "\n";
//        searchOut << searchLineEdit;
//        search.close();
//    }

//    EtcFunctionClass etc;
//    etc.processRun("_NSUCircle.exe");

//    itemCount.setFileName(countFileName);
//    // noticeCount.txt, boardCount.txt, memberCount.txt
//    itemCount.open(QIODevice::ReadOnly|QIODevice::Text);

//    _item->clear();

//    if (itemCount.isOpen())
//    {
//        QTextStream itemCountIn(&itemCount);
//        itemCountIn >> count;
//        itemCount.close();
//        itemCount.remove(countFileName);

//        file.setFileName(itemFileName);
//        // noticeOfCircle.txt, boardOfCircle.txt, memberOfCircle.txt
//        file.open(QIODevice::ReadOnly|QIODevice::Text);

//        if (file.isOpen())
//        {
//            QTextStream fin(&file);
//            Type _t;
//            QString temp;

//            t->clear();

//            for (int i = 0; i < count; i++)
//            {
//                inputItemFromFile(fin, _t);
//                t->push_back(_t);
//            }
//            file.close();
//            file.remove(itemFileName);

//            for (int i = 0; i < count; i++)
//            {
//                QTreeWidgetItem* list = new QTreeWidgetItem(_item);
//                createListWidget(list, t, i);
//            }
//        }
//    }
}

template<typename Type>
void ShowListWidget<Type>::inputItemFromFile(QTextStream& fin, NoticeOfCircle& noticeOfCircle)
{
    noticeOfCircle.title = fin.readLine();
    noticeOfCircle.content = fin.readLine();
    noticeOfCircle.writer = fin.readLine();
    noticeOfCircle.writedDate = fin.readLine();
}

template<typename Type>
void ShowListWidget<Type>::inputItemFromFile(QTextStream& fin, BoardOfCircle& boardOfCircle)
{
    boardOfCircle.title = fin.readLine();
    boardOfCircle.question = fin.readLine();
    boardOfCircle.answer = fin.readLine();
    boardOfCircle.writedDate = fin.readLine();
    boardOfCircle.answerDate = fin.readLine();
}

template<typename Type>
void ShowListWidget<Type>::inputItemFromFile(QTextStream& fin, MemberOfCircle& memberOfCircle)
{
    QString temp;
    fin >> memberOfCircle.stuNum;
    fin >> memberOfCircle.name;
    fin >> memberOfCircle.stuYear;
    fin >> memberOfCircle.department;
    fin >> memberOfCircle.phoneNum;
    temp = fin.readLine();
    memberOfCircle.reason = fin.readLine();
    memberOfCircle.promise = fin.readLine();
    memberOfCircle.memberStatus = fin.readLine();
}

template<typename Type>
void ShowListWidget<Type>::createListWidget(QTreeWidgetItem* list, QVector<NoticeOfCircle>* noticeOfCircle, int i)
{
    list->setText(0, QString::number(i + 1));
    list->setText(1, noticeOfCircle->at(i).title);
    list->setText(2, noticeOfCircle->at(i).writer);
    list->setText(3, noticeOfCircle->at(i).writedDate);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

template<typename Type>
void ShowListWidget<Type>::createListWidget(QTreeWidgetItem* list, QVector<BoardOfCircle>* boardOfCircle, int i)
{
    list->setText(0, QString::number(i + 1));
    list->setText(1, boardOfCircle->at(i).title);
    list->setText(2, boardOfCircle->at(i).writedDate);
    list->setText(3, boardOfCircle->at(i).answerDate);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}

template<typename Type>
void ShowListWidget<Type>::createListWidget(QTreeWidgetItem* list, QVector<MemberOfCircle>* memberOfCircle, int i)
{
    list->setText(0, QString::number(i + 1));
    list->setText(1, memberOfCircle->at(i).stuNum);
    list->setText(2, memberOfCircle->at(i).name);
    list->setText(3, memberOfCircle->at(i).department);
    list->setText(4, memberOfCircle->at(i).phoneNum);
    list->setText(5, memberOfCircle->at(i).memberStatus);
    list->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable);
}
