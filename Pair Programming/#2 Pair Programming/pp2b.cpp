/*File: pp2b.cpp
	Author: Matthew Krahel and Blake Hodges
	This program evaluates multiple expressions utilizing multiple variables
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variables and the initialized amounts
	int i = 3;
	int j = 10;
	double x = 9.9;
	double y = -0.6;
	
	// Running output for requested formulas
	cout << "i/j is " << (i / j) << "\n"; //First formula requested
	cout << "i%j is " << (i % j) << "\n"; //Second formula requested	
	cout << "j/i is " << (j / i) << "\n"; //Third formula requested	
	cout << "j%i is " << (j % i) << "\n"; //Fourth formula requested	
	cout.setf(ios::fixed); //To display display decimals for the following equations
	cout.setf(ios::showpoint);
	cout.precision(2);   //To display two decimal places
	cout << "x*i/j is " << (x * i / j) << "\n"; //Fifth formula requested	
	cout.precision(2);   //To display two decimal places
	cout << "x*(i/j) is " << (x * (i / j)) << "\n"; //Sixth formula requested	
	cout.precision(1);   //To display one decimal place	
	cout << "x/y+i is " << (x / y + i) << "\n"; //Seventh formula requested	
	cout.precision(5);   //To display five decimal places
	cout << "j+y/x is " << (j + y / x) << "\n"; //Eighth formula requested		
	cout.precision(2);   //To display two decimal places
	cout << "static_cast<double>(i)/j+y is " << (static_cast<double>(i) / j + y) << "\n"; //Ninth formula requested	
	
	
	return( 0 );
}	


