#include <iostream>
using namespace std;

int nextId(){//static - mantém o valor atualizado
    static int id = 1;//não inicializa toda vez que a função é chamada
    return id++;
}

int main() {
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    return 0;
}