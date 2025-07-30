#include<iostream>
using namespace std;

int main() {
    int num1, num2, choice;

    cout << "==============================" << endl;
    cout << "      Soham's Calculator          " << endl;
    cout << "==============================" << endl;

    cout << "\nEnter first number      : ";
    cin >> num1;

    cout << "Enter second number     : ";
    cin >> num2;

    cout << "\nSelect Operation:" << endl;
    cout << "  1. Addition (+)" << endl;
    cout << "  2. Subtraction (-)" << endl;
    cout << "  3. Multiplication (*)" << endl;
    cout << "  4. Division (/)" << endl;
    cout << "Enter choice (1 to 4)   : ";
    cin >> choice;

    cout << "\n------------------------------" << endl;

    if (choice == 1) {
        cout << "   " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if (choice == 2) {
        cout << "   " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else if (choice == 3) {
        cout << "   " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    } else if (choice == 4) {
        if (num2 != 0)
            cout << "   " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "   Error: Division by zero!" << endl;
    } else {
        cout << "   Error: Invalid choice!" << endl;
    }

    cout << "------------------------------" << endl;
    cout << "       Program Ended          " << endl;

    return 0;
}
