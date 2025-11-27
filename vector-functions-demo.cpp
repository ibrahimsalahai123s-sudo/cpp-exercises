#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {10, 20, 30, 40};

    cout << "Size: " << nums.size() << "\n";
    cout << "Max Size: " << nums.max_size() << "\n";

    nums.push_back(50);
    nums.push_back(60);
    nums.push_back(70);
    nums.push_back(80);

    cout << "Capacity: " << nums.capacity() << "\n";

    // Front & Back
    if (!nums.empty())
    {
        cout << "Front: " << nums.front() << "\n";
        cout << "Back: " << nums.back() << "\n";
    }

    // Clear vector
    nums.clear();
    cout << "Size After Clear: " << nums.size() << "\n";

    nums.push_back(100);

    if (nums.empty())
        cout << "Vector is empty\n";
    else
        cout << "Vector is not empty\n";

    return 0;
}
