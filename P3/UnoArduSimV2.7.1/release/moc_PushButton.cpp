/****************************************************************************
** Meta object code from reading C++ file 'PushButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/PushButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PushButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPushButton_t {
    QByteArrayData data[9];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPushButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPushButton_t qt_meta_stringdata_CPushButton = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CPushButton"
QT_MOC_LITERAL(1, 12, 11), // "OnPinEdited"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "k"
QT_MOC_LITERAL(4, 27, 9), // "OnPressed"
QT_MOC_LITERAL(5, 37, 10), // "OnReleased"
QT_MOC_LITERAL(6, 48, 17), // "OnLatchingChanged"
QT_MOC_LITERAL(7, 66, 13), // "OnRadioRising"
QT_MOC_LITERAL(8, 80, 14) // "OnRadioFalling"

    },
    "CPushButton\0OnPinEdited\0\0k\0OnPressed\0"
    "OnReleased\0OnLatchingChanged\0OnRadioRising\0"
    "OnRadioFalling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPushButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x09 /* Protected */,
       4,    0,   47,    2, 0x09 /* Protected */,
       5,    0,   48,    2, 0x09 /* Protected */,
       6,    0,   49,    2, 0x09 /* Protected */,
       7,    0,   50,    2, 0x09 /* Protected */,
       8,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPushButton *_t = static_cast<CPushButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPinEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnPressed(); break;
        case 2: _t->OnReleased(); break;
        case 3: _t->OnLatchingChanged(); break;
        case 4: _t->OnRadioRising(); break;
        case 5: _t->OnRadioFalling(); break;
        default: ;
        }
    }
}

const QMetaObject CPushButton::staticMetaObject = {
    { &CIODev::staticMetaObject, qt_meta_stringdata_CPushButton.data,
      qt_meta_data_CPushButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPushButton.stringdata0))
        return static_cast<void*>(const_cast< CPushButton*>(this));
    return CIODev::qt_metacast(_clname);
}

int CPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CIODev::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
