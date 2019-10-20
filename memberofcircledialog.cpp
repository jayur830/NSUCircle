#include "memberofcircledialog.h"
#include "adminofcirclepage.h"
#include "deletecircledialog.h"
#include <QMessageBox>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QTextStream>
#include <QFile>
#include <QProcess>

MemberOfCircleDialog::MemberOfCircleDialog(QWidget* parent, AdminOfCirclePage* _myAdmin, StudentInfo* _stu, QTreeWidget* _list, QTreeWidgetItem* _item, QString _circleName, QString _reason, QString _promise, QString _comboBoxText, QString _searchLineEditText, int _index) :
    QDialog(parent),
    memberOfCircleUi(new Ui::MemberOfCircleDialog)
{
    memberOfCircleUi->setupUi(this);
    myAdmin = _myAdmin;
    stu = _stu;
    list = _list;
    item = _item;
    reason = _reason;
    promise = _promise;
    circleName = _circleName;
    comboBoxText = _comboBoxText;
    searchLineEditText = _searchLineEditText;
    index = _index;

    settingToMemberDialog();
}

MemberOfCircleDialog::~MemberOfCircleDialog()
{
    delete memberOfCircleUi;
}

void MemberOfCircleDialog::settingToMemberDialog()
{
    if (item->text(5) == QString::fromLocal8Bit("½ÂÀÎ´ë±â"))
    {
        memberOfCircleUi->beAdminButton->setEnabled(false);
        memberOfCircleUi->deleteMemberButton->setEnabled(false);
    }
    else if (item->text(5) == QString::fromLocal8Bit("Á¤½Ä¸â¹ö"))
    {
        memberOfCircleUi->approvalButton->setEnabled(false);
        memberOfCircleUi->disapprovalButton->setEnabled(false);
    }
    else
    {
        memberOfCircleUi->beAdminButton->setEnabled(false);
        memberOfCircleUi->deleteMemberButton->setEnabled(false);
        memberOfCircleUi->approvalButton->setEnabled(false);
        memberOfCircleUi->disapprovalButton->setEnabled(false);
    }

    memberOfCircleUi->stuNumLabel->setText(item->text(1));
    memberOfCircleUi->nameLabel->setText(item->text(2));
    memberOfCircleUi->stuYearLabel->setText(myAdmin->memberOfCircle.at(index).stuYear);
    memberOfCircleUi->departmentLabel->setText(item->text(3));
    memberOfCircleUi->phoneNumLabel->setText(item->text(4));
    memberOfCircleUi->plainTextEdit->setPlainText(reason);
    memberOfCircleUi->plainTextEdit_2->setPlainText(promise);

    memberOfCircleUi->horizontalLayout->setAlignment(Qt::AlignLeft);
    memberOfCircleUi->horizontalLayout_2->setAlignment(Qt::AlignLeft);
    memberOfCircleUi->horizontalLayout_11->setAlignment(Qt::AlignLeft);
    memberOfCircleUi->horizontalLayout_3->setAlignment(Qt::AlignLeft);
    memberOfCircleUi->horizontalLayout_4->setAlignment(Qt::AlignLeft);
}

void MemberOfCircleDialog::on_beAdminButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    QMessageBox::StandardButton beAdmin = msg.question(this, tr("Promote to admin at %s").arg(circleName), tr("would you appoint %s student into admin of %s?").arg(memberOfCircleUi->nameLabel->text()).arg(circleName), QMessageBox::Yes|QMessageBox::No);
    if (beAdmin == QMessageBox::Yes)
    {
        QFile adminOfCircle, file;

        adminOfCircle.setFileName("SelectFunction.txt");
        adminOfCircle.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream adminOfCircleOut(&adminOfCircle);
        adminOfCircleOut << 20;
        adminOfCircle.close();

        file.setFileName("memberBeAdmin.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << memberOfCircleUi->stuNumLabel->text();
        fout << "\n";
        fout << circleName;
        file.close();

        myAdmin->processRun("_NSUCircle.exe");

        QMessageBox::information(this, tr("Promote to admin at %s").arg(circleName), tr("%s student was appointed admin of %s.").arg(memberOfCircleUi->nameLabel->text()).arg(circleName), tr("OK"));

        AdminOfCirclePage* __myAdmin = myAdmin;
        QTreeWidget* __list = list;
        QString __circleName = circleName;
        QString __comboBoxText = comboBoxText;
        QString __searchLineEditText = searchLineEditText;
        delete this;
        __myAdmin->member->showListWidgetOfCircle(1, __circleName, __comboBoxText, __searchLineEditText, __list, &__myAdmin->memberOfCircle);
    }
}

