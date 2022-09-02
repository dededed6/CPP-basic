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