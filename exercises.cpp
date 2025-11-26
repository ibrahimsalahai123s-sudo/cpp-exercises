#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int value;
    int sum = 0;
    string contine;
    cout << "Start entering numbers (write y to stop):\n";
    vector<int> numbers;
    for (int i = 0; i < 50; i++)
    {
        cin >> value;
        numbers.push_back(value);
        cout << "Please enter numbers (write y to stop): \n";
        cin >> contine;
        if (contine == "y") break;
         
    }
    int maxvalue = numbers[0];
    int minvalue = numbers[0];
    cout << "============================\n";
    for(int n = 0; n < numbers.size(); n++)
    {
        sum += numbers.at(n);
        if(numbers[n] > maxvalue) maxvalue = numbers[n];
        if(numbers[n] < minvalue) minvalue = numbers[n];
    }
    cout << "the sum of values is : " << sum << "\n";
    cout << "the max value is : " << maxvalue << "\n";
    cout << "the min value is : " << minvalue << "\n";


    return 0;
}
