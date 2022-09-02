#include <iostream>
using namespace std;

class ConstClass
{
private:
    const int a = 1;
    int b;
public:
    ConstClass();

    int getA();
    //int getA() const;
    int* getB();
    void printA() const;
    void printB();
};

int ConstClass::getA()
{
    return a;
}

/*
int ConstClass::getA() const
{
    return a;
}
*/

int* ConstClass::getB()
{
    int* pN = &b;
    return pN;
}

void ConstClass::printA() const
{
    cout << "a = " << getA() << endl; //const객체는 const 함수만 호출할 수 있다.
}

void ConstClass::printB()
{
    cout << "b = " << *getB() << endl;
}

int main()
{
    ConstClass cc;

    return 0;
}