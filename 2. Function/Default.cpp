#include <iostream>

using namespace std;

void makeSquare(int x, int y, int w=10, int h=10);

int main()
{
    makeSquare(100, 100, 20, 20);
    makeSquare(200, 200, 30);
    makeSquare(300, 300);

    return 0;
}

/*
디폴트 인수를 사용하여 인수의 기본값을 정해둘 수 있다.
자바 스크립트를 공부할 때는 보지 못했던 것 같은데 쓸데가 많아보인다.
*/