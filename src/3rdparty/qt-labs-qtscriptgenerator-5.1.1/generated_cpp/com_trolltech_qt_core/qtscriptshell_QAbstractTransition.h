#ifndef QTSCRIPTSHELL_QABSTRACTTRANSITION_H
#define QTSCRIPTSHELL_QABSTRACTTRANSITION_H

#include <qabstracttransition.h>

#include <QtScript/qscriptvalue.h>
#include <__package_shared.h>

class QtScriptShell_QAbstractTransition : public QAbstractTransition
{
public:
    QtScriptShell_QAbstractTransition(QState*  sourceState = 0);
    ~QtScriptShell_QAbstractTransition();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  e);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  eventTest(QEvent*  event);
    void onTransition(QEvent*  event);
    void timerEvent(QTimerEvent*  arg__1);

    QScriptValue __qtscript_self;
};

#endif // QTSCRIPTSHELL_QABSTRACTTRANSITION_H
