#include <iostream>

int main()
{
    using namespace std;

    int var = 10; //&var 위치에 10이라는 값을 저장
    int *p_var; // *p_var 이라는 포인터 변수 선언

    p_var = &var; // p_var 에 var의 위치를 저장해둠

    cout << "Value: var = " << var; //var의 값
    cout << ", *p_var = " << *p_var << endl; //p_var 주소의 값
    cout << "Address: &var = " << &var; //var의 주소
    cout << ", p_var = " << p_var << endl; // p_var의 값

    *p_var = 20; //p_var의 주소의 값에 20을 저장

    cout << "Value: var = " << var;
    cout << ", *p_var = " << *p_var << endl;
    cout << "Address: &var = " << &var;
    cout << ", p_var = " << p_var << endl;

    cout << "&p_var = " << &p_var << endl;

    return 0;
}