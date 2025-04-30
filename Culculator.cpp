#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int factorial(int n) {
    if (n < 0) {
        cout << "Error: Factorial of a negative number is not defined." << endl;
        return 0;
    }

    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice, num1, num2;

    while (true) {
        cout << "\n=== C++ Calculator ===\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Factorial\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Thank you for using the calculator.\n";
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } else if (choice == 5) {
            cout << "Enter a number to find its factorial: ";
            cin >> num1;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << sub(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << mul(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << division(num1, num2) << endl;
                break;
            case 5:
                cout << "Result: " << factorial(num1) << endl;
                break;
            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}
