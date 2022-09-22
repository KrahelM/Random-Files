/*File: pp2c.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program takes the users inputted age and outputs whether they 
*	are old enough for specific actions such as social security, voting, drinking...
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable
	int age = 0;

	
	// Request age input from user
	cout << "Please type your age and hit enter:";
	cin >> age; //Applying the users age to the variable for their age
	
	cout << "Enter your age:" << age << "\n";  //Repeat Age to User

	// Compare user age to age limits for specific actions 
	//(social security, renting a car, drinking alcohol) to give them 
	// the most recent milestone
	if ( age >= 65 ) { 
		cout << "You can collect social security";
	}
	else if ( age >= 25 ) {
		cout << "You can rent a car";
	}
	else if ( age >= 21 ) {
		cout << "You can drink";
	}
	else if ( age >= 18 ) {
		cout << "You can vote";
	}
	else {
		cout << "";
	}

	cout << "\n\n";  //Make it a clean look by putting next some extra 
					 //lines between each run of the program
	
	
	return( 0 );
}	


