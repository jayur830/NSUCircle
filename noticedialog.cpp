#include "noticedialog.h"
#include "memberofcirclepage.h"

NoticeDialog::NoticeDialog(QWidget* parent, MemberOfCirclePage* _myCircle, int _index) :
    QDialog(parent),
    noticeDialogUi(new Ui::NoticeDialog)
{
    noticeDialogUi->setupUi(this);
    noticeDialogUi->lineEdit->setText(_myCircle->noticeOfCircle[_index].title);
    noticeDialogUi->plainTextEdit->setPlainText(_myCircle->noticeOfCircle[_index].content);
}

NoticeDialog::~NoticeDialog()
{
    delete noticeDialogUi;
}

void NoticeDialog::on_cancelButton_clicked()
{
    delete this;
}
