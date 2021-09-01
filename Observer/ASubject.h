#ifndef _ASUBJECT_H
#define _ASUBJECT_H

#include "Subject.h"

// 被观察者A
class ASubject : public Subject
{
public:
    void changeState(int state){
        m_state = state;
        notifyAllObserver();
    }
private:
    int m_state = 0;
};

#endif