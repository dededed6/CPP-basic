#include "Date.h"

int main()
{
    //Date Today; //객체를 선언 -> 메모리 상에 객체 생성
    Date Today("Today", 2022, 8, 26); // 생성자를 이용해 선언과 동시에 초기화
    Date Today = Date("Today", 2022, 8, 26);
    Date* pToday = new Date("Today", 2022, 8, 26);
    Today.SetDate(2022, 8, 26); //멤버 변수들을 초기화해줌
    Today.GetDate();

    return 0;
}