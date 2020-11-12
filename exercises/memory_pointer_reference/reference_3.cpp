#include <iostream>
using namespace std;

int main() {

    //string& badRef; precisa ser inicializado
    //string& badRef = nullptr; não pode ser ponteiro nulo

    string greeting = "Hi!";
    string& ref = greeting;

    cout << greeting << "\t" << ref << endl;

    string name = "Peter";
    ref = name;// alterado o valor, mas não o endereço de "ref", que continua apontando para "greeting"
    // greeting também passou a ter o valor  "Peter"
    // name possui outro endereço, diferente de ref e greeting

    cout << name << "\t" << ref << "\t"<<greeting<<endl;
    cout << &name << "\t" << &ref << "\t"<< &greeting<<endl;

    ref.append("!!!!!");

    cout << greeting;



    return 0;
}