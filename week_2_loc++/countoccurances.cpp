#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int number) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == number) {
            ++count;
        }
    }
    return count;
}

int main() {
    int size, number;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the number to count: ";
    cin >> number;

    int occurrences = countOccurrences(arr, size, number);
    cout << "The number " << number << " occurs " << occurrences << " times in the array." << endl;

    return 0;
}
