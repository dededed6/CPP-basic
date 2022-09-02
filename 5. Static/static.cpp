#include <iostream>
using namespace std;

//static.h
class StaticClass
{
private:
    static int a = 10;
    int b = 20;
public:
    int getA();
    int* getB();
    void printA();
    void printB();
    void increaseA();
    void increaseB();
};

//static.cpp
int StaticClass:: a = 20;

int StaticClass::getA()
{
    return a;
}

int* StaticClass::getB()
{
    int *pN = &b;
    return pN;
}

void StaticClass::printA()
{
    cout << "a = " << getA() << endl;
}

void StaticClass::printB()
{
    cout << "b = " << *getB() << endl;
}

void StaticClass::increaseA()
{
    a++;
}

void StaticClass::increaseB()
{
    b++;
}

int main()
{
    StaticClass cc, cc1;
    cc.printA();
    cc.printB();
    cc1.increaseA();
    cc1.increaseB();
    cc.printA();
    cc.printB();
}