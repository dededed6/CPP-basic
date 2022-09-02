#include "Date.h"
#include <cstring>

Date::Date(const char *sName, int sy, int sm, int sd) //객체를 선언하였을 때 멤버 변수를 초기화하기 위해 생성자를 이용한다.
{
    cout << "Constructor" << endl;
    dName = new char[strlen(sName) + 1];
    year = sy;
    month = sm;
    day = sd;
}

void Date::SetDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

void Date::GetDate()
{
    cout << year << ":" << month << ":" << day << "\n" << endl;
}

Date::~Date() //동적 할당된 메모리 공간이 자동으로 해제될 수 있도록 소멸자를 이용한다.
{
    cout << "delete";
    delete[] dName;
}