/*File: pp5a.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program requests 2 numbers from the 
*	user and calls a function to swap the 
*	numbers as a reference variable. 
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Declare Functions
void myswap(double& varA, double& varB);


// Begin Main Function
int main()
{
	// Declare the variable
	double varX, varY; //2 variables to receive and swap
	

		//Request variables from user
		cout << "Enter first number: ";
		cin >> varX;
		cout << "Enter second number: ";
		cin >> varY;
		
		//Call the function to swap the numbers
		myswap(varX, varY);
		
		//Output the swapped variables
		cout << "First number: ";
		cout << varX;
		cout << "\nSecond number: ";
		cout << varY;
		cout << "\n";
	
	return( 0 );
}	

// Function for swapping 2 variables
void myswap(double& varA, double& varB)
//Precondition: Receive 2 numbers to be swapped
//Postcondition: Output the 2 numbers swapped
{
	//Declare temporary variable
	double tempVar;
	
	//Swap 2 variables
	tempVar = varA;
	varA = varB;
	varB = tempVar;
	
	return;
}	
