#include <iostream>
using namespace std;

int main() {
    int x = 5; //stack

    // new ==> malloc() + constructor
    int *y = new int(10); // heap 4 bytes
    cout << x * *y << endl;
    delete y;

    int *w = new int[100]; // 400 bytes na heap
    w[49] = 123;

    delete []w;

    cout << " " << endl;
    return 0;
}