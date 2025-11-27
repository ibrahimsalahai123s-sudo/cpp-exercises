#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50, 60};
    vector<int>::iterator it;
    for (it = nums.end() - 1; it >= nums.begin(); it--)
    {
        cout << *it << "\n";
        if (it == nums.begin())
            break;
    }
    cout << "==================\n";
    // Ranged loop with for
    for (int val : nums)
    {
        cout << val << "\n";
    }
    cout << "==================\n";
    int numbers[6] = {20, 40, 60, 80, 100, 120};
    for (int mynumber : numbers)
    {
        cout << mynumber << "\n";
    }

    return 0;
}
