
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    double result;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter an operation (+, -, *, /, %): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The result of " << num1 << " + " << num2 << " is: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "The result of " << num1 << " - " << num2 << " is: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The result of " << num1 << " * " << num2 << " is: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The result of " << num1 << " / " << num2 << " is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case '%':
            if (static_cast<int>(num2) != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                cout << "The result of " << num1 << " % " << num2 << " is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
