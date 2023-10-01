#include <iostream>


using namespace std;

int main()
{
    setlocale(0, "");
  
    cout <<"Размер в байтах у различных переменных:"<<"\n" << "int" << " " << sizeof(int) << "\n" << "short int" << " " << sizeof(short int) << "\n" << "long int" << " " << sizeof(long int) << "\n" << "float" << " " << sizeof(float) << "\n" << "double" << " " << sizeof(double) << "\n" << "long double" << " " << sizeof(long double) << "\n";
    
    /// 
    int inputnumber, choosetype;
    cout << "Введите число" << "\n";
    cin >> inputnumber;
    cout << "Выберите тип числа(введите 1 для int, 2 для shortint)"<<"\n";
    int order = sizeof(int) * 8 - 1;
        unsigned int mask = 1 << order;
        for (int i = 0; i <= order; i++) {
            cout << ((inputnumber & mask) ? 1 : 0);
            mask = mask >> 1;
            if (i == 0 or (i + 1) % 8 == 0) {
                cout << " ";
            }
        }
    
        
        
        
        
        ////float////

    
     
        
        union MyUnion{
        float floatinTObit;
        int int2bitfloat;
        };
    cout <<"\n" << "Введите значение для типа float(используйте . для отделения целой части) \n";
    MyUnion g;
    cin >> g.floatinTObit;
    cout <<"\n"<<"float \n";
    int orderf = sizeof(float) * 8 - 1;
    unsigned int maskf = 1 << orderf;
    for (int i = 0; i <= orderf; i++) {
        cout << ((g.int2bitfloat & maskf) ? 1 : 0);
        maskf = maskf >> 1;
        if (i == 0 or (i + 1) % 8 == 0) {
            cout << " ";
        }
    }
    return 0;
}