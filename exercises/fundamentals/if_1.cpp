#include <iostream>
using namespace std;

int main() {
    double finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    if(finalGrade >= 7) {
        cout << "Excellente grade." << endl;
        cout << "Congratulations." << endl;
    }

    return 0;
}