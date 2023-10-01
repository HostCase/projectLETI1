#include <iostream>


using namespace std;

int main()
{
    setlocale(0, "");

    cout << sizeof(int) << "\n" << sizeof(short int) << "\n" << sizeof(long int) << "\n" << sizeof(float) << "\n" << sizeof(double) << "\n" << sizeof(long double) << "\n";
 

    /////////
    /////////


    int inputnumber, choosetype;
    cout << "Введите число" << "\n";
    cin >> inputnumber;
    cout << "Выберите тип числа(введите 1 для int, 2 для shortint)";
    int order = sizeof(int) * 8 - 1;
        int mask = 1 << order;
    for (int i = 0; i <= order; i++) {
        cout << ((inputnumber & mask) ? 1 : 0);
        inputnumber = inputnumber << 1;
        if (!i or (i + 1) % 8 == 0) {
        cout << "";
    }
}

    return 0;
}