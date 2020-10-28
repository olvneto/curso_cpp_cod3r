#include <iostream>
using namespace std;

int main(){

    bool isAdmin = false;//1 0 false true
    cout << isAdmin << endl;

    char symbol = '#';
    cout << symbol << endl;

    //signed unsigned long short long long - modificadores do int
    unsigned short int age = 31;
    cout << symbol << endl;

    float pi = 3.14;// 32 bits - single precision
    const double PI = 3.1415; // 64 bits - doble precision
    cout << pi << endl;
    cout << PI << endl;

    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3+ n4 << endl;

    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(int) << " byte" << endl;
    cout << sizeof(long int) << " byte" << endl;
    cout << sizeof(long long int) << " byte" << endl;
    cout << sizeof(float) << " byte" << endl;
    cout << sizeof(double) << " byte" << endl;


    return 0;
}