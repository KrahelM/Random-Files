/*File: pp4e.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program creates a function for 
*	determining if a number is positive or
*	negative that is to be called
*	in the main function. 
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Declare Functions
bool isPositive(double number);


// Begin Main Function
int main()
{
	// Declare the variable
	double number; //integer inputted by user
	do {	
	// Request number from user
	cout << "Enter number (0 to end): ";
	// Applying the users inputted integer
	cin >> number; 
	
		if (isPositive(number)){
		cout << number << " is positive\n";
		}
	else{
		cout << number << " is negative\n";
		}
	} while (number != 0);
	
	return( 0 );
}	

// Function for determining if an integer is positive or negative
bool isPositive(double number)
{
	if (number >= 0){
		return (true);
	}	
	else {	
		return (false);
	}		
}	
