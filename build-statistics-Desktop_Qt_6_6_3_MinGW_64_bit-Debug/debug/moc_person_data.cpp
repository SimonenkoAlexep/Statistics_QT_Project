/****************************************************************************
** Meta object code from reading C++ file 'person_data.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statistics/person_data.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'person_data.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
struct qt_meta_stringdata_CLASSPerson_DataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPerson_DataENDCLASS = QtMocHelpers::stringData(
    "Person_Data",
    "returnTo",
    "",
    "RoundDiag",
    "type",
    "drawBarChart",
    "drawInteractiveChart",
    "showPointTooltip",
    "point",
    "state",
    "on_comboBox_textActivated",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPerson_DataENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[5];
    char stringdata5[13];
    char stringdata6[21];
    char stringdata7[17];
    char stringdata8[6];
    char stringdata9[6];
    char stringdata10[26];
    char stringdata11[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPerson_DataENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPerson_DataENDCLASS_t qt_meta_stringdata_CLASSPerson_DataENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Person_Data"
        QT_MOC_LITERAL(12, 8),  // "returnTo"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 9),  // "RoundDiag"
        QT_MOC_LITERAL(32, 4),  // "type"
        QT_MOC_LITERAL(37, 12),  // "drawBarChart"
        QT_MOC_LITERAL(50, 20),  // "drawInteractiveChart"
        QT_MOC_LITERAL(71, 16),  // "showPointTooltip"
        QT_MOC_LITERAL(88, 5),  // "point"
        QT_MOC_LITERAL(94, 5),  // "state"
        QT_MOC_LITERAL(100, 25),  // "on_comboBox_textActivated"
        QT_MOC_LITERAL(126, 4)   // "arg1"
    },
    "Person_Data",
    "returnTo",
    "",
    "RoundDiag",
    "type",
    "drawBarChart",
    "drawInteractiveChart",
    "showPointTooltip",
    "point",
    "state",
    "on_comboBox_textActivated",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPerson_DataENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    1,   51,    2, 0x08,    2 /* Private */,
       5,    1,   54,    2, 0x08,    4 /* Private */,
       6,    1,   57,    2, 0x08,    6 /* Private */,
       7,    2,   60,    2, 0x08,    8 /* Private */,
      10,    1,   65,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject Person_Data::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPerson_DataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPerson_DataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPerson_DataENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Person_Data, std::true_type>,
        // method 'returnTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RoundDiag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'drawBarChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'drawInteractiveChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'showPointTooltip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_comboBox_textActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Person_Data::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Person_Data *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->returnTo(); break;
        case 1: _t->RoundDiag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->drawBarChart((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->drawInteractiveChart((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->showPointTooltip((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->on_comboBox_textActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Person_Data::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Person_Data::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPerson_DataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Person_Data::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
