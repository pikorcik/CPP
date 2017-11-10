#include <iostream>
#include <dvabody.h>

using namespace std;

int main()
{
    double x1, x2, y1, y2;
    cout << "Vlozte x-ovou souradnici prvniho bodu: ";
    cin >> x1;
    cout << "Vlozte y-ovou souradnici prvniho bodu: ";
    cin >> y1;
    cout << "Vlozte x-ovou souradnici druheho bodu: ";
    cin >> x2;
    cout << "Vlozte y-ovou souradnici druheho bodu: ";
    cin >> y2;
    DvaBody b(x1, y1, x2, y2);
    b.delka();
    b.smernik();
}
