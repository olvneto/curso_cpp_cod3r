#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b + 10;
}

namespace calc
{
    int add(int a, int b)
    {
        return a + b + 20;
    }
    int subtract(int a, int b)
    {
        return a - b;
    }
} // namespace calc

int main()
{
    cout << add(10, 10) << endl;
    cout << calc::add(10, 10) << endl;
    cout << calc::subtract(10, 10) << endl;
    return 0;
}