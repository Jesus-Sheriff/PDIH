/****************************************************************************
** Meta object code from reading C++ file 'ColouredLED.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/ColouredLED.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColouredLED.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CColouredLED_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CColouredLED_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CColouredLED_t qt_meta_stringdata_CColouredLED = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CColouredLED"
QT_MOC_LITERAL(1, 13, 11), // "OnPinEdited"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1), // "k"
QT_MOC_LITERAL(4, 28, 13), // "OnRadioPullup"
QT_MOC_LITERAL(5, 42, 15), // "OnRadioPulldown"
QT_MOC_LITERAL(6, 58, 16), // "OnColorKeyEdited"
QT_MOC_LITERAL(7, 75, 11) // "strgNewText"

    },
    "CColouredLED\0OnPinEdited\0\0k\0OnRadioPullup\0"
    "OnRadioPulldown\0OnColorKeyEdited\0"
    "strgNewText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CColouredLED[] = {

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
       1,    1,   34,    2, 0x09 /* Protected */,
       4,    0,   37,    2, 0x09 /* Protected */,
       5,    0,   38,    2, 0x09 /* Protected */,
       6,    1,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void CColouredLED::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CColouredLED *_t = static_cast<CColouredLED *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPinEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnRadioPullup(); break;
        case 2: _t->OnRadioPulldown(); break;
        case 3: _t->OnColorKeyEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CColouredLED::staticMetaObject = {
    { &CIODev::staticMetaObject, qt_meta_stringdata_CColouredLED.data,
      qt_meta_data_CColouredLED,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CColouredLED::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CColouredLED::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CColouredLED.stringdata0))
        return static_cast<void*>(const_cast< CColouredLED*>(this));
    return CIODev::qt_metacast(_clname);
}

int CColouredLED::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CIODev::qt_metacall(_c, _id, _a);
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
