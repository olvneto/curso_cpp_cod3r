#include <iostream>
using namespace std;

int main() {
    int values[] = {31, 44, 58, 91, 25};
    //int values[5];// outra maneira de inicializar o array

    cout << values[0] << endl;
    cout << values[4] << endl;

    cout << sizeof values / sizeof values[0] << endl;

    return 0;
}