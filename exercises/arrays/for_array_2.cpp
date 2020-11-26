#include <iostream>
using namespace std;

int main()
{
    string names[5] = {"Hanna", "Peter", "Mary", "Mike", "James"};

    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << " ";
    }

    cout << "\nForeach 1 (copy)...\n";

    for(string s:names){
        s.append("!!!!");
        cout << s << " ";
    }
    cout << "\nForeach 2 (ref)...\n";

    for(string &s:names){
        s.append("!!!!");
        cout << s << " ";
    }
    cout << "\nForeach 3 (sem alterar o valor)...\n";
    for(auto const &s:names){
        //s.append("!!!!");
        cout << s << " ";
    }

    cout << names[0] << endl;

    return 0;
}