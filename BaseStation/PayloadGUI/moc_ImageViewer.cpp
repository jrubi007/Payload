/****************************************************************************
** Meta object code from reading C++ file 'ImageViewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ImageViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      23,   12,   12,   12, 0x0a,
      33,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ImageViewer[] = {
    "ImageViewer\0\0nextImg()\0lastImg()\0"
    "playImg()\0"
};

void ImageViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageViewer *_t = static_cast<ImageViewer *>(_o);
        switch (_id) {
        case 0: _t->nextImg(); break;
        case 1: _t->lastImg(); break;
        case 2: _t->playImg(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ImageViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageViewer::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_ImageViewer,
      qt_meta_data_ImageViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageViewer))
        return static_cast<void*>(const_cast< ImageViewer*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int ImageViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
