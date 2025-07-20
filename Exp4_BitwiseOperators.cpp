#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "\n===================================" << endl;
    cout << "        BITWISE OPERATORS DEMO     " << endl;
    cout << "===================================\n" << endl;

    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    cout << "\n------------ RESULTS --------------\n" << endl;

    cout << "a & b        (AND)         = " << (a & b) << endl;
    cout << "a | b        (OR)          = " << (a | b) << endl;
    cout << "a ^ b        (XOR)         = " << (a ^ b) << endl;
    cout << "~a           (NOT a)       = " << (~a) << endl;
    cout << "a << 2       (Left Shift)  = " << (a << 2) << endl;
    cout << "a >> 1       (Right Shift) = " << (a >> 1) << endl;

    cout << "\n===================================" << endl;
    cout << "         Execution Complete     " << endl;
    cout << "===================================\n" << endl;

    return 0;
}