void MemberOfCircleDialog::on_deleteMemberButton_clicked()
{
    DeleteCircleDialog* delCircle = new DeleteCircleDialog(nullptr, nullptr, myAdmin, this, stu, &circleName, 1, index, list, comboBoxText, searchLineEditText);
    delCircle->show();
}

void MemberOfCircleDialog::on_approvalButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    QMessageBox::StandardButton approve = msg.question(this, tr("Approve member"), tr("Are you approve that %s student be new member of %s?").arg(memberOfCircleUi->nameLabel->text()).arg(circleName), QMessageBox::Yes|QMessageBox::No);
    if (approve == QMessageBox::Yes)
    {
        QFile member, select, file;

        member.setFileName("SelectFunction.txt");
        member.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream memberOut(&member);
        memberOut << 19;
        member.close();

        select.setFileName("updateOrDelete.txt");
        select.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream selectOut(&select);
        selectOut << 1;
        select.close();

        file.setFileName("memberApprove.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << memberOfCircleUi->stuNumLabel->text();
        fout << "\n";
        fout << memberOfCircleUi->nameLabel->text();
        fout << "\n";
        fout << memberOfCircleUi->departmentLabel->text();
        fout << "\n";
        fout << memberOfCircleUi->phoneNumLabel->text();
        fout << "\n";
        fout << circleName;
        file.close();

        myAdmin->processRun("_NSUCircle.exe");

        QMessageBox::information(this, tr("Approve member"), tr("%s student was signed up new member of %s.").arg(memberOfCircleUi->nameLabel->text()).arg(circleName), tr("OK"));
        AdminOfCirclePage* __myAdmin = myAdmin;
        QTreeWidget* __list = list;
        QString __circleName = circleName;
        QString __comboBoxText = comboBoxText;
        QString __searchLineEditText = searchLineEditText;
        delete this;
        __myAdmin->member->showListWidgetOfCircle(1, __circleName, __comboBoxText, __searchLineEditText, __list, &__myAdmin->memberOfCircle);
    }
}

void MemberOfCircleDialog::on_disapprovalButton_clicked()
{
    QMessageBox msg;
    msg.setButtonText(QMessageBox::Yes, tr("Yes"));
    msg.setButtonText(QMessageBox::No, tr("No"));
    QMessageBox::StandardButton disapprove = msg.question(this, tr("Disapprove member"), tr("Are you disapprove that %s student be new member of %s?").arg(memberOfCircleUi->nameLabel->text()).arg(circleName), QMessageBox::Yes|QMessageBox::No);
    if (disapprove == QMessageBox::Yes)
    {
        QFile member, select, file;

        member.setFileName("SelectFunction.txt");
        member.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream memberOut(&member);
        memberOut << 19;
        member.close();

        select.setFileName("updateOrDelete.txt");
        select.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream selectOut(&select);
        selectOut << 2;
        select.close();

        file.setFileName("memberDisApprove.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream fout(&file);
        fout << memberOfCircleUi->stuNumLabel->text();
        fout << "\n";
        fout << circleName;
        file.close();

        myAdmin->processRun("_NSUCircle.exe");

        QMessageBox::information(this, tr("Disapprove member"), tr("%s student was eliminated from candidate of new members of %s.").arg(memberOfCircleUi->nameLabel->text()).arg(circleName), tr("OK"));
        AdminOfCirclePage* __myAdmin = myAdmin;
        QTreeWidget* __list = list;
        QString __circleName = circleName;
        QString __comboBoxText = comboBoxText;
        QString __searchLineEditText = searchLineEditText;
        delete this;
        __myAdmin->member->showListWidgetOfCircle(1, __circleName, __comboBoxText, __searchLineEditText, __list, &__myAdmin->memberOfCircle);
    }
}

void MemberOfCircleDialog::on_cancelButton_clicked()
{
    delete this;
}
