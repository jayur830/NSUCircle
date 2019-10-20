#pragma once

#include "ui_boardofcircledialog.h"

namespace Ui {
class BoardOfCircleDialog;
}

class QTreeWidget;
class AdminOfCirclePage;

class BoardOfCircleDialog :
        public QDialog,
        public Ui::BoardOfCircleDialog
{
    Q_OBJECT

public:
    explicit BoardOfCircleDialog(QWidget* parent = nullptr, AdminOfCirclePage* _myAdmin = nullptr, QTreeWidget* _list = nullptr, QString _circleName = "", int _index = NULL, QString _comboBoxText = "", QString _searchLineEditText = "");
    ~BoardOfCircleDialog();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::BoardOfCircleDialog* boardOfCircleUi;
    AdminOfCirclePage* myAdmin;
    QTreeWidget* list;
    QString circleName;
    int index;
    QString comboBoxText;
    QString searchLineEditText;
};
