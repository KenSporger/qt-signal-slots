#include "Observer.h"
#include "Subject.h"

Observer::Observer(Subject* subject)
    :m_subject(subject)
{
    m_subject->attach(this);
}

Observer::~Observer()
{
    m_subject->detach(this);
}