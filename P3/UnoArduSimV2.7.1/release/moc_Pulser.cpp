/****************************************************************************
** Meta object code from reading C++ file 'Pulser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/Pulser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pulser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPulser_t {
    QByteArrayData data[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPulser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPulser_t qt_meta_stringdata_CPulser = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CPulser"
QT_MOC_LITERAL(1, 8, 11), // "OnPinEdited"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 1), // "k"
QT_MOC_LITERAL(4, 23, 16), // "OnRadioPosPulses"
QT_MOC_LITERAL(5, 40, 16), // "OnRadioNegPulses"
QT_MOC_LITERAL(6, 57, 12), // "OnRadioMsecs"
QT_MOC_LITERAL(7, 70, 12), // "OnRadioUsecs"
QT_MOC_LITERAL(8, 83, 13), // "OnPulseEdited"
QT_MOC_LITERAL(9, 97, 13), // "strgNewPeriod"
QT_MOC_LITERAL(10, 111, 14), // "OnPeriodEdited"
QT_MOC_LITERAL(11, 126, 12) // "strgNewPulse"

    },
    "CPulser\0OnPinEdited\0\0k\0OnRadioPosPulses\0"
    "OnRadioNegPulses\0OnRadioMsecs\0"
    "OnRadioUsecs\0OnPulseEdited\0strgNewPeriod\0"
    "OnPeriodEdited\0strgNewPulse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPulser[] = {

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
       1,    1,   49,    2, 0x09 /* Protected */,
       4,    0,   52,    2, 0x09 /* Protected */,
       5,    0,   53,    2, 0x09 /* Protected */,
       6,    0,   54,    2, 0x09 /* Protected */,
       7,    0,   55,    2, 0x09 /* Protected */,
       8,    1,   56,    2, 0x09 /* Protected */,
      10,    1,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void CPulser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPulser *_t = static_cast<CPulser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPinEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnRadioPosPulses(); break;
        case 2: _t->OnRadioNegPulses(); break;
        case 3: _t->OnRadioMsecs(); break;
        case 4: _t->OnRadioUsecs(); break;
        case 5: _t->OnPulseEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->OnPeriodEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CPulser::staticMetaObject = {
    { &CIODev::staticMetaObject, qt_meta_stringdata_CPulser.data,
      qt_meta_data_CPulser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPulser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPulser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPulser.stringdata0))
        return static_cast<void*>(const_cast< CPulser*>(this));
    return CIODev::qt_metacast(_clname);
}

int CPulser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CIODev::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
