#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    nums.assign(10,1);//cria um vetor de 10 posições, todas com o valor 1.

    nums[0] = 7;
    nums[3] = 8;
    nums[5] = 8;
    nums[9] = 7;

    nums.erase(nums.begin() + 4);//exclui o quinto elemento.

    for(auto n: nums){
        cout << n << " ";
    }

    nums.clear();//exclui todos os elementos.

    cout << "\n" << nums.size() << endl;
    return 0;
}