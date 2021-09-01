#ifndef _AOBSERVER_H
#define _AOBSERVER_H

#include "Observer.h"
#include "iostream"

// 观察者A
class AObserver : public Observer
{
public:
    AObserver(Subject* subject)
        :Observer(subject){}
    virtual void update(){
        std::cout << "A" << std::endl;
    }
};

#endif