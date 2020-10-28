#include <iostream>
using namespace std;

int main(){
    //type inference
    auto a = 1;// infere para int
    auto b = 1.2;// infere que é double
    auto c = false;

    //a = "Teste"; -> dá erro

    cout << typeid(a).name() << endl
        << typeid(b).name() << endl
        << typeid(c).name() << endl;

    return 0;
}
