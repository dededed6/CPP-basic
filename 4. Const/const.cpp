#include <iostream>
using namespace std;

class ConstClass
{
private:
    const int a;
    int b;
public:
    ConstClass();
};

ConstClass::ConstClass() : a(10), b(20) //초기화 리스트를 이용하면 const의 초기화가 가능하다.
{
    //a = 100; //일반적인 값의 대입에 의한 초기화는 사용할 수 없음.
    b = 200;

    cout << "a = " << a << ", b = " << b << endl;
}

int main()
{
    ConstClass cc;

    return 0;
}