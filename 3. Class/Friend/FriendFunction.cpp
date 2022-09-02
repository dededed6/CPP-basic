#include <iostream>
using namespace std;

class Color;
class Position
{
    friend void GetInfo(Color &c, Position &p);
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

class Color
{
    friend void GetInfo(Color &c, Position &p);
private:
    int r, g, b;
public:
    Color(int m_r, int m_g, int m_b)
    {
        r = m_r;
        g = m_g;
        b = m_b;
    }
};

void GetInfo(Color &c, Position &p)
{
    cout << "RGB:: " << c.r << ", " << c.g << ", " << c.b << endl;
    cout << "Position:: " << p.cx << ", " << p.cy << ", " << p.cr << endl;
}

int main()
{
    Color C(255,255,255);
    Position P(3,4,5);
    GetInfo(C, P);

    return 0;
}