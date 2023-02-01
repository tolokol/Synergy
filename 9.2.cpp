#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string names[5];
    cout << "5 фамилий введи : " << endl;

    // Input names into the array
    for (int i = 0; i < 5; i++)
    {
        cin >> names[i];
    }

    // Sort names in the array in alphabetical order
    sort(names, names + 5);

    cout << "Sorted names: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}