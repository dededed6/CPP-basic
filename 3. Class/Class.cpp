#include <iostream>

using namespace std;

class Date
{
private:
	int year, month, day;
public:
	void SetDate(int y, int m, int d);
	int *GetDate();
};

void Date::SetDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

int* Date::GetDate()
{
	int *arr;
	int a[3] = {2022,8,26};
	arr = a;
	cout << arr << ":" << arr+1 << ":" << arr+2 << endl;
	return arr;
}

int main()
{
	int* dateArr;
	Date date;
	dateArr = date.GetDate();
	cout << dateArr << ":" << dateArr+1 << ":" << dateArr+2 << endl;
}