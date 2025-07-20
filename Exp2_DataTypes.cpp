#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    float b;
    string c;
    double d;
    char e;
    bool f;

    cout << "==============================" << endl;
    cout << "       DATA TYPE SIZES        " << endl;
    cout << "==============================" << endl;

    cout << "\nEnter an integer value        : ";
    cin >> a;
    cout << "Size of int                   : " << sizeof(a) << " bytes\n";

    cout << "\nEnter a decimal number (float): ";
    cin >> b;
    cout << "Size of float                 : " << sizeof(b) << " bytes\n";

    cout << "\nEnter a single word (string)  : ";
    cin >> c;
    cout << "Size of string (variable)     : " << sizeof(c) << " bytes\n";

    cout << "\nEnter a large decimal (double): ";
    cin >> d;
    cout << "Size of double                : " << sizeof(d) << " bytes\n";

    cout << "\nEnter any one character       : ";
    cin >> e;
    cout << "Size of char                  : " << sizeof(e) << " bytes\n";

    cout << "\nEnter true(1) or false(0)     : ";
    cin >> f;
    cout << "Size of bool                  : " << sizeof(f) << " bytes\n";

    cout << "\n==============================" << endl;
    cout << "       INPUT COMPLETE!       " << endl;
    cout << "==============================" << endl;

    return 0;
}