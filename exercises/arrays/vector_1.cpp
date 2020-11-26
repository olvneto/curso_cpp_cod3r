#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    nums[0] = 0;

    for (int n : nums)
    {
        cout << n << " ";
    }
    cout << endl;

    for (auto i = nums.begin(); i != nums.end(); i++)
    {//acesso normal alterando os valores
        *i += 100;
        cout << *i << endl;
    }
    for (auto i = nums.rbegin(); i != nums.rend(); i++)
    {//do fim para o início
        cout << *i << endl;
    }
    for (auto i = nums.crbegin(); i != nums.crend(); i++)
    {//não alterável, do fim para o início
        cout << *i << endl;
    }

    cout << " " << endl;
    return 0;
}