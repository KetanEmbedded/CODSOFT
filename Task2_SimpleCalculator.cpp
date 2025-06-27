// Task 2 - Simple Calculator using C++
// Author: Ketan Mahesh Joshi - CodSoft C++ Internship (June 2025 Batch)

#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    int choice;

    cout << "===== Simple Calculator =====" << endl;
    
    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Show operation menu
    cout << "\nSelect Operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Perform operation based on user choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
            break;

        case 2:
            result = num1 - num2;
            cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
            break;

        case 3:
            result = num1 * num2;
            cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
            break;

        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "\nResult: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "\nError: Division by zero is not allowed." << endl;
            }
            break;

        default:
            cout << "\nInvalid choice. Please select 1 to 4." << endl;
    }

    return 0;
}
