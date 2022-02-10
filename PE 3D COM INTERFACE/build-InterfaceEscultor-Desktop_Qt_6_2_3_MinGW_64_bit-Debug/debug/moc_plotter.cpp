/****************************************************************************
** Meta object code from reading C++ file 'plotter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../InterfaceEscultor/plotter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Plotter_t {
    const uint offsetsAndSize[70];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Plotter_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Plotter_t qt_meta_stringdata_Plotter = {
    {
QT_MOC_LITERAL(0, 7), // "Plotter"
QT_MOC_LITERAL(8, 5), // "moveX"
QT_MOC_LITERAL(14, 0), // ""
QT_MOC_LITERAL(15, 5), // "moveY"
QT_MOC_LITERAL(21, 6), // "clickX"
QT_MOC_LITERAL(28, 6), // "clickY"
QT_MOC_LITERAL(35, 11), // "planeChosen"
QT_MOC_LITERAL(47, 10), // "changeDimX"
QT_MOC_LITERAL(58, 4), // "dimx"
QT_MOC_LITERAL(63, 10), // "changeDimY"
QT_MOC_LITERAL(74, 4), // "dimy"
QT_MOC_LITERAL(79, 10), // "changeDimZ"
QT_MOC_LITERAL(90, 4), // "dimz"
QT_MOC_LITERAL(95, 10), // "changeRaio"
QT_MOC_LITERAL(106, 4), // "raio"
QT_MOC_LITERAL(111, 8), // "changeRx"
QT_MOC_LITERAL(120, 4), // "radx"
QT_MOC_LITERAL(125, 8), // "changeRy"
QT_MOC_LITERAL(134, 4), // "rady"
QT_MOC_LITERAL(139, 8), // "changeRz"
QT_MOC_LITERAL(148, 4), // "radz"
QT_MOC_LITERAL(153, 9), // "changeRed"
QT_MOC_LITERAL(163, 3), // "red"
QT_MOC_LITERAL(167, 11), // "changeGreen"
QT_MOC_LITERAL(179, 5), // "green"
QT_MOC_LITERAL(185, 10), // "changeBlue"
QT_MOC_LITERAL(196, 4), // "blue"
QT_MOC_LITERAL(201, 10), // "changeAlfa"
QT_MOC_LITERAL(212, 5), // "alpha"
QT_MOC_LITERAL(218, 11), // "changePlano"
QT_MOC_LITERAL(230, 3), // "pln"
QT_MOC_LITERAL(234, 7), // "criaOff"
QT_MOC_LITERAL(242, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(257, 12), // "QMouseEvent*"
QT_MOC_LITERAL(270, 5) // "event"

    },
    "Plotter\0moveX\0\0moveY\0clickX\0clickY\0"
    "planeChosen\0changeDimX\0dimx\0changeDimY\0"
    "dimy\0changeDimZ\0dimz\0changeRaio\0raio\0"
    "changeRx\0radx\0changeRy\0rady\0changeRz\0"
    "radz\0changeRed\0red\0changeGreen\0green\0"
    "changeBlue\0blue\0changeAlfa\0alpha\0"
    "changePlano\0pln\0criaOff\0mouseMoveEvent\0"
    "QMouseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plotter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,    1 /* Public */,
       3,    1,  131,    2, 0x06,    3 /* Public */,
       4,    1,  134,    2, 0x06,    5 /* Public */,
       5,    1,  137,    2, 0x06,    7 /* Public */,
       6,    1,  140,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,  143,    2, 0x0a,   11 /* Public */,
       9,    1,  146,    2, 0x0a,   13 /* Public */,
      11,    1,  149,    2, 0x0a,   15 /* Public */,
      13,    1,  152,    2, 0x0a,   17 /* Public */,
      15,    1,  155,    2, 0x0a,   19 /* Public */,
      17,    1,  158,    2, 0x0a,   21 /* Public */,
      19,    1,  161,    2, 0x0a,   23 /* Public */,
      21,    1,  164,    2, 0x0a,   25 /* Public */,
      23,    1,  167,    2, 0x0a,   27 /* Public */,
      25,    1,  170,    2, 0x0a,   29 /* Public */,
      27,    1,  173,    2, 0x0a,   31 /* Public */,
      29,    1,  176,    2, 0x0a,   33 /* Public */,
      31,    0,  179,    2, 0x0a,   35 /* Public */,
      32,    1,  180,    2, 0x0a,   36 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,

       0        // eod
};

void Plotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Plotter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->moveY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clickX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clickY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->planeChosen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changeDimX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->changeDimY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->changeDimZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changeRaio((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->changeRx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->changeRy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->changeRz((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->changeRed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->changeGreen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->changeBlue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->changeAlfa((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->changePlano((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->criaOff(); break;
        case 18: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Plotter::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::moveX)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Plotter::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::moveY)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Plotter::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::clickX)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Plotter::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::clickY)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Plotter::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::planeChosen)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Plotter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Plotter.offsetsAndSize,
    qt_meta_data_Plotter,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Plotter_t
, QtPrivate::TypeAndForceComplete<Plotter, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *Plotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plotter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Plotter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Plotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Plotter::moveX(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Plotter::moveY(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Plotter::clickX(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Plotter::clickY(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Plotter::planeChosen(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
