#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "-------------------------------\n";
    cout << "     DECISION MAKING PROGRAM   \n";
    cout << "-------------------------------\n\n";

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0)
        cout << "The number is zero.\n";
    else if (num % 2 == 0)
        cout << "The number " << num << " is even.\n";
    else
        cout << "The number " << num << " is odd.\n";

    cout << "\n-------------------------------\n";

    int a, b, c;
    cout << "Enter three numbers to find the greatest: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << a << " is the greatest.\n";
    else if (b >= a && b >= c)
        cout << b << " is the greatest.\n";
    else
        cout << c << " is the greatest.\n";

    cout << "\n-------------------------------\n";

    int day;
    cout << "Enter day number (1 for Monday to 7 for Sunday): ";
    cin >> day;

    string dayName;
    switch (day) {
        case 1: dayName = "Monday"; break;
        case 2: dayName = "Tuesday"; break;
        case 3: dayName = "Wednesday"; break;
        case 4: dayName = "Thursday"; break;
        case 5: dayName = "Friday"; break;
        case 6: dayName = "Saturday"; break;
        case 7: dayName = "Sunday"; break;
        default:
            cout << "Invalid day number entered.\n";
            return 0;
    }

    cout << "You selected: " << dayName << "\n";

    cout << "\n-------------------------------\n";

    int mealChoice;
    cout << "Which meal menu would you like to see?\n";
    cout << "1. Breakfast\n";
    cout << "2. Lunch\n";
    cout << "3. Dinner\n";
    cout << "Enter your choice: ";
    cin >> mealChoice;

    cout << "\nMenu for " << dayName << ":\n";

    if (mealChoice == 1) {
        switch (day) {
            case 1: cout << "Breakfast: Poha and ginger tea\n"; break;
            case 2: cout << "Breakfast: Upma with coconut chutney\n"; break;
            case 3: cout << "Breakfast: Aloo paratha with curd\n"; break;
            case 4: cout << "Breakfast: Idli and sambhar\n"; break;
            case 5: cout << "Breakfast: Masala toast and tea\n"; break;
            case 6: cout << "Breakfast: Medu vada with chutney\n"; break;
            case 7: cout << "Breakfast: Chole and kulche\n"; break;
        }
    } else if (mealChoice == 2) {
        switch (day) {
            case 1: cout << "Lunch: Dal, rice, and bhindi sabzi\n"; break;
            case 2: cout << "Lunch: Roti, paneer bhurji, and salad\n"; break;
            case 3: cout << "Lunch: Masoor dal, rice, and beans curry\n"; break;
            case 4: cout << "Lunch: Rajma chawal and salad\n"; break;
            case 5: cout << "Lunch: Veg pulao with raita\n"; break;
            case 6: cout << "Lunch: Biryani with curd and papad\n"; break;
            case 7: cout << "Lunch: Pav bhaji and buttermilk\n"; break;
        }
    } else if (mealChoice == 3) {
        switch (day) {
            case 1: cout << "Dinner: Chapati with mixed vegetables\n"; break;
            case 2: cout << "Dinner: Khichdi and pickle\n"; break;
            case 3: cout << "Dinner: Chole with jeera rice\n"; break;
            case 4: cout << "Dinner: Tomato soup and toast\n"; break;
            case 5: cout << "Dinner: Stuffed paratha with curd\n"; break;
            case 6: cout << "Dinner: Veg noodles with Manchurian\n"; break;
            case 7: cout << "Dinner: Homemade veggie pizza\n"; break;
        }
    } else {
        cout << "Invalid meal option selected.\n";
    }

    cout << "\n-------------------------------\n";
    cout << "   Thank you for using the app!  \n";
    cout << "-------------------------------\n";

    return 0;
}