#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string removeLeadingTrailingSpaces(string input) {
    input.erase(0, input.find_first_not_of(" "));
    input.erase(input.find_last_not_of(" ") + 1);
    return input;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    cout << "String without leading and trailing spaces: " << removeLeadingTrailingSpaces(inputString) << endl;
    return 0;
}