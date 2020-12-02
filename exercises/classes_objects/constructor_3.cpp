#include <iostream>
using namespace std;

class Actor{
public:
    string name;
    string email;

    Actor() : Actor("Anonymous","_"){}
    Actor() : Actor("Anonymous"){}

    Actor(string name, string email="???"){
        //(*this).name = name;
        //(*this).email = email;
        this->name = name;
        this->email = email;
    }

    string toString(){
        return name + " [" + email + "]";
    }
};

int main() {
    Actor pr;
    Actor ac1("Steve","carrell@office.com");
    
    cout << ac1.toString() << endl;
    cout << pr.toString() << endl;
    return 0;
}