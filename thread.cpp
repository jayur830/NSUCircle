//#include "thread.h"
//#include <QFile>
//#include <QTextStream>
//#include <QMessageBox>
//#include <QDebug>
//#include "etcfunctionclass.h"
//#include "nsucircle.h"
//#include "nsucirclemainpage.h"

//ThreadProcess::ThreadProcess()
//{

//}

//ThreadProcess::~ThreadProcess()
//{

//}

//template<typename Form>
//Thread<Form>::Thread(Form* _form, StudentInfo* _stu, QString _id, QString _password, QString _language)
//{
//    form = _form;
//    stu = _stu;
//    id = _id;
//    password = _password;
//    language = _language;
//}

//template<typename Form>
//Thread<Form>::~Thread()
//{

//}

//template<typename Form>
//void Thread<Form>::run()
//{
//    QFile login, _file;

//    login.setFileName("SelectFunction.txt");
//    login.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream loginOut(&login);
//    loginOut << 2;
//    login.close();
//    _file.setFileName("login.txt");
//    _file.open(QIODevice::WriteOnly|QIODevice::Text);
//    QTextStream fout(&_file);
//    fout << id;
//    fout << "\n";
//    fout << password;
//    _file.close();
//    form->processRun("_NSUCircle.exe");
//}
