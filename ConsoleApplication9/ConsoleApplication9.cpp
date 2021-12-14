#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double  x, y;
    cout << "Введите значение: " << endl;
    cout << "cosn= ";
    cin >> x;
    cout << "sinN= ";
    cin >> y;

    cout << "an= " << (cos(1) / sin(1)) * (cos(1) + cos(2)) / (sin(1) + sin(2)) * (cos(1) + cos(2) + cos(x)) / (sin(1) + sin(2) + sin(y)) << endl;

    system("pause");
    return 0;
}