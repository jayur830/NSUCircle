#include "join.h"
#include "nsucircle.h"
#include "thread.h"
#include <QRegExpValidator>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QDebug>

Join::Join(QWidget* parent, NSUCircle* _nsu, QString _language) :
    QDialog(parent),
    joinUi(new Ui::Join)
{
    joinUi->setupUi(this);
    nsu = _nsu;
    language = _language;

    QRegExp stuNumRegExp("[0-9]{0,8}"), phoneNumRegExp("[0-9]{0,11}");
    joinUi->joinstuNumLineEdit->setValidator(new QRegExpValidator(stuNumRegExp, this));
    joinUi->joinPhoneNumLineEdit->setValidator(new QRegExpValidator(phoneNumRegExp, this));

    joinUi->joinPasswordLineEdit->setEchoMode(QLineEdit::Password);
    joinUi->joinPasswordLineEdit_2->setEchoMode(QLineEdit::Password);

    joinOkButtonEnabled();

    translate(language, this->joinUi, this);
    layout()->setSizeConstraint(QLayout::SetFixedSize);

    connect(joinUi->joinOkButton, SIGNAL(clicked()), this, SLOT(loadingThread()));
}

Join::~Join()
{
    delete joinUi;
}

void Join::loadingThread()
{
    if (joinUi->joinPasswordLineEdit->text() != joinUi->joinPasswordLineEdit_2->text())
    {
        QMessageBox::information(this, tr("Error entering pasword"), tr("Passwords do not match."), tr("OK"));
    }
    else
    {
        QString phoneNum = joinUi->joinPhoneNumLineEdit->text();
        qDebug() << phoneNum.left(3);
        if (phoneNum.left(3) != "010" && phoneNum.left(3) != "011" && phoneNum.left(3) != "016" && phoneNum.left(3) != "017" && phoneNum.left(3) != "018" && phoneNum.left(3) != "019")
        {
            QMessageBox::information(this, tr("Error entering phone number"), tr("Invalid number. Please try again."), tr("OK"));
        }
        else
        {
            LoadingForm* loading = new LoadingForm;
            loading->show();
            JoinThread* thread = new JoinThread(this->joinUi);
            thread->start();
            connect(thread, SIGNAL(started()), thread, SLOT(quit()));
            connect(thread, SIGNAL(finished()), loading, SLOT(deleteLater()));
            connect(loading, SIGNAL(destroyed()), thread, SLOT(deleteLater()));
            connect(thread, SIGNAL(destroyed()), this, SLOT(join()));
        }
    }
}

void Join::joinOkButtonEnabled()
{
    connect(joinUi->joinstuNumLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(joinUi->joinIDLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(joinUi->joinPasswordLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(joinUi->joinPasswordLineEdit_2, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(joinUi->joinNameLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(joinUi->joinDepartLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(joinUi->joinHobbyLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(joinUi->joinPhoneNumLineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    _editList.append(joinUi->joinstuNumLineEdit);
    _editList.append(joinUi->joinIDLineEdit);
    _editList.append(joinUi->joinPasswordLineEdit);
    _editList.append(joinUi->joinPasswordLineEdit_2);
    _editList.append(joinUi->joinNameLineEdit);
    _editList.append(joinUi->joinDepartLineEdit);
    _editList.append(joinUi->joinHobbyLineEdit);
    _editList.append(joinUi->joinPhoneNumLineEdit);
}

void Join::textChanged()
{
    int modified_count = 0;
        for(int i = 0; i < _editList.length(); i++)
        {
            if(!_editList[i]->text().isEmpty())
                modified_count++;
        }
        if(modified_count == 8)
            joinUi->joinOkButton->setEnabled(true);
        else joinUi->joinOkButton->setEnabled(false);
}

void Join::on_joinCancelButton_clicked()
{
    delete this;
}

void Join::join()
{
    QFile file;
    file.setFileName("joinErrorMessage.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if (!file.isOpen())
    {
        QMessageBox::information(this, tr("Join"), tr("Sign up is complete."), tr("OK"));
        delete this;
    }
    else
    {
        QTextStream fin(&file);
        QString joinErrorMessage = fin.readLine();
        QMessageBox::information(this, tr("Join"), joinErrorMessage, tr("OK"));
        file.close();
        file.remove("joinErrorMessage.txt");
    }
}

void Join::on_translateButton_clicked()
{
    translate(this->joinUi, this);
    nsu->translate(language, nsu->ui, nsu);
}
