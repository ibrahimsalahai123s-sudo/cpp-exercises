#include <iostream>
#include <vector>
#include <array>
using namespace std;

void calc(vector<int> numsVector)
{
    int result = 0;
    for(int num : numsVector )
    {
        result += num; // this form the best form
    }
    cout << "the result is : " << result << "\n";
}

int main()
{
    int nums[4] = {10, 20, 30};
    cout << nums[2] << "\n";
    nums[3] = 100;
    cout <<  nums[3] << "\n"; 

    cout << "====================\n";
    array<int,4> numsArray = {10, 20, 30};
    cout << numsArray[2] << "\n";
    numsArray[3] = 100;
    cout << numsArray[3] << "\n";
    cout << "====================\n";
    vector<int> vectorofnumbers = {10,20,30,40,50,60,70,20};
    calc(vectorofnumbers);
    return 0;
}
