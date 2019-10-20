#include "scheduleeditdialog.h"
#include "adminofcirclepage.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QTextStream>
#include <QFile>
#include <QProcess>

ScheduleEditDialog::ScheduleEditDialog(QWidget* parent, AdminOfCirclePage* _myAdmin, QTreeWidget* _list, QDateEdit* _date, QString _circleName, int _index) :
    QDialog(parent),
    scheduleEditUi(new Ui::ScheduleEditDialog)
{
    scheduleEditUi->setupUi(this);
    myAdmin = _myAdmin;
    list = _list;
    date = _date;
    circleName = _circleName;
    index = _index;

    QDateTime _dateTime;
    _dateTime.setDate(date->date());

    int _hour, _min;
    _hour = myAdmin->scheduleOfCircle.at(index).scheduleTime.left(2).toInt();
    _min = myAdmin->scheduleOfCircle.at(index).scheduleTime.right(2).toInt();
    time.setHMS(_hour, _min, NULL);
    _dateTime.setTime(time);
    scheduleEditUi->dateTimeEdit->setDateTime(_dateTime);

    int year, month, day, hour, min;
    year = _dateTime.date().year();
    month = _dateTime.date().month();
    day = _dateTime.date().month();
    hour = _dateTime.time().hour();
    min = _dateTime.time().minute();

    __date.append(QString::number(year));
    __date.append("-");
    if (month < 10) __date.append("0");
    __date.append(QString::number(month));
    __date.append("-");
    if (day < 10) __date.append("0");
    __date.append(QString::number(day));

    if (hour < 10) __time.append("0");
    __time.append(QString::number(hour));
    __time.append(":");
    if (min < 10) __time.append("0");
    __time.append(QString::number(min));

    scheduleEditUi->plainTextEdit->setPlainText(myAdmin->scheduleOfCircle.at(index).scheduleContent);
    __content = scheduleEditUi->plainTextEdit->toPlainText();

    setWindowTitle(tr("Edit a schedule of %s").arg(circleName));
}

ScheduleEditDialog::~ScheduleEditDialog()
{
    delete scheduleEditUi;
}

void ScheduleEditDialog::on_okButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    QMessageBox::StandardButton scheduleEdit = msg.question(this, tr("Edit a schedule"), tr("Would you Edit the schedule into what you wrote?"), QMessageBox::Yes|QMessageBox::No);
    if (scheduleEdit == QMessageBox::Yes)
    {
        QFile schedule, select, file;
        QString scheduleDate, scheduleTime;
        int year, month, day, hour, min;

        year = scheduleEditUi->dateTimeEdit->date().year();
        month = scheduleEditUi->dateTimeEdit->date().month();
        day = scheduleEditUi->dateTimeEdit->date().day();
        scheduleDate.append(QString::number(year));
        scheduleDate.append("-");
        if (month < 10) scheduleDate.append("0");
        scheduleDate.append(QString::number(month));
        scheduleDate.append("-");
        if (day < 10) scheduleDate.append("0");
        scheduleDate.append(QString::number(day));

        hour = scheduleEditUi->dateTimeEdit->time().hour();
        min = scheduleEditUi->dateTimeEdit->time().minute();
        if (hour < 10) scheduleTime.append("0");
        scheduleTime.append(QString::number(hour));
        scheduleTime.append(":");
        if (min < 10) scheduleTime.append("0");
        scheduleTime.append(QString::number(min));

        schedule.setFileName("SelectFunction.txt");
        schedule.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream scheduleOut(&schedule);
        scheduleOut << 15;
        schedule.close();

        select.setFileName("updateOrDelete.txt");
        select.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream selectOut(&select);
        selectOut << 1;
        select.close();

        file.setFileName("scheduleEdit.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << __date;
        fout << "\n";
        fout << __time;
        fout << "\n";
        fout << __content;
        fout << "\n";
        fout << scheduleDate;
        fout << "\n";
        fout << scheduleTime;
        fout << "\n";
        fout << scheduleEditUi->plainTextEdit->toPlainText();
        fout << "\n";
        fout << circleName;
        file.close();

        myAdmin->processRun("_NSUCircle.exe");

        QMessageBox::information(this, tr("Edit a schedule"), tr("It was edited the schedule is."), tr("OK"));

        AdminOfCirclePage* __myAdmin = myAdmin;
        QTreeWidget* __list = list;
        QString __circleName = circleName;
        QString selectedDate = __date;
        delete this;
        __myAdmin->showScheduleOfCircle(selectedDate, __circleName, __list, &__myAdmin->scheduleOfCircle);
    }
}

void ScheduleEditDialog::on_cancelButton_clicked()
{
    delete this;
}
