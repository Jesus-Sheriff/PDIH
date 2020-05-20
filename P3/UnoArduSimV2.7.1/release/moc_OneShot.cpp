/****************************************************************************
** Meta object code from reading C++ file 'OneShot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/OneShot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OneShot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_COneShot_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_COneShot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_COneShot_t qt_meta_stringdata_COneShot = {
    {
QT_MOC_LITERAL(0, 0, 8), // "COneShot"
QT_MOC_LITERAL(1, 9, 11), // "OnPinEdited"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "k"
QT_MOC_LITERAL(4, 24, 13), // "OnPulseEdited"
QT_MOC_LITERAL(5, 38, 11), // "strgNewText"
QT_MOC_LITERAL(6, 50, 13), // "OnDelayEdited"
QT_MOC_LITERAL(7, 64, 15), // "OnRadioPosPulse"
QT_MOC_LITERAL(8, 80, 15), // "OnRadioNegPulse"
QT_MOC_LITERAL(9, 96, 20), // "OnRadioRisingTrigger"
QT_MOC_LITERAL(10, 117, 21) // "OnRadioFallingTrigger"

    },
    "COneShot\0OnPinEdited\0\0k\0OnPulseEdited\0"
    "strgNewText\0OnDelayEdited\0OnRadioPosPulse\0"
    "OnRadioNegPulse\0OnRadioRisingTrigger\0"
    "OnRadioFallingTrigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_COneShot[] = {

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
       4,    1,   52,    2, 0x09 /* Protected */,
       6,    1,   55,    2, 0x09 /* Protected */,
       7,    0,   58,    2, 0x09 /* Protected */,
       8,    0,   59,    2, 0x09 /* Protected */,
       9,    0,   60,    2, 0x09 /* Protected */,
      10,    0,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void COneShot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        COneShot *_t = static_cast<COneShot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPinEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnPulseEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnDelayEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->OnRadioPosPulse(); break;
        case 4: _t->OnRadioNegPulse(); break;
        case 5: _t->OnRadioRisingTrigger(); break;
        case 6: _t->OnRadioFallingTrigger(); break;
        default: ;
        }
    }
}

const QMetaObject COneShot::staticMetaObject = {
    { &CIODev::staticMetaObject, qt_meta_stringdata_COneShot.data,
      qt_meta_data_COneShot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *COneShot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *COneShot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_COneShot.stringdata0))
        return static_cast<void*>(const_cast< COneShot*>(this));
    return CIODev::qt_metacast(_clname);
}

int COneShot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
