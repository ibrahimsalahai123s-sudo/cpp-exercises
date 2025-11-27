#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator frist = nums.begin();
    vector<int>::iterator last = nums.end() - 1;

    cout << "frist element is : " << *frist << "\n";
    cout << "second element is : " << frist[1] << "\n";
    cout << "third element is : " << frist[2] << "\n";

    cout << "last element is : " << *last << "\n";
    cout << "before last element is : " << *(last - 1) << "\n";

    advance(frist, 3);
    cout << "frist element is : " << *frist << "\n";
    advance(frist, -2);
    cout << "frist element is : " << *frist << "\n";

    return 0;
}
