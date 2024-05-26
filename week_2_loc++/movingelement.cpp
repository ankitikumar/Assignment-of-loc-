#include <iostream>
using namespace std;

void moveNegativeElements(int arr[], int size) {
    int left = 0; 
    int right = size - 1; 

    while (left <= right) {
        while (arr[left] < 0 && left <= right) {
            left++;
        }

        while (arr[right] >= 0 && left <= right) {
            right--;
        }

        if (left <= right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {1, -3, 5, -6, 7, -9, 10, -12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    moveNegativeElements(arr, size);

    cout << "Array after moving negative elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
