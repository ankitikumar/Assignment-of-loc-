#include <iostream>
#include <unordered_map>
using namespace std;

int maxOccurringInteger(int arr[], int size) {
    unordered_map<int, int> frequencyMap;

    for (int i = 0; i < size; ++i) {
        frequencyMap[arr[i]]++;
    }

    int maxFrequency = 0;
    int maxOccurringInteger = arr[0]; 
    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        if (it->second > maxFrequency) {
            maxFrequency = it->second;
            maxOccurringInteger = it->first;
        }
    }

    return maxOccurringInteger;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4,5,5,5,5,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxInteger = maxOccurringInteger(arr, size);

    cout << "Maximum occurring integer: " << maxInteger << endl;

    return 0;
}
