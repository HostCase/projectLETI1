#include <iostream>


using namespace std;

int main()
{
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
    return 0;






}