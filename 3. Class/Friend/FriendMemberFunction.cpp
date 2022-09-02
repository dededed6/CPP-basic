#include <iostream>
using namespace std;

class Position;
class Color
{
private:
    int r, g, b;
public:
    Color(int m_r, int m_g, int m_b)
    {
        r = m_r;
        g = m_g;
        b = m_b;
    }

    void GetInfo(Position &p);
};

class Position
{
    friend void Color::GetInfo(Position &p);
private:
    int cx, cy, cr;
public:
    Position(int m_x, int m_y, int m_r)
    {
        cx = m_x;
        cy = m_y;
        cr = m_r;
    }
};

void Color::GetInfo(Position &p)
{
    cout << "RGB:: " << r << ", " << g << ", " << b << endl;
    cout << "Position:: " << p.cx << ", " << p.cy << ", " << p.cr << endl;
}

int main()
{
    Color C(255,255,255);
    Position P(3,4,5);
    C.GetInfo(P);

    return 0;
}