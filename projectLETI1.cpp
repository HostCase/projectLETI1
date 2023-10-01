#include <iostream>


using namespace std;

int main()
{
    setlocale(0, "");
    int fake;
    fake = 1;
    short int shorta;
    shorta = fake;
    long int longa;
    longa = fake;
    float floata;
    floata = fake;
    double doublea;
    doublea = fake;
    long double longdoublea;
    longdoublea = fake;
    cout << sizeof(fake) << "\n" << sizeof(short int) << "\n" << sizeof(long int) << "\n" << sizeof(float) << "\n" << sizeof(double) << "\n" << sizeof(long double) << "\n";





    int inputnumber, choosetype;
    cout << "Введите число" << "\n";
    cin >> inputnumber;
    cout << "Выберите тип числа(введите 1 для int, 2 для shortint)";
    int order = sizeof(fake) * 8 - 1
        int mask = 1 << order;
    for (int i = 0; i <= order; i++){
        cout << ((a & mask) ? 1 : 0);
    a = a << 1;
    if (!i or (i + 1) % 8 == 0)
        cout << "";
}

    return 0;
}