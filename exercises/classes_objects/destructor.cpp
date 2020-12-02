#include <iostream>
using namespace std;

class Person{
public:
    string name;

    Person(string name) : name(name){
        cout << "Hello! My name is " << name << endl;
    }
    ~Person(){
        cout << name << " saying goodbye!" << endl;
    }
};

void createPerson(){
    Person p = {"John"};
}

int main() {
    Person p1("Peter");
    createPerson();//o destrutor elimina os objetos quando termina ou sai do escopo.

    {
        Person p2{"Mary"};
        Person p4 = Person("May");
    }

    return 0;
}