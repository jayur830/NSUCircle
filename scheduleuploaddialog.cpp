#include "scheduleuploaddialog.h"
#include "adminofcirclepage.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QTextStream>
#include <QFile>
#include <QProcess>

ScheduleUploadDialog::ScheduleUploadDialog(QWidget* parent, AdminOfCirclePage* _myAdmin, QTreeWidget* _list, QDateEdit* _date, QString _circleName) :
    QDialog(parent),
    scheduleUi(new Ui::ScheduleUploadDialog)
{
    scheduleUi->setupUi(this);
    myAdmin = _myAdmin;
    list = _list;
    date = _date;
    circleName = _circleName;

    QTime time;
    QDateTime dateTime;
    dateTime.setDate(date->date());
    dateTime.setTime(time.currentTime());
    scheduleUi->dateTimeEdit->setDateTime(dateTime);

    setWindowTitle(tr("Upload a schedule of %s").arg(circleName));
}

ScheduleUploadDialog::~ScheduleUploadDialog()
{
    delete scheduleUi;
}

void ScheduleUploadDialog::on_okButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    QMessageBox::StandardButton scheduleUpload = msg.question(this, tr("Upload a schedule"), tr("Would you add the schedule into what you wrote?"), QMessageBox::Yes|QMessageBox::No);
    if (scheduleUpload == QMessageBox::Yes)
    {
        QFile schedule, file;
        QString date, time;
        int year, month, day, hour, min;

        year = scheduleUi->dateTimeEdit->date().year();
        month = scheduleUi->dateTimeEdit->date().month();
        day = scheduleUi->dateTimeEdit->date().day();
        date.append(QString::number(year));
        date.append("-");
        if (month < 10) date.append("0");
        date.append(QString::number(month));
        date.append("-");
        if (day < 10) date.append("0");
        date.append(QString::number(day));

        hour = scheduleUi->dateTimeEdit->time().hour();
        min = scheduleUi->dateTimeEdit->time().minute();
        if (hour < 10) time.append("0");
        time.append(QString::number(hour));
        time.append(":");
        if (min < 10) time.append("0");
        time.append(QString::number(min));

        schedule.setFileName("SelectFunction.txt");
        schedule.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream scheduleOut(&schedule);
        scheduleOut << 14;
        schedule.close();

        file.setFileName("scheduleUpload.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << date;
        fout << "\n";
        fout << time;
        fout << "\n";
        fout << scheduleUi->plainTextEdit->toPlainText();
        fout << "\n";
        fout << circleName;
        file.close();

        myAdmin->processRun("_NSUCircle.exe");

        QMessageBox::information(this, tr("Upload a schedule"), tr("It was added a new schedule is."), tr("OK"));

        AdminOfCirclePage* __myAdmin = myAdmin;
        QTreeWidget* __list = list;
        QString __circleName = circleName;
        delete this;
        __myAdmin->showScheduleOfCircle(date, __circleName, __list, &__myAdmin->scheduleOfCircle);
    }
}

void ScheduleUploadDialog::on_cancelButton_clicked()
{
    delete this;
}
