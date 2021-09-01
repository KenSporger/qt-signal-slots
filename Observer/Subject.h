#ifndef _SUBJECT_H
#define _SUBJECT_H

#include<list>
#include "Observer.h"

// 被观察者基类：负责添加、删除、通知观察者
class Subject
{
public:
    void attach(Observer* observer){
        if (observer)
            m_observers.push_front(observer);
    }
    void detach(Observer* observer){
        if (observer)
            m_observers.remove(observer);
    }
    // 回调方式通知观察者
    void notifyAllObserver(){
        for (auto observer : m_observers)
            observer->update();
    }
    
private:
    // 观察者列表
    std::list<Observer*> m_observers;
};

#endif