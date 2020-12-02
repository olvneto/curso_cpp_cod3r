#include <iostream>
using namespace std;

class User{
public:
    string name;
    string email;

    User(){}

    User(string _name, string _email){
        name = _name;
        email = _email;
    }

    string toString(){
        return name + " [" + email + "]";
    }
};

int main() {
    User user1;
    user1.name = "Peter Jonhson";
    user1.email = "peter.john.123@zymail.com";

    User user2("Mary M.", "mym@foo.com");
    User user3 = User("Mary M.", "mym@foo.com");

    cout << user1.toString() << endl;
    cout << user2.toString() << endl;
    cout << user3.toString() << endl;

    return 0;
}