#include "nsucircle.h"
#include "join.h"
#include "nsucirclemainpage.h"
#include "loadingform.h"
#include "findiddialog.h"
#include "findpassworddialog.h"
#include "thread.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QProcess>
#include <QTimer>
//#include <QThread>
#include <QDebug>
#include <QApplication>

NSUCircle::NSUCircle(QWidget *parent, QString _language) :
    QDialog(parent),
    ui(new Ui::NSUCircle)
{
    ui->setupUi(this);
    this->setObjectName("NSUCircle");
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
    okButtonEnabled();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
    if (_language != "") language = _language;
    translate(language, this->ui, this);
    connect(this->ui->okButton, SIGNAL(clicked()), this, SLOT(loadingThread()));
}

void NSUCircle::loadingThread()
{
    LoadingForm* loading = new LoadingForm;
    loading->show();
    LoginThread* thread = new LoginThread(this->ui);
    thread->start();
    connect(thread, SIGNAL(started()), thread, SLOT(quit()));
    connect(thread, SIGNAL(finished()), loading, SLOT(deleteLater()));
    connect(loading, SIGNAL(destroyed()), thread, SLOT(deleteLater()));
    connect(thread, SIGNAL(destroyed()), this, SLOT(login()));
}

void NSUCircle::okButtonEnabled()
{
    connect(ui->idLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(ui->passwordLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    _editList.append(ui->idLineEdit);
    _editList.append(ui->passwordLineEdit);
}

void NSUCircle::textChanged()
{
    int modified_count = 0;
    for (int i = 0; i < _editList.length(); i++)
    {
        if (!_editList[i]->text().isEmpty()) modified_count++;
    }
    if (modified_count == 2) ui->okButton->setEnabled(true);
    else ui->okButton->setEnabled(false);
}

void NSUCircle::on_joinButton_clicked()
{
    Join* join = new Join(nullptr, this, language);
    join->show();
}

NSUCircle::~NSUCircle()
{
    delete ui;
}

void NSUCircle::login()
{
    QFile file;
    file.setFileName("loginInfoStudent.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);

    if (!file.isOpen())
    {
        QString msgTitle = tr("Login error");
        QString msgContent = tr("The ID and password you entered do not exist or do not match. Try logging in again.");
        QString msgButton = tr("OK");
        QMessageBox::information(nullptr, msgTitle, msgContent, msgButton);
    }
    else
    {
        QTextStream fin(&file);
        fin >> stu.stuNum;
        fin >> stu.ID;
        fin >> stu.Password;
        fin >> stu.name;
        fin >> stu.department;
        fin >> stu.hobby;
        fin >> stu.phoneNum;
        fin >> stu.numOfCircle;
        file.close();
        file.remove("loginInfoStudent.txt");
        QString msgTitle = tr("Login");
        QString msgContent = stu.name;
        msgContent.append(tr(" students are welcome. Have a nice day~"));
        QString msgButton = tr("OK");
        QMessageBox::information(nullptr, msgTitle, msgContent, msgButton);

        StudentInfo _stu = this->stu;
        QString __language = language;
        delete this;
        NSUCircleMainPage *nsuMain = new NSUCircleMainPage(nullptr, &_stu, __language);
        nsuMain->show();
    }
}

void NSUCircle::on_closeButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    QMessageBox::StandardButton reply = msg.question(nullptr, tr("Exit"), tr("Are you sure you want to exit the program?"), QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        delete this;
        QApplication::quit();
    }
}

void NSUCircle::on_findIdButton_clicked()
{
    FindIDDialog* findId = new FindIDDialog(nullptr, this);
    findId->show();
}

void NSUCircle::on_findPasswordButton_clicked()
{
    FindPasswordDialog* findPassword = new FindPasswordDialog;
    findPassword->show();
}

void NSUCircle::on_translateButton_clicked()
{
    translate(this->ui, this);
}
