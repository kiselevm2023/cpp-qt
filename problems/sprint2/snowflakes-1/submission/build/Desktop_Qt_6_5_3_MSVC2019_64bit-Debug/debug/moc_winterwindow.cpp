/****************************************************************************
** Meta object code from reading C++ file 'winterwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../snowflakes-2/submission/winterwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'winterwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWinterWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWinterWindowENDCLASS = QtMocHelpers::stringData(
    "WinterWindow",
    "on_btn_color_clicked",
    "",
    "on_spin_depth_valueChanged",
    "arg1",
    "on_sld_factor_valueChanged",
    "value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWinterWindowENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[13];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[5];
    char stringdata5[27];
    char stringdata6[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWinterWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWinterWindowENDCLASS_t qt_meta_stringdata_CLASSWinterWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "WinterWindow"
        QT_MOC_LITERAL(13, 20),  // "on_btn_color_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 26),  // "on_spin_depth_valueChanged"
        QT_MOC_LITERAL(62, 4),  // "arg1"
        QT_MOC_LITERAL(67, 26),  // "on_sld_factor_valueChanged"
        QT_MOC_LITERAL(94, 5)   // "value"
    },
    "WinterWindow",
    "on_btn_color_clicked",
    "",
    "on_spin_depth_valueChanged",
    "arg1",
    "on_sld_factor_valueChanged",
    "value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWinterWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    1,   33,    2, 0x08,    2 /* Private */,
       5,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject WinterWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSWinterWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWinterWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWinterWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WinterWindow, std::true_type>,
        // method 'on_btn_color_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spin_depth_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sld_factor_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void WinterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WinterWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_color_clicked(); break;
        case 1: _t->on_spin_depth_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_sld_factor_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *WinterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WinterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWinterWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WinterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
