/*File: pp2a.cpp
	Author: Matthew Krahel and Blake Hodges
	This program uses a variable, x, that has been declared and initialized and uses output statements that print the output requested.
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable and the initialized amount
	double x = 42.1298;
	
	// Running output for requested paragraph with specific output formatting
	cout << "The answer to the question of \n";  //First Line of paragraph
	cout << "Life, the Universe, and Everything is ";
	cout.precision(2);   //To display tens and singles place
	cout << x << ", not ";
	cout.precision(3);   //To display one decimal place
	cout << x;
	cout << "\n \t and not $";
	cout.precision(4);   //To display two decimal places
	cout << x << "\n";
	
	return( 0 );
}	


