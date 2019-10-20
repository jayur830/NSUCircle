#pragma once

#include "ui_boarddialog.h"

namespace Ui {
class BoardDialog;
}

class QTreeWidget;
class MemberOfCirclePage;

class BoardDialog :
        public QDialog,
        public Ui::BoardDialog
{
    Q_OBJECT

public:
    explicit BoardDialog(QWidget* parent = nullptr, MemberOfCirclePage* _myCircle = nullptr, QTreeWidget* _list = nullptr, QString _circleName = "", int _index = NULL, QString _comboBoxText = "", QString _searchLineEditText = "");
    ~BoardDialog();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::BoardDialog* boardDialogUi;
    MemberOfCirclePage* myCircle;
    QTreeWidget* list;
    QString circleName;
    int index;
    QString comboBoxText;
    QString searchLineEditText;
};
