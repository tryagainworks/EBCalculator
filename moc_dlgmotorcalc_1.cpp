/****************************************************************************
** Meta object code from reading C++ file 'dlgmotorcalc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgmotorcalc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgmotorcalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dlgMotorCalc_t {
    QByteArrayData data[6];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlgMotorCalc_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlgMotorCalc_t qt_meta_stringdata_dlgMotorCalc = {
    {
QT_MOC_LITERAL(0, 0, 12), // "dlgMotorCalc"
QT_MOC_LITERAL(1, 13, 24), // "on_dlgMotorCalc_rejected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "on_cmdBack_clicked"
QT_MOC_LITERAL(4, 58, 23), // "on_cmdCalculate_clicked"
QT_MOC_LITERAL(5, 82, 25) // "on_fraContainer_destroyed"

    },
    "dlgMotorCalc\0on_dlgMotorCalc_rejected\0"
    "\0on_cmdBack_clicked\0on_cmdCalculate_clicked\0"
    "on_fraContainer_destroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlgMotorCalc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dlgMotorCalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlgMotorCalc *_t = static_cast<dlgMotorCalc *>(_o);
        switch (_id) {
        case 0: _t->on_dlgMotorCalc_rejected(); break;
        case 1: _t->on_cmdBack_clicked(); break;
        case 2: _t->on_cmdCalculate_clicked(); break;
        case 3: _t->on_fraContainer_destroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dlgMotorCalc::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgMotorCalc.data,
      qt_meta_data_dlgMotorCalc,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dlgMotorCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgMotorCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dlgMotorCalc.stringdata))
        return static_cast<void*>(const_cast< dlgMotorCalc*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgMotorCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
