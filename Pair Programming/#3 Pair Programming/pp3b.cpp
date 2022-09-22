/*File: pp3b.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program takes the users inputted number   
*	and outputs a table of values for a base raised
* 	to each exponent up to the inputted number
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable
	int maxExponent;
	int sum = 1; 
	int base = 2; //the base of the exponent

		// Request number from user
		cout << "Enter n: ";
		//Applying the users inputted number
		cin >> maxExponent; 
		
	for (int exponent = 0; exponent <= maxExponent; exponent++)
	{
		//Display exponent and calculate equivalent
		cout << exponent << "\t \t" << sum << "\n";
		
		//Apply the next exponent to sum
		sum = sum * base;
	} 
	
	return( 0 );
}	


