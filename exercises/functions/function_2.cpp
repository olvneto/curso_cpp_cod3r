#include <iostream>
using namespace std;

//Function prototype
void log(int, bool newLine = true);

int main() {
    log(3);
    log(4);
    log(5);
    
    log(6, false);
    log(7, false);
    log(8, false);
    return 0;
}

void log(int number, bool newLine){
    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";
}