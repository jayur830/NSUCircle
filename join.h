#pragma once

#include "ui_join.h"
#include "etcfunctionclass.h"
#include "translate.h"

namespace Ui {
class Join;
}

class NSUCircle;

class Join :
        public QDialog,
        public Ui::Join,
        virtual public EtcFunctionClass,
        virtual public Translation<Ui::Join, Join>
{
    Q_OBJECT

public:
    explicit Join(QWidget *parent = nullptr, NSUCircle* _nsu = nullptr, QString _language = "");
    ~Join();

    void joinOkButtonEnabled();

private slots:
    void loadingThread();
    void join();
    void textChanged();
    void on_joinCancelButton_clicked();
    void on_translateButton_clicked();

private:
    Ui::Join *joinUi;
    NSUCircle* nsu;
    QList<QLineEdit*> _editList;
};
