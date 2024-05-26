#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    number = abs(number);

    do {
        sum += number % 10;  
        number /= 10;        
    } while (number > 0);   

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
