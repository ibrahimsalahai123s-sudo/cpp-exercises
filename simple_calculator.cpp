#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 999999; i++)
    {
        int num_one, num_tow, op;
        cout << "====================================================\n";
        cout << "======== The Small Calculator Application ==========\n";
        cout << "====================================================\n";
        cout << "          Please enter the frist number             \n";
        cin >> num_one;
        cout << "          Please enter the second number            \n";
        cin >> num_tow;
        cout << "           Please Choose the Operation            \n";
        cout << "\n";
        cout << " + [1] \n";
        cout << " - [2] \n";
        cout << " / [3] \n";
        cout << " * [4] \n";
        cin >> op;
        if (op == 1)
            cout << "The result is : " << (num_one + num_tow) << "\n";
        else if (op == 2)
            cout << "The result is : " << (num_one - num_tow) << "\n";
        else if (op == 3)
            cout << "The result is : " << (num_one / num_tow) << "\n";
        else if (op == 4)
            cout << "The result is : " << (num_one * num_tow) << "\n";
        else

            cout << "[Please enter number bettwen 1-4]";
    }
}