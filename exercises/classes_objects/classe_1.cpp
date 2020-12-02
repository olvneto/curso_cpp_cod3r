#include <iostream>
#include <sstream>
using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;

    string toString(){
        stringstream ss;
        ss << day << "/" << month << "/" << year;
        return ss.str();
    }
};

int main()
{
    Date d1;
    Date d2;

    d1.day = 3;
    d1.month = 11;
    d1.year = 2023;

    cout << d1.toString()<< endl;

    return 0;
}