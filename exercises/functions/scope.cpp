#include <iostream>
using namespace std;

int g = 1;//variável global

void func2(){
    int g = 0;//variável local
    g += 100;
}

void func1(){
    g++;
    func2();
}

int main() {
    func1();
    cout << g << endl;
    return 0;
}