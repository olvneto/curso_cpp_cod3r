#include <iostream>
using namespace std;

const double MINIMUM_WAGE = 1500;

class Employee {
public:
    string name;
private:
    double wage;
public:
    double getWage(){
        return wage > MINIMUM_WAGE ? wage : MINIMUM_WAGE;
    }

    void setWage(double wg){
        if(wg >= MINIMUM_WAGE){
            wage = wg;
        }
    }
};

int main() {
    Employee emp1;
    emp1.name = "Paul Smith";
    emp1.setWage(5000);
    emp1.setWage(500);
    cout << "US$ " << emp1.getWage() << endl;
    return 0;
}