#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello!\n";
}

void sayHelloTo(string name){
    cout << "Hello " << name << "! "<< endl;
}

string returnHi(){
    return "Hi";
}

string returnHiTo(string name){
    return "Hi " + name +"!\n";
}

int main() {
    sayHello();
    sayHelloTo("Peter");
    string result = returnHi();
    result.append("!!!!\n");
    cout << result;
    cout << returnHiTo("Mike");
    return 0;
}