#include <iostream>
using namespace std;

int main(){
    string title = "Mr. ";
    string name("John");
    string end(10, '!'); // 10 pontos de exclamação

    cout << name.size() << endl;
    cout << name.back() << endl; //n
    cout << name[2] << endl; // h
    cout << end << endl;

    //concatenação de strings
    cout << title + name << endl;

    name += " Doe";
    name.append(end);
    cout << name << endl;
    
    return 0;
    
} 
