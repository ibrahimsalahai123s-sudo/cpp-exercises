#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {10, 500, 60, -20, 20, 20, 100, 20};
    int val = 20;

    // Count occurrences
    int countTime = count(nums.begin(), nums.end(), val);
    cout << "Number " << val << " found " << countTime << " Times\n";

    cout << "=================================\n";

    // Print original
    for (int n : nums)
        cout << n << "\n";

    // Sort ascending
    sort(nums.begin(), nums.end());
    cout << "=================================\n";
    for (int n : nums)
        cout << n << "\n";

    // Reverse
    reverse(nums.begin(), nums.end());
    cout << "=================================\n";
    for (int n : nums)
        cout << n << "\n";

    return 0;
}
