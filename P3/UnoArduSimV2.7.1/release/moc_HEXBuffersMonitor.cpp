/****************************************************************************
** Meta object code from reading C++ file 'HEXBuffersMonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/HEXBuffersMonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HEXBuffersMonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CHEXBuffersMonitor_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CHEXBuffersMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CHEXBuffersMonitor_t qt_meta_stringdata_CHEXBuffersMonitor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CHEXBuffersMonitor"
QT_MOC_LITERAL(1, 19, 19), // "OnSENDBufferChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11) // "OnRECVClear"

    },
    "CHEXBuffersMonitor\0OnSENDBufferChanged\0"
    "\0OnRECVClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CHEXBuffersMonitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CHEXBuffersMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CHEXBuffersMonitor *_t = static_cast<CHEXBuffersMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSENDBufferChanged(); break;
        case 1: _t->OnRECVClear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CHEXBuffersMonitor::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CHEXBuffersMonitor.data,
      qt_meta_data_CHEXBuffersMonitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CHEXBuffersMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CHEXBuffersMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CHEXBuffersMonitor.stringdata0))
        return static_cast<void*>(const_cast< CHEXBuffersMonitor*>(this));
    return QFrame::qt_metacast(_clname);
}

int CHEXBuffersMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE