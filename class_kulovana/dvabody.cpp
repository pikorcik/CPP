#include "dvabody.h"
#include "math.h"
#include "iostream"

DvaBody::DvaBody(double x_a, double y_a, double x_b, double y_b)
{
    ax = x_a;
    ay = y_a;
    bx = x_b;
    by = y_b;
    pi = 4*atan(pi);
}

DvaBody::~DvaBody() {
}

void DvaBody::delka()
{
    double delka = sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        std::cout << "Delka: " << delka << " [m]" << std::endl;
}

void DvaBody::smernik()
{
    double dx = bx-ax;
    double dy = by-ay;
    double fi;

    if (dx == 0) {
        std::cout << "Chyba! Stejna x-ova souradnice. Nelze spočítat směrník." << std::endl;
    }
    else {
        fi = atan(abs(dy)/abs(dx));

        double sigma_rad;
        double sigma2;

        if (dx > 0 && dy >= 0)
            sigma_rad = fi;
        else if (dx < 0 && dy >= 0)
            sigma_rad = pi-fi;
        else if (dx < 0 && dy < 0)
            sigma_rad = pi+fi;
        else if (dx > 0 && dy < 0)
            sigma_rad = 2*pi-fi;
        sigma2 = 2*pi-sigma_rad;
        std::cout << "Smernik AB a smernik BA: " << std::endl;
        //std::cout << "Smernik: " << sigma_rad << " [rad]" << std::endl;

    }
}

