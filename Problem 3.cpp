#include <iostream> 
using namespace std;

// Check for even or odd numbers 

int main() {
	int number;
	cout << "Enter a number: "; 
	cin >> number;

if (number % 2 == 0) { // Incorrect operator 
	cout << number << " is even." << endl;
}

else {
	cout << number << " is odd." << endl;
}

return 0; 
}


