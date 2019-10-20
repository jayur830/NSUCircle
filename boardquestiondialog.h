#pragma once

#include "ui_boardquestiondialog.h"

namespace Ui {
class BoardQuestionDialog;
}

class QTreeWidget;
class MemberOfCirclePage;

class BoardQuestionDialog :
        public QDialog,
        public Ui::BoardQuestionDialog
{
    Q_OBJECT

public:
    explicit BoardQuestionDialog(QWidget* parent = nullptr, MemberOfCirclePage* _myCircle = nullptr, QTreeWidget* _list = nullptr, QString _circleName = "", QString _comboBoxText = "", QString _searchLineEditText = "");
    ~BoardQuestionDialog();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::BoardQuestionDialog* boardQuestionUi;
    MemberOfCirclePage* myCircle;
    QTreeWidget* list;
    QString circleName;
    QString comboBoxText;
    QString searchLineEditText;
};
