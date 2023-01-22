#include <iostream>

using namespace std;

void fillArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int firstArray[5];
    int secondArray[10];
    
    fillArray(firstArray, 5);
    fillArray(secondArray, 10);
    
    printArray(firstArray, 5);
    printArray(secondArray, 10);
    
    return 0;
}