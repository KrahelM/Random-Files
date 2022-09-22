/*File: pp2a.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program uses a variable, x, that has been declared and 
*	initialized and uses output statements that print the output requested.
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable and the initialized amount
	double x = 42.1298;
	
	// Running output for requested paragraph with specific output format
	cout << "The answer to the question of \n";  
	cout << "Life, the Universe, and Everything is ";
	
	//Set the variable to display certain number of decimals
	cout.setf(ios::fixed);
	cout.precision(0);   //To display no digits after the decimal
	cout << x << ", not ";
	cout.setf(ios::showpoint); //To display decimal
	cout.precision(1);   //To display one decimal place
	cout << x;
	cout << "\n \t and not $";
	cout.precision(2);   //To display two decimal places
	cout << x << "\n";
	
	return( 0 );
}	


