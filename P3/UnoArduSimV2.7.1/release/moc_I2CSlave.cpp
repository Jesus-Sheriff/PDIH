/****************************************************************************
** Meta object code from reading C++ file 'I2CSlave.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/I2CSlave.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'I2CSlave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CI2CSlave_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CI2CSlave_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CI2CSlave_t qt_meta_stringdata_CI2CSlave = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CI2CSlave"
QT_MOC_LITERAL(1, 10, 11), // "OnPinEdited"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "k"
QT_MOC_LITERAL(4, 25, 12), // "OnSENDEdited"
QT_MOC_LITERAL(5, 38, 11), // "strgNewText"
QT_MOC_LITERAL(6, 50, 14), // "OnSENDSetFocus"
QT_MOC_LITERAL(7, 65, 12), // "OnADDREdited"
QT_MOC_LITERAL(8, 78, 15) // "OnCLKRATEEdited"

    },
    "CI2CSlave\0OnPinEdited\0\0k\0OnSENDEdited\0"
    "strgNewText\0OnSENDSetFocus\0OnADDREdited\0"
    "OnCLKRATEEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CI2CSlave[] = {

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
       1,    1,   39,    2, 0x09 /* Protected */,
       4,    1,   42,    2, 0x09 /* Protected */,
       6,    0,   45,    2, 0x09 /* Protected */,
       7,    1,   46,    2, 0x09 /* Protected */,
       8,    1,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void CI2CSlave::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CI2CSlave *_t = static_cast<CI2CSlave *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPinEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnSENDEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnSENDSetFocus(); break;
        case 3: _t->OnADDREdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->OnCLKRATEEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CI2CSlave::staticMetaObject = {
    { &CHEXDataIODev::staticMetaObject, qt_meta_stringdata_CI2CSlave.data,
      qt_meta_data_CI2CSlave,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CI2CSlave::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CI2CSlave::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CI2CSlave.stringdata0))
        return static_cast<void*>(const_cast< CI2CSlave*>(this));
    return CHEXDataIODev::qt_metacast(_clname);
}

int CI2CSlave::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CHEXDataIODev::qt_metacall(_c, _id, _a);
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