/*File: pp4b.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program creates a function for 
*	squaring a number that is to be called
*	in the main function. 
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Declare Functions
double squareAndPrint (double base);


// Begin Main Function
int main()
{
	// Declare the variable
	double inputtedBase; //Base inputted by user
	double outputtedProduct; //Product to be outputted
	
	//Request a base from user and output the square
	cout << "Enter a number: ";
	cin >> inputtedBase;
	cout << "The square of ";
	

	
	cout << inputtedBase;
	cout << " is ";
	

	
	outputtedProduct = squareAndPrint (inputtedBase);
	cout << outputtedProduct;
	cout << "\n";
	
	return( 0 );
}	

// Function for squaring a base
double squareAndPrint (double base)
{
	return (base * base);
}	
