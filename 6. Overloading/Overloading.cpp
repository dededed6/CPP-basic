//move.h
#ifndef MOVE_H
#define MOVE_H

class Move
{
private:
    double x;
    double y;
    char *Name;
public:
    Move(double a=0, double b=0);
    void ShowMove() const;
    Move MoveTo(const Move &m) const;
    void MoveTo(double a=0, double b=0);
};

#endif

//move.cpp
#include <iostream>
using namespace std;

Move::Move(double a, double b)
{
    x=a;
    y=b;
}

void Move::ShowMove() const
{
    cout << "(x, y) = (" << x << ", " << y << ")" << endl;
}

Move Move::MoveTo(const Move &m) const
{
    return Move( x + m.x, y + m.y);
}

void Move::MoveTo(double a, double b)
{
    x = a;
    y = b;
}

//main.cpp
int main()
{
    Move A, B;
    Move C(5, 7);

    A.ShowMove();
    B.ShowMove();
    C.ShowMove();

    A.MoveTo(3, 5);
    B.MoveTo(7, 6);
    C = A.MoveTo(B);

    A.ShowMove();
    B.ShowMove();
    C.ShowMove();

    return 0;
}