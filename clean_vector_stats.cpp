#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    double Median = 0;
    vector<int> modes;
    int size = 0;
    vector<int> cleanVec;
    vector<int> dirtyVec = {50, 100, -5, 60, 60, 200, 70, 85, 85, 90, -10, 45};
    for (int &i : dirtyVec)
    {
        if (i < 100 && i > 0)
            cleanVec.push_back(i);
    };
    sort(cleanVec.begin(), cleanVec.end());
    cout << "this is the clean Vector : " << "{";
    for (int y = 0; y < cleanVec.size(); y++)
    {   
        cout << cleanVec[y];
        if(y != cleanVec.size() - 1)
        cout << ", ";
    };
    cout << "}\n";
    size = cleanVec.size();
    if (size % 2 == 0)
    {
        cout << "Median = " << double(cleanVec.at((size / 2)) + cleanVec.at((size / 2) - 1)) / 2.0 << "\n";
    }
    else
    {
        cout << "Median = " << cleanVec.at(size / 2);
    };
    for (int m = 1; m < cleanVec.size(); m++)
    {
        if (cleanVec.at(m) == cleanVec.at(m - 1))
            modes.push_back(cleanVec.at(m));
    };
    cout << "Modes = {";
    
    for (int h = 0; h < modes.size(); h++)
    {   cout << modes[h];
        if(h != modes.size()-1)
        cout << ", ";
    };
    cout <<"}";
    return 0;
}
