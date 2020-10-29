#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, maximum;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: " ;
    cin >> n3;

    if(n1 > n2){
        maximum = n1;
    }
    if( n1 < n2){
        maximum = n2;
    }
    if(maximum < n3){
        maximum = n3;
    }
    
    cout << "O maior deles é: " << maximum << endl;

    return 0;
}