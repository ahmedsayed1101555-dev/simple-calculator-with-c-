#include <iostream>
using namespace std;
int main() {
    cout << "Welcome to the simple calculator!" << endl;
    char op;
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;
    if (op == '+') {
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
    }
    else if (op == '/') {
        if (num2 != 0) {
            cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else {
        cout << "Error: Invalid operator, try Again." << endl;
    }

    cout << "Thank you for using the simple calculator!" << endl;
    return 0;
}