// Menu driven arithmetic calculator
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    cout << " Enter numbers: ";
    cin >> num1 >> num2;
    cout << " Enter an operator (+, -, *, /): ";
    cin >> op;
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }


    return 0;
}