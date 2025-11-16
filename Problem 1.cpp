//Positive or negative number
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) { // Fill in the condition for positive number
        cout << "The number is positive." << endl;
    }
    else if (number < 0) { // Fill in the condition for negative number
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
