#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "--- Dev-C++ Calculator ---" << endl;

    
    for (int i = 0; i < 100; i++) { 
        cout << "\n\nSelect an operation (+, -, *, /) or press 'x' to exit: ";
        cin >> operation;

    
        if (operation == 'x') {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch(operation) {
            case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2;
                break;

            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2;
                break;

            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2;
                break;

            case '/':
                if(num2 != 0)
                    cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2;
                else
                    cout << "Error! Division by zero is not allowed.";
                break;

            default:
                cout << "Error! Invalid operator.";
                break;
        }
    }

    return 0;
}
