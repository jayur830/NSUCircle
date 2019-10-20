#include "deletecircledialog.h"
#include "memberofcirclepage.h"
#include "adminofcirclepage.h"
#include "memberofcircledialog.h"
#include "nsucirclemainpage.h"
#include "selectreasonofsecessionincircle.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QProcess>

DeleteCircleDialog::DeleteCircleDialog(QWidget* parent, MemberOfCirclePage* _myCircle, AdminOfCirclePage* _myAdmin, MemberOfCircleDialog* _member, StudentInfo* _stu, QString* _circleName, int _status, int _index, QTreeWidget* _item, QString _comboBoxText, QString _searchLineEditText) :
    QDialog(parent),
    delCircleUi(new Ui::DeleteCircleDialog)
{
    delCircleUi->setupUi(this);
    delCircleUi->lineEdit->setEchoMode(QLineEdit::Password);
    myCircle = _myCircle;
    myAdmin = _myAdmin;
    member = _member;
    stu = *_stu;
    circleName = *_circleName;
    status = _status;
    index = _index;
    item = _item;
    comboBoxText = _comboBoxText;
    searchLineEditText = _searchLineEditText;
    setWindowTitle(circleName + QString::fromLocal8Bit(" Ε»Επ"));
}

DeleteCircleDialog::~DeleteCircleDialog()
{
    delete delCircleUi;
}

void DeleteCircleDialog::on_okButton_clicked()
{
    if (delCircleUi->lineEdit->text() != stu.Password)
    {
        QMessageBox::information(this, tr("Password error"), tr("Passwords do not match."), tr("OK"));
    }
    else
    {
        MemberOfCirclePage* __myCircle = this->myCircle;
        AdminOfCirclePage* __myAdmin = this->myAdmin;
        MemberOfCircleDialog* __member = this->member;
        StudentInfo __stu = this->stu;
        QString __circleName = this->circleName;
        int __index = index;
        int __status = status;
        QTreeWidget* __item = item;
        QString __comboBoxText = comboBoxText;
        QString __searchLineEditText = searchLineEditText;
        DeleteCircleDialog* deleteCircle = this;
        delete this;

        if (__status == 0)
        {
            SelectReasonOfSecessionInCircle* selectReason = new SelectReasonOfSecessionInCircle(nullptr, __myCircle, &__stu, &__circleName);
            selectReason->show();
        }
        else if (__status == 1)
        {
            QMessageBox msg;
            msg.setButtonText(QMessageBox::Yes, tr("Yes"));
            msg.setButtonText(QMessageBox::No, tr("No"));
            QMessageBox::StandardButton selectDelete = msg.question(nullptr, tr("Remove member of %s").arg(__circleName), tr("Would you remove really %s student at %s?").arg(__myAdmin->memberOfCircle.at(__index).name).arg(__circleName), QMessageBox::Yes|QMessageBox::No);
            if (selectDelete == QMessageBox::Yes)
            {
                QFile delMember, file;

                delMember.setFileName("SelectFunction.txt");
                delMember.open(QIODevice::WriteOnly|QIODevice::Text);
                QTextStream delMemberOut(&delMember);
                delMemberOut << 21;
                delMember.close();

                file.setFileName("deleteMember.txt");
                file.open(QIODevice::WriteOnly|QIODevice::Text);
                QTextStream fout(&file);
                fout << __myAdmin->memberOfCircle.at(__index).stuNum;
                fout << "\n";
                fout << __circleName;
                file.close();

                processRun("_NSUCircle.exe");

                QMessageBox::information(nullptr, tr("Remove member of %s").arg(__circleName), tr("It was removed that %s student at %s.").arg(__myAdmin->memberOfCircle.at(__index).name).arg(__circleName), tr("OK"));
                delete __member;
                __myAdmin->member->showListWidgetOfCircle(1, __circleName, __comboBoxText, __searchLineEditText, __item, &__myAdmin->memberOfCircle);
            }
        }
        else if (__status == 2)
        {
            QMessageBox msg;
            msg.setButtonText(QMessageBox::Yes, tr("Yes"));
            msg.setButtonText(QMessageBox::No, tr("No"));
            QMessageBox::StandardButton deleteAdmin = msg.question(nullptr, tr("Secession at %s").arg(__circleName), tr("If you'll secession, your admin qualification be losted in %s. Nevertheless will you secession?"), QMessageBox::Yes|QMessageBox::No);
            if (deleteAdmin == QMessageBox::Yes)
            {
                QFile delAdmin, file;

                delAdmin.setFileName("SelectFunction.txt");
                delAdmin.open(QIODevice::WriteOnly|QIODevice::Text);
                QTextStream delAdminOut(&delAdmin);
                delAdminOut << 21;
                delAdmin.close();

                file.setFileName("deleteMember.txt");
                file.open(QIODevice::WriteOnly|QIODevice::Text);
                QTextStream fout(&file);
                fout << __stu.stuNum;
                fout << "\n";
                fout << __circleName;
                file.close();

                processRun("_NSUCircle.exe");

                QMessageBox::information(nullptr, tr("Secession at %s").arg(__circleName), tr("Thank %s student for leading %s responsibly. Goodbye.").arg(__stu.name).arg(__circleName), tr("OK"));
                delete __myAdmin;
                __stu.numOfCircle--;
                NSUCircleMainPage* nsuMain = new NSUCircleMainPage(nullptr, &__stu);
                nsuMain->show();
            }
        }
    }
}

void DeleteCircleDialog::on_cancelButton_clicked()
{
    delete this;
}
