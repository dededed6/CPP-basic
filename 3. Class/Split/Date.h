#include <iostream>
using namespace std;

class Date
{
    private:
        int year, month, day;
        char* dName;
    public:
        Date(const char *sName, int sy, int sm, int sd);
        void SetDate(int y, int m, int d);
        void GetDate();
        ~Date();
};