#define ZERO 0
#define SQUARE(X) X * X
#include <iostream>
using namespace std;

int main() {
    cout << SQUARE(10) << endl;// 10 * 10
    cout << SQUARE(1 + 2) << endl;// 1 + 2 * 1 + 2
    return ZERO;
}