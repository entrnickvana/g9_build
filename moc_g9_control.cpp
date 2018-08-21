/****************************************************************************
** Meta object code from reading C++ file 'g9_control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../g9/g9_control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'g9_control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_g9_control_t {
    QByteArrayData data[9];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_g9_control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_g9_control_t qt_meta_stringdata_g9_control = {
    {
QT_MOC_LITERAL(0, 0, 10), // "g9_control"
QT_MOC_LITERAL(1, 11, 32), // "on_verticalSlider_sliderReleased"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 30), // "on_verticalSlider_valueChanged"
QT_MOC_LITERAL(4, 76, 5), // "value"
QT_MOC_LITERAL(5, 82, 32), // "on_verticalSlider_3_valueChanged"
QT_MOC_LITERAL(6, 115, 32), // "on_verticalSlider_2_valueChanged"
QT_MOC_LITERAL(7, 148, 22), // "on_radioButton_toggled"
QT_MOC_LITERAL(8, 171, 7) // "checked"

    },
    "g9_control\0on_verticalSlider_sliderReleased\0"
    "\0on_verticalSlider_valueChanged\0value\0"
    "on_verticalSlider_3_valueChanged\0"
    "on_verticalSlider_2_valueChanged\0"
    "on_radioButton_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_g9_control[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void g9_control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        g9_control *_t = static_cast<g9_control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_verticalSlider_sliderReleased(); break;
        case 1: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_verticalSlider_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_verticalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject g9_control::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_g9_control.data,
      qt_meta_data_g9_control,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *g9_control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *g9_control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_g9_control.stringdata0))
        return static_cast<void*>(const_cast< g9_control*>(this));
    return QWidget::qt_metacast(_clname);
}

int g9_control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
