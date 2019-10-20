/****************************************************************************
** Meta object code from reading C++ file 'selectmycircledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NSUCircle/selectmycircledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectmycircledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectMyCircleDialog_t {
    QByteArrayData data[10];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectMyCircleDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectMyCircleDialog_t qt_meta_stringdata_SelectMyCircleDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SelectMyCircleDialog"
QT_MOC_LITERAL(1, 21, 13), // "updateLoading"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "noticeProcessed"
QT_MOC_LITERAL(4, 52, 14), // "boardProcessed"
QT_MOC_LITERAL(5, 67, 15), // "memberProcessed"
QT_MOC_LITERAL(6, 83, 13), // "loadingThread"
QT_MOC_LITERAL(7, 97, 27), // "connectToMemberOfCirclePage"
QT_MOC_LITERAL(8, 125, 26), // "connectToAdminOfCirclePage"
QT_MOC_LITERAL(9, 152, 23) // "on_calcelButton_clicked"

    },
    "SelectMyCircleDialog\0updateLoading\0\0"
    "noticeProcessed\0boardProcessed\0"
    "memberProcessed\0loadingThread\0"
    "connectToMemberOfCirclePage\0"
    "connectToAdminOfCirclePage\0"
    "on_calcelButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectMyCircleDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelectMyCircleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectMyCircleDialog *_t = static_cast<SelectMyCircleDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLoading(); break;
        case 1: _t->noticeProcessed(); break;
        case 2: _t->boardProcessed(); break;
        case 3: _t->memberProcessed(); break;
        case 4: _t->loadingThread(); break;
        case 5: _t->connectToMemberOfCirclePage(); break;
        case 6: _t->connectToAdminOfCirclePage(); break;
        case 7: _t->on_calcelButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelectMyCircleDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectMyCircleDialog::updateLoading)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SelectMyCircleDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectMyCircleDialog::noticeProcessed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SelectMyCircleDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectMyCircleDialog::boardProcessed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SelectMyCircleDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectMyCircleDialog::memberProcessed)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SelectMyCircleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectMyCircleDialog.data,
      qt_meta_data_SelectMyCircleDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelectMyCircleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectMyCircleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectMyCircleDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SelectMyCircleDialog"))
        return static_cast< Ui::SelectMyCircleDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int SelectMyCircleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SelectMyCircleDialog::updateLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SelectMyCircleDialog::noticeProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SelectMyCircleDialog::boardProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SelectMyCircleDialog::memberProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
