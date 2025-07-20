#include<iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    float avg;

    cout << "\n========================================" << endl;
    cout << "        MARKS & GRADE CALCULATOR        " << endl;
    cout << "========================================\n" << endl;

    cout << "Enter marks for Subject 1 : ";
    cin >> m1;

    cout << "Enter marks for Subject 2 : ";
    cin >> m2;

    cout << "Enter marks for Subject 3 : ";
    cin >> m3;

    cout << "Enter marks for Subject 4 : ";
    cin >> m4;

    cout << "Enter marks for Subject 5 : ";
    cin >> m5;

    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

    cout << "\n----------------------------------------" << endl;
    cout << " Total Marks      : " << (m1 + m2 + m3 + m4 + m5) << " / 500" << endl;
    cout << " Percentage       : " << avg << "%" << endl;

    cout << " Grade            : ";
    if(avg >= 90){
        cout << "O" << endl;
    }
    else if(avg >= 85 && avg < 90){
        cout << "A+" << endl;
    }
    else if(avg >= 75 && avg < 85){
        cout << "A" << endl;
    }
    else if(avg >= 65 && avg < 75){
        cout << "B+" << endl;
    }
    else if(avg >= 55 && avg < 65){
        cout << "B" << endl;
    }
    else if(avg >= 40 && avg < 55){
        cout << "C" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    cout << "----------------------------------------" << endl;
    cout << "            Result Generated ✅        " << endl;
    cout << "========================================\n" << endl;

    return 0;
}
