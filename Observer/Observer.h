#ifndef _OBSERVER_H
#define _OBSERVER_H

class Subject;

// 观察者抽象类
class Observer
{
public:
    virtual void update() = 0;
    // 析构时解除观察
    virtual ~Observer();
protected:
    // 抽象类构造函数非公开 
    Observer(Subject* subject);
protected:
    Subject* m_subject;
};

#endif