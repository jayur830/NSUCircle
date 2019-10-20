/****************************************************************************
** Meta object code from reading C++ file 'nsucirclemainpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NSUCircle/nsucirclemainpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nsucirclemainpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NSUCircleMainPage_t {
    QByteArrayData data[9];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NSUCircleMainPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NSUCircleMainPage_t qt_meta_stringdata_NSUCircleMainPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NSUCircleMainPage"
QT_MOC_LITERAL(1, 18, 21), // "myCircleLoadingThread"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 29), // "on_joinToCircleButton_clicked"
QT_MOC_LITERAL(4, 71, 24), // "showSelectMyCircleDialog"
QT_MOC_LITERAL(5, 96, 40), // "on_deleteMemberOfNSUCircleBut..."
QT_MOC_LITERAL(6, 137, 23), // "on_logOutButton_clicked"
QT_MOC_LITERAL(7, 161, 29), // "showListOfCircleInTableWidget"
QT_MOC_LITERAL(8, 191, 26) // "on_translateButton_clicked"

    },
    "NSUCircleMainPage\0myCircleLoadingThread\0"
    "\0on_joinToCircleButton_clicked\0"
    "showSelectMyCircleDialog\0"
    "on_deleteMemberOfNSUCircleButton_clicked\0"
    "on_logOutButton_clicked\0"
    "showListOfCircleInTableWidget\0"
    "on_translateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NSUCircleMainPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NSUCircleMainPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NSUCircleMainPage *_t = static_cast<NSUCircleMainPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myCircleLoadingThread(); break;
        case 1: _t->on_joinToCircleButton_clicked(); break;
        case 2: _t->showSelectMyCircleDialog(); break;
        case 3: _t->on_deleteMemberOfNSUCircleButton_clicked(); break;
        case 4: _t->on_logOutButton_clicked(); break;
        case 5: _t->showListOfCircleInTableWidget(); break;
        case 6: _t->on_translateButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NSUCircleMainPage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NSUCircleMainPage.data,
      qt_meta_data_NSUCircleMainPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NSUCircleMainPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NSUCircleMainPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NSUCircleMainPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::NSUCircleMainPage"))
        return static_cast< Ui::NSUCircleMainPage*>(this);
    if (!strcmp(_clname, "EtcFunctionClass"))
        return static_cast< EtcFunctionClass*>(this);
    if (!strcmp(_clname, "Translation<Ui::NSUCircleMainPage,NSUCircleMainPage>"))
        return static_cast< Translation<Ui::NSUCircleMainPage,NSUCircleMainPage>*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NSUCircleMainPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
