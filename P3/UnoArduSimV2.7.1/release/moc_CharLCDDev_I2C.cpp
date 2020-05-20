/****************************************************************************
** Meta object code from reading C++ file 'CharLCDDev_I2C.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/CharLCDDev_I2C.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CharLCDDev_I2C.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CCharLCDDev_I2C_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CCharLCDDev_I2C_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CCharLCDDev_I2C_t qt_meta_stringdata_CCharLCDDev_I2C = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CCharLCDDev_I2C"
QT_MOC_LITERAL(1, 16, 11), // "OnPinEdited"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 1), // "k"
QT_MOC_LITERAL(4, 31, 15), // "OnCLKRATEEdited"
QT_MOC_LITERAL(5, 47, 11), // "strgNewText"
QT_MOC_LITERAL(6, 59, 18), // "OnRadioTypeClicked"
QT_MOC_LITERAL(7, 78, 4) // "type"

    },
    "CCharLCDDev_I2C\0OnPinEdited\0\0k\0"
    "OnCLKRATEEdited\0strgNewText\0"
    "OnRadioTypeClicked\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CCharLCDDev_I2C[] = {

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
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    1,   32,    2, 0x09 /* Protected */,
       6,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void CCharLCDDev_I2C::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CCharLCDDev_I2C *_t = static_cast<CCharLCDDev_I2C *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPinEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnCLKRATEEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnRadioTypeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CCharLCDDev_I2C::staticMetaObject = {
    { &CCharLCDDev_Base::staticMetaObject, qt_meta_stringdata_CCharLCDDev_I2C.data,
      qt_meta_data_CCharLCDDev_I2C,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CCharLCDDev_I2C::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CCharLCDDev_I2C::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CCharLCDDev_I2C.stringdata0))
        return static_cast<void*>(const_cast< CCharLCDDev_I2C*>(this));
    return CCharLCDDev_Base::qt_metacast(_clname);
}

int CCharLCDDev_I2C::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CCharLCDDev_Base::qt_metacall(_c, _id, _a);
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
