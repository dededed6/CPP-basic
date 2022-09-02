#include <iostream>

int main()
{
    using namespace std;

    int *p_var = new int; //선언
    double *p_arr = new double[3];

    *p_var = 1001; //값 저장
    p_arr[0] = 20001.0;
    p_arr[1] = 0.5;
    p_arr[2] = 10000001.0;

    cout << "값: " << *p_var << endl; //1001
    cout << "주소: " << p_var << endl; //p_var
    cout << "사이즈: " << sizeof(p_var) << endl; //8비트

    cout << "p_arr = " << p_arr << ", *p_arr = " << *p_arr << endl; //0번
    p_arr = p_arr + 1;
    cout << "p_arr = " << p_arr << ", *p_arr = " << *p_arr << endl; //1번
    p_arr = p_arr - 1;

    cout << "p_arr[0] = " << p_arr[0] << ", p_arr[1] = " << p_arr[1] << endl; //0번, 1번
    cout << "*p_arr = " << *p_arr << ", *(p_arr+1) = " << *(p_arr + 1) << endl; //0번, 1번

    /*p_arr 에 1을 더한 뒤 p_arr 을 삭제하면 본래의 p_arr[0]은 어떻게 될까?*/
    double *pp_arr = p_arr;
    p_arr = p_arr + 1;
    cout << "*p_arr = " << *p_arr << ", *pp_arr = " << *pp_arr << endl;

    delete p_var;
    delete [] p_arr;
    
    cout << "pp_arr[0] = " << pp_arr[0] << ", pp_arr[1] = " << pp_arr[1] << endl;

    delete [] pp_arr;

    /*무언가 오류가 생긴다.*/

    return 0;
}