#include <iostream>
using namespace std;

class Actor{
public:
    string name;
    string email;

    Actor(string name="Anonymous", string email="???") 
    : name(name), email(email) {}

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