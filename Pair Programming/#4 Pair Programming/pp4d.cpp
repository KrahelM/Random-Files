/*File: pp4d.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program creates a function for 
*	cubing a number that is to be called
*	in the main function. 
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Declare Functions
double cube (double base);


// Begin Main Function
int main()
{
	// Declare the variable
	double inputtedBase; //Base inputted by user
	double outputtedProduct; //Product to be outputted
	
	do {
		//Request a base from user
		cout << "Enter a number (0 to end): ";
		cin >> inputtedBase;
		
		//Output the cube
		if(inputtedBase > 0){
		cout << "The cube of ";
		cout << inputtedBase;
		cout << " is ";
		
		//To display display 3 decimals 
		cout.setf(ios::fixed); 
		cout.setf(ios::showpoint);
		cout.precision(3);
		
		//Call the function
		outputtedProduct = cube (inputtedBase);
		
		cout << outputtedProduct;
		cout << "\n";
		}
	} while (inputtedBase > 0);
	
	return( 0 );
}	

// Function for cubing a base
double cube (double base)
{
	return (base * base * base);
}	
