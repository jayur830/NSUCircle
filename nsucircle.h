#pragma once

#include "ui_nsucircle.h"
#include "etcfunctionclass.h"
#include "translate.h"
#include "loadingform.h"
#include <QFile>

namespace Ui {
class NSUCircle;
}

class NSUCircle :
        public QDialog,
        public Ui::NSUCircle,
        virtual public EtcFunctionClass,
        virtual public Translation<Ui::NSUCircle, NSUCircle>
{
    Q_OBJECT

public:
    explicit NSUCircle(QWidget *parent = nullptr, QString _language = "");
    ~NSUCircle();

    void okButtonEnabled();

    Ui::NSUCircle *ui;

private slots:
    void login();
    void loadingThread();
    void textChanged();
    void on_joinButton_clicked();
    void on_closeButton_clicked();
    void on_findIdButton_clicked();
    void on_findPasswordButton_clicked();
    void on_translateButton_clicked();

private:
    QList<QLineEdit*> _editList;
    StudentInfo stu;
};
