#include <iostream>


using namespace std;

int main()
{
    setlocale(0, "");
    int choosetype;
    cout << "Выберите номер задания\n1 Вывести задание номер один \n2 Вывести задание номер два\n3 Вывести задание номер три\n4 Вывести задание номер четыре ";
    cin >> choosetype;

    if (choosetype == 1) {
        cout << "Размер в байтах у различных переменных:" << "\n" << "int" << " " << sizeof(int) << "\n" << "short int" << " " << sizeof(short int) << "\n" << "long int" << " " << sizeof(long int) << "\n" << "float" << " " << sizeof(float) << "\n" << "double" << " " << sizeof(double) << "\n" << "long double" << " " << sizeof(long double) << "\n";
    }
    else if (choosetype == 2) {
        int inputnumber;
        cout << "Введите число" << "\n";
        cin >> inputnumber;
        int order = sizeof(int) * 8 - 1;
        unsigned int mask = 1 << order;
        for (int i = 0; i <= order; i++) {
            cout << ((inputnumber & mask) ? 1 : 0);
            mask = mask >> 1;
            if (i == 0 or (i + 1) % 8 == 0) {
                cout << " ";
            }
        }
    }





    ////float////
    else if (choosetype == 3) {



        union MyUnion {
            float floatinTObit;
            int int2bitfloat;
        };
        cout << "\n" << "Введите значение для типа float(используйте . для отделения целой части) \n";
        MyUnion g;
        cin >> g.floatinTObit;
        cout << "\n" << "float \n";
        int orderf = sizeof(float) * 8 - 1;
        unsigned int maskf = 1 << orderf;
        for (int i = 0; i <= orderf; i++) {
            cout << ((g.int2bitfloat & maskf) ? 1 : 0);
            maskf = maskf >> 1;
            if (i == 0 or i == 8) {
                cout << " ";
            }
        }
    }


    else if (choosetype = 4) {
        cout << "\nтут что-то будет)xd";




    }
        return 0;
}