#ifndef DVABODY_H
#define DVABODY_H

class DvaBody
{
public:
    DvaBody(); // konstruktor
    DvaBody(double x_a, double y_a, double x_b, double y_b);
    ~DvaBody(); // destruktor
    void smernik();
    void delka();
private:
    double pi, ax, ay, bx, by;
};

#endif // DVABODY_H
