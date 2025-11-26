#include <iostream>
#include <vector>
#include <array>
using namespace std;

void printInfo(int arr[], int size)
{
    int result = 0;
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        result += arr[i];

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Sum = " << result << "\n";
    cout << "Max = " << max << "\n";
    cout << "Min = " << min << "\n";
}
void myfunc(const array<int, 5> &arr)
{
    int result = 0;
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        result += arr[i];

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Sum = " << result << "\n";
    cout << "Max = " << max << "\n";
    cout << "Min = " << min << "\n";
}

void myfunc2(const vector<int> &Vec)
{
    int result = 0;
    int max = Vec[0];
    int min = Vec[0];
    for (int num : Vec)
    {
        result += num;
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    cout << "Sum = " << result << "\n";
    cout << "Max = " << max << "\n";
    cout << "Min = " << min << "\n";
}

int main()
{
    int array1[5] = {10, 20, 30, 40, 50};
    array<int, 5> array2 = {60, 70, 80, 90, 100};
    vector<int> vec = {110, 120, 130, 140, 150};

    cout << "==== Raw Array ====\n";
    printInfo(array1, 5);
    cout << "==== STD Array ====\n";
    myfunc(array2);
    cout << "==== STD Vector ====\n";
    myfunc2(vec);

    return 0;
}
