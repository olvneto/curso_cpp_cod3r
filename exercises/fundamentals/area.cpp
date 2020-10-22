#include <iostream>
using namespace std;

int main(){
    const double PI = 3.1415;
    double raio;

    cout << "Digite o raio da circunferência: ";
    cin >> raio;

    double area = PI * raio * raio;

    printf("A área da circuferência é: %.2f!\n", area);

    return 0;
}