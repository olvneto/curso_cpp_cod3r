#include <iostream>
using namespace std;

int main() {
    int arr[] = {47, 33, 72, 13, 88};
    int *p1 = &arr[0];
    cout << *p1 << endl;

    p1++;//pula quatro bytes
    cout << *p1 << endl;

    p1++;//pula quatro bytes
    cout << *p1 << endl;

    cout << "...." << endl;

    cout << p1[0] << endl;
    cout << p1[1] << endl;
    cout << p1[2] << endl;

    int w = 123;
    int *po = &w;

    cout << po << endl;
    cout << po[0] << endl;

    *po = 321;
    cout << *po << endl;
    cout << w << endl;

    return 0;
}