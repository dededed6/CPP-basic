#include <iostream>

int main()
{
    using namespace std;

    int array[7] = {51, 311, 78, 11236, 120, -24642, 934};
    int *pArray, i;
    pArray = array;

    for (i=0; i < 7; i++)
        cout << "a[" << i << "] = " << array[i] << ", " << * (pArray + i) << endl;

    return 0;
}