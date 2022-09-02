#include <iostream>

using namespace std;

inline int simple(int n)
{
    int result = 1;
    for (int i = 1; i<=n; i++)
        result *= i;
    return result;
}

/*
Inline 키워드를 사용해 인라인 함수를 선언하면,
컴파일된 코드가 다른 코드 안에 삽입된다.
그러므로 함수 수행을 위해 다른 주소로 점프할 필요가 없어 시간이 단축되지만,
호출 횟수가 많거나 함수 코드를 실행하는 데 시간이 많이 걸리는 경우 프로그램의 용량이 커진다.
*/

int main()
{
    int a, b, c;

    a = simple(5);
    b = simple(4);
    c = simple(7);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}