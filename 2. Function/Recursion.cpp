#include <iostream>

using namespace std;

int doFactorial(int n);

int main()
{
    int n, result;
    cout << "숫자를 입력하시오 : ";
    cin >> n;
    result = doFactorial(n);
    cout << n << "! = " << result;

    return 0;
}

int doFactorial(int n)
{
    return (n<=1) ? 1 : n * doFactorial(n-1);
}

/*
재귀 호출의 순환문에 비한 장점
1. 함수를 이용하므로 동일한 코드를 여러 군데에서 사용할 수 있다.
2. 순환문이 복잡한 경우 소스 코드를 보다 단순화시킬 수 있다.
*/