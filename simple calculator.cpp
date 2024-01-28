#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; 
    }

   
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}

