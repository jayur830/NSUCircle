/****************************************************************************
** Meta object code from reading C++ file 'nsucircle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NSUCircle/nsucircle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nsucircle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NSUCircle_t {
    QByteArrayData data[10];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NSUCircle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NSUCircle_t qt_meta_stringdata_NSUCircle = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NSUCircle"
QT_MOC_LITERAL(1, 10, 5), // "login"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 13), // "loadingThread"
QT_MOC_LITERAL(4, 31, 11), // "textChanged"
QT_MOC_LITERAL(5, 43, 21), // "on_joinButton_clicked"
QT_MOC_LITERAL(6, 65, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(7, 88, 23), // "on_findIdButton_clicked"
QT_MOC_LITERAL(8, 112, 29), // "on_findPasswordButton_clicked"
QT_MOC_LITERAL(9, 142, 26) // "on_translateButton_clicked"

    },
    "NSUCircle\0login\0\0loadingThread\0"
    "textChanged\0on_joinButton_clicked\0"
    "on_closeButton_clicked\0on_findIdButton_clicked\0"
    "on_findPasswordButton_clicked\0"
    "on_translateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NSUCircle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NSUCircle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NSUCircle *_t = static_cast<NSUCircle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->loadingThread(); break;
        case 2: _t->textChanged(); break;
        case 3: _t->on_joinButton_clicked(); break;
        case 4: _t->on_closeButton_clicked(); break;
        case 5: _t->on_findIdButton_clicked(); break;
        case 6: _t->on_findPasswordButton_clicked(); break;
        case 7: _t->on_translateButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NSUCircle::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NSUCircle.data,
      qt_meta_data_NSUCircle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NSUCircle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NSUCircle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NSUCircle.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::NSUCircle"))
        return static_cast< Ui::NSUCircle*>(this);
    if (!strcmp(_clname, "EtcFunctionClass"))
        return static_cast< EtcFunctionClass*>(this);
    if (!strcmp(_clname, "Translation<Ui::NSUCircle,NSUCircle>"))
        return static_cast< Translation<Ui::NSUCircle,NSUCircle>*>(this);
    return QDialog::qt_metacast(_clname);
}

int NSUCircle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
