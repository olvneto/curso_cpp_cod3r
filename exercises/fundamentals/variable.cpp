#include <cstdio>

int main(){
    double price = 99.80;
    double tax = 0.08;

    double finalPrice = price * (1 + tax);

    // %f para double %d para inteiro
    printf("O preço é %.2f.", finalPrice);

    return 0;
}