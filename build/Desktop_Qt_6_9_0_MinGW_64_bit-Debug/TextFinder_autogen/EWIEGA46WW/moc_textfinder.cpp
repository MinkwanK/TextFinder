/****************************************************************************
** Meta object code from reading C++ file 'textfinder.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../textfinder.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textfinder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
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
struct qt_meta_tag_ZN10TextFinderE_t {};
} // unnamed namespace

template <> constexpr inline auto TextFinder::qt_create_metaobjectdata<qt_meta_tag_ZN10TextFinderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TextFinder",
        "on_findButton_clicked",
        "",
        "on_findButton_Back_clicked",
        "on_checkBox_checkStateChanged",
        "Qt::CheckState",
        "arg1",
        "on_findButton_All_clicked",
        "FindText",
        "QTextCursor&",
        "cursor",
        "FIND_TYPE",
        "eFind"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_findButton_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_findButton_Back_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_checkBox_checkStateChanged'
        QtMocHelpers::SlotData<void(const Qt::CheckState &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'on_findButton_All_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'FindText'
        QtMocHelpers::SlotData<void(QTextCursor &, FIND_TYPE)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 },
        }}),
        // Slot 'FindText'
        QtMocHelpers::SlotData<void(QTextCursor &)>(8, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextFinder, qt_meta_tag_ZN10TextFinderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TextFinder::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TextFinderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TextFinderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10TextFinderE_t>.metaTypes,
    nullptr
} };

void TextFinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextFinder *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_findButton_clicked(); break;
        case 1: _t->on_findButton_Back_clicked(); break;
        case 2: _t->on_checkBox_checkStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 3: _t->on_findButton_All_clicked(); break;
        case 4: _t->FindText((*reinterpret_cast< std::add_pointer_t<QTextCursor&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<FIND_TYPE>>(_a[2]))); break;
        case 5: _t->FindText((*reinterpret_cast< std::add_pointer_t<QTextCursor&>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TextFinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextFinder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TextFinderE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TextFinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
