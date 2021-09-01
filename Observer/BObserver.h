#ifndef _BOBSERVER_H
#define _BOBSERVER_H

#include "Observer.h"
#include "iostream"

// 观察者B
class BObserver : public Observer
{
public:
    BObserver(Subject* subject)
        :Observer(subject){}
    virtual void update(){
        std::cout << "B" << std::endl;
    }
};

#endif