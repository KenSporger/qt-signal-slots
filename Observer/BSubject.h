#ifndef _BSUBJECT_H
#define _BSUBJECT_H

#include "Subject.h"

// 被观察者A
class BSubject : public Subject
{
public:
    void changeState(double state){
        m_state = state;
        notifyAllObserver();
    }
private:
    double m_state = 0;
};

#endif