#include "scheduledialog.h"
#include "memberofcirclepage.h"

ScheduleDialog::ScheduleDialog(QWidget* parent, MemberOfCirclePage* _myCircle, QDateEdit* _date, int _index) :
    QDialog(parent),
    scheduleUi(new Ui::ScheduleDialog)
{
    scheduleUi->setupUi(this);
    myCircle = _myCircle;
    date = _date;
    index = _index;

    QDateTime dateTime;
    dateTime.setDate(date->date());

    QTime time;
    int hour, min;
    hour = myCircle->scheduleOfCircle.at(index).scheduleTime.left(2).toInt();
    min = myCircle->scheduleOfCircle.at(index).scheduleTime.right(2).toInt();
    time.setHMS(hour, min, NULL);
    dateTime.setTime(time);
    scheduleUi->dateTimeEdit->setDateTime(dateTime);

    scheduleUi->plainTextEdit->setPlainText(myCircle->scheduleOfCircle.at(index).scheduleContent);
}

ScheduleDialog::~ScheduleDialog()
{
    delete scheduleUi;
}

void ScheduleDialog::on_cancelButton_clicked()
{
    delete this;
}
