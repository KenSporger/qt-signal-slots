#include<iostream>
#include "AObserver.h"
#include "BObserver.h"
#include "ASubject.h"
#include "BSubject.h"
using namespace std;


int main()
{
    ASubject sa1;
    BSubject sb1;

    AObserver a1(&sa1), a2(&sb1);
    BObserver b1(&sa1), b2(&sb1);

    sa1.changeState(0);
    sb1.changeState(1);
}