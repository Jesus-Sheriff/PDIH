/****************************************************************************
** Meta object code from reading C++ file 'IODevsConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/IODevsConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IODevsConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CIODevsConfig_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CIODevsConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CIODevsConfig_t qt_meta_stringdata_CIODevsConfig = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CIODevsConfig"
QT_MOC_LITERAL(1, 14, 4), // "OnOK"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "OnCancel"
QT_MOC_LITERAL(4, 29, 12), // "OnLoadIODevs"
QT_MOC_LITERAL(5, 42, 14), // "OnSaveIODevsAs"
QT_MOC_LITERAL(6, 57, 18), // "OnUSBSerialChanged"
QT_MOC_LITERAL(7, 76, 7), // "intBOOL"
QT_MOC_LITERAL(8, 84, 7), // "checked"
QT_MOC_LITERAL(9, 92, 15), // "OnSDDiskChanged"
QT_MOC_LITERAL(10, 108, 15), // "OnTFTDevChanged"
QT_MOC_LITERAL(11, 124, 18), // "OnSmallIODevEdited"
QT_MOC_LITERAL(12, 143, 5), // "index"
QT_MOC_LITERAL(13, 149, 17), // "OnTallIODevEdited"
QT_MOC_LITERAL(14, 167, 16) // "OnBigIODevEdited"

    },
    "CIODevsConfig\0OnOK\0\0OnCancel\0OnLoadIODevs\0"
    "OnSaveIODevsAs\0OnUSBSerialChanged\0"
    "intBOOL\0checked\0OnSDDiskChanged\0"
    "OnTFTDevChanged\0OnSmallIODevEdited\0"
    "index\0OnTallIODevEdited\0OnBigIODevEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CIODevsConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x09 /* Protected */,
       3,    0,   65,    2, 0x09 /* Protected */,
       4,    0,   66,    2, 0x09 /* Protected */,
       5,    0,   67,    2, 0x09 /* Protected */,
       6,    1,   68,    2, 0x09 /* Protected */,
       9,    1,   71,    2, 0x09 /* Protected */,
      10,    1,   74,    2, 0x09 /* Protected */,
      11,    1,   77,    2, 0x09 /* Protected */,
      13,    1,   80,    2, 0x09 /* Protected */,
      14,    1,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void CIODevsConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CIODevsConfig *_t = static_cast<CIODevsConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnOK(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnLoadIODevs(); break;
        case 3: _t->OnSaveIODevsAs(); break;
        case 4: _t->OnUSBSerialChanged((*reinterpret_cast< intBOOL(*)>(_a[1]))); break;
        case 5: _t->OnSDDiskChanged((*reinterpret_cast< intBOOL(*)>(_a[1]))); break;
        case 6: _t->OnTFTDevChanged((*reinterpret_cast< intBOOL(*)>(_a[1]))); break;
        case 7: _t->OnSmallIODevEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->OnTallIODevEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->OnBigIODevEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CIODevsConfig::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CIODevsConfig.data,
      qt_meta_data_CIODevsConfig,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CIODevsConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CIODevsConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CIODevsConfig.stringdata0))
        return static_cast<void*>(const_cast< CIODevsConfig*>(this));
    return QDialog::qt_metacast(_clname);
}

int CIODevsConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
