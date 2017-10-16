#include <iostream>
#include <conio.h>

// Editor Tailea Nguyen
using namespace std; //*

					//functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//MAIN
void main() {
	for (int i = 0; i < 30; i++){ // Repeats only 30 times
	
	int someThreeDigitNumber; // The number the user inputs
	cout << "Input 3 digit positive integer. . .";
	cin >> someThreeDigitNumber;
	int a, b, c;

	a = (someThreeDigitNumber / 100); // Defines the first digit
	b = (someThreeDigitNumber / 100) % 10; // Defines the second digit
	c = (someThreeDigitNumber % 10); // Defines the third digit



	if (a < b && b < c) { // check to see if ascending

		cout << "Your digits are in ascending order from left to right." << endl;
	}
	else if (a > b && b > c) { // check to see if descending

		cout << "Your digits are in descending order from left to right." << endl;
	}
	else if (a = b = c) { // check to see if neither
		cout << "Your digits are neither ascending or descending." << endl;
	}
	}
	pause(); // pauses to see the displayed text

}
