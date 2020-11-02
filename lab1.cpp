#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D() { ++num_wek; };
    // tu powinine byc konstruktor Wektor2D(double, double) ale zostal przeniesiony do private -
    // patrz zad 9
    ~Wektor2D() { --num_wek; };

    double          getX() { return this->x; }
    double          getY() { return this->y; }
    void            setX(double a) { this->x = a; }
    void            setY(double b) { this->y = b; }
    static int      populacja() { return num_wek; }
    static Wektor2D kart(double a, double b) { return Wektor2D(a, b); }
    static Wektor2D bieg(double angle, double radius)
    {
        return Wektor2D(radius * cos(angle), radius * sin(angle));
    }

private:
    Wektor2D(double a, double b)
    {
        this->x = a;
        this->y = b;
        ++num_wek;
        cout << populacja() << endl;
    }
    double     x;
    double     y;
    static int num_wek;
};

int Wektor2D::num_wek = 0;

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D::kart(w1.getX() + w2.getX(), w1.getY() + w2.getY());
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    return w1.getX() * w2.getX() + w1.getY() * w2.getY();
}

int main()
{
    Wektor2D w1 = Wektor2D::kart(5, 3);
    Wektor2D w2;
    Wektor2D w3 = Wektor2D::bieg(4, 1);
    Wektor2D w4 = w1 + w3;
}