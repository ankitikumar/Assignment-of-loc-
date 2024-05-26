#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; 
    int originalArray[SIZE] = {1, 2, 3, 4, 5}; 
    int copiedArray[SIZE]; 

    for (int i = 0; i < SIZE; ++i) {
        copiedArray[i] = originalArray[i];
    }

    cout << "Elements of the copied array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << copiedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
