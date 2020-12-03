#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        Person(string name) : name(name){
            cout << "Hello! My name is " << name << endl;
        }

        ~Person(){
            cout << name << " is saying goodbye!" << endl;
        }
};

Person * createPerson(){
    Person p("Hanna");
    return &p;
}

int main() {
    Person *pp1;

    {
        Person p1("Peter");
        pp1 = &p1;
    }
    cout << pp1->name << endl;//não deve ser feito, está acessando um objeto já 
    //destruído, mas que ainda continua na memória.

    Person *pp2 = createPerson();
    cout << pp2->name << endl;

    cout << "End of code." << endl;
    return 0;
}