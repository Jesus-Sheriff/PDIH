/****************************************************************************
** Meta object code from reading C++ file 'PioLEDS.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/PioLEDS.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PioLEDS.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPioLEDS_t {
    QByteArrayData data[7];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPioLEDS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPioLEDS_t qt_meta_stringdata_CPioLEDS = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CPioLEDS"
QT_MOC_LITERAL(1, 9, 22), // "OnAutoPortDriveChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "OnPIOPullupsManualChange"
QT_MOC_LITERAL(4, 58, 5), // "index"
QT_MOC_LITERAL(5, 64, 22), // "OnAutoTimeScaleChanged"
QT_MOC_LITERAL(6, 87, 11) // "radio_index"

    },
    "CPioLEDS\0OnAutoPortDriveChanged\0\0"
    "OnPIOPullupsManualChange\0index\0"
    "OnAutoTimeScaleChanged\0radio_index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPioLEDS[] = {

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
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    1,   30,    2, 0x09 /* Protected */,
       5,    1,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void CPioLEDS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPioLEDS *_t = static_cast<CPioLEDS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAutoPortDriveChanged(); break;
        case 1: _t->OnPIOPullupsManualChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnAutoTimeScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CPioLEDS::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CPioLEDS.data,
      qt_meta_data_CPioLEDS,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPioLEDS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPioLEDS::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPioLEDS.stringdata0))
        return static_cast<void*>(const_cast< CPioLEDS*>(this));
    return QFrame::qt_metacast(_clname);
}

int CPioLEDS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE