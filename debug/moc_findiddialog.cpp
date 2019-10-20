/****************************************************************************
** Meta object code from reading C++ file 'findiddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NSUCircle/findiddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findiddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindIDDialog_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindIDDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindIDDialog_t qt_meta_stringdata_FindIDDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FindIDDialog"
QT_MOC_LITERAL(1, 13, 13), // "loadingThread"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "findId"
QT_MOC_LITERAL(4, 35, 23) // "on_cancelButton_clicked"

    },
    "FindIDDialog\0loadingThread\0\0findId\0"
    "on_cancelButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindIDDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FindIDDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FindIDDialog *_t = static_cast<FindIDDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadingThread(); break;
        case 1: _t->findId(); break;
        case 2: _t->on_cancelButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FindIDDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FindIDDialog.data,
      qt_meta_data_FindIDDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FindIDDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindIDDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindIDDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::FindIDDialog"))
        return static_cast< Ui::FindIDDialog*>(this);
    if (!strcmp(_clname, "Translation<Ui::FindIDDialog,FindIDDialog>"))
        return static_cast< Translation<Ui::FindIDDialog,FindIDDialog>*>(this);
    return QDialog::qt_metacast(_clname);
}

int FindIDDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
