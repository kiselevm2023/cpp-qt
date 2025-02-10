/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../submission/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "SetPixmap",
    "",
    "path",
    "FitImage",
    "NextImage",
    "PrevImage",
    "UpdateEnabled",
    "ToggleStayOnTop",
    "SelectFolder",
    "StartTimer",
    "interval",
    "StopTimer",
    "slotCustomMenuRequested",
    "pos"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[9];
    char stringdata5[10];
    char stringdata6[10];
    char stringdata7[14];
    char stringdata8[16];
    char stringdata9[13];
    char stringdata10[11];
    char stringdata11[9];
    char stringdata12[10];
    char stringdata13[24];
    char stringdata14[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 9),  // "SetPixmap"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 4),  // "path"
        QT_MOC_LITERAL(27, 8),  // "FitImage"
        QT_MOC_LITERAL(36, 9),  // "NextImage"
        QT_MOC_LITERAL(46, 9),  // "PrevImage"
        QT_MOC_LITERAL(56, 13),  // "UpdateEnabled"
        QT_MOC_LITERAL(70, 15),  // "ToggleStayOnTop"
        QT_MOC_LITERAL(86, 12),  // "SelectFolder"
        QT_MOC_LITERAL(99, 10),  // "StartTimer"
        QT_MOC_LITERAL(110, 8),  // "interval"
        QT_MOC_LITERAL(119, 9),  // "StopTimer"
        QT_MOC_LITERAL(129, 23),  // "slotCustomMenuRequested"
        QT_MOC_LITERAL(153, 3)   // "pos"
    },
    "MainWindow",
    "SetPixmap",
    "",
    "path",
    "FitImage",
    "NextImage",
    "PrevImage",
    "UpdateEnabled",
    "ToggleStayOnTop",
    "SelectFolder",
    "StartTimer",
    "interval",
    "StopTimer",
    "slotCustomMenuRequested",
    "pos"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x08,    1 /* Private */,
       4,    0,   77,    2, 0x08,    3 /* Private */,
       5,    0,   78,    2, 0x08,    4 /* Private */,
       6,    0,   79,    2, 0x08,    5 /* Private */,
       7,    0,   80,    2, 0x08,    6 /* Private */,
       8,    0,   81,    2, 0x08,    7 /* Private */,
       9,    0,   82,    2, 0x08,    8 /* Private */,
      10,    1,   83,    2, 0x08,    9 /* Private */,
      12,    0,   86,    2, 0x08,   11 /* Private */,
      13,    1,   87,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'SetPixmap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'FitImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NextImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PrevImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ToggleStayOnTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SelectFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StartTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'StopTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCustomMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetPixmap((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->FitImage(); break;
        case 2: _t->NextImage(); break;
        case 3: _t->PrevImage(); break;
        case 4: _t->UpdateEnabled(); break;
        case 5: _t->ToggleStayOnTop(); break;
        case 6: _t->SelectFolder(); break;
        case 7: _t->StartTimer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->StopTimer(); break;
        case 9: _t->slotCustomMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
