/****************************************************************************
** Meta object code from reading C++ file 'dlgmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dlgMain_t {
    QByteArrayData data[7];
    char stringdata[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlgMain_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlgMain_t qt_meta_stringdata_dlgMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "dlgMain"
QT_MOC_LITERAL(1, 8, 19), // "on_dlgMain_rejected"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "on_cmdExit_clicked"
QT_MOC_LITERAL(4, 48, 24), // "on_cmdGlobalCalc_clicked"
QT_MOC_LITERAL(5, 73, 24), // "on_cmdWaterMotor_clicked"
QT_MOC_LITERAL(6, 98, 22) // "on_cmdSettings_clicked"

    },
    "dlgMain\0on_dlgMain_rejected\0\0"
    "on_cmdExit_clicked\0on_cmdGlobalCalc_clicked\0"
    "on_cmdWaterMotor_clicked\0"
    "on_cmdSettings_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlgMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dlgMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlgMain *_t = static_cast<dlgMain *>(_o);
        switch (_id) {
        case 0: _t->on_dlgMain_rejected(); break;
        case 1: _t->on_cmdExit_clicked(); break;
        case 2: _t->on_cmdGlobalCalc_clicked(); break;
        case 3: _t->on_cmdWaterMotor_clicked(); break;
        case 4: _t->on_cmdSettings_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dlgMain::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgMain.data,
      qt_meta_data_dlgMain,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dlgMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgMain::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dlgMain.stringdata))
        return static_cast<void*>(const_cast< dlgMain*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
