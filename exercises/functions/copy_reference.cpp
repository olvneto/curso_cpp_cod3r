#include <iostream>
using namespace std;

void inc(int value){
    value++;
}

void incRef(int &value){
    value++;
    value++;
    value++;
}

int main() {
    int x = 1;

    inc(x);
    cout << x << endl;

    incRef(x);

    cout << x << endl;
    return 0;
}