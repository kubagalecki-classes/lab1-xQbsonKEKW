class Wektor2D
{
public:
  Wektor2D(){this->x=0; this->y=0;}
  Wektor2D(double a, double b)
    {
        this->x = a;
        this->y = b;
    }
  ~Wektor2D() {};
  double getX() { return this->x; }
  double getY() { return this->y; }
  void setX(double a) { this->x = a; }
  void setY(double b) { this->y = b; }
private:
  double x;
  double y;
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D(w1.getX() + w2.getX(), w1.getY() + w2.getY());
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    return w1.getX() * w2.getX() + w1.getY() * w2.getY();
}