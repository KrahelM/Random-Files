/*File: pp3c.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program takes the users inputted number   
*	and outputs the factorial total
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable
	int value;
	double sum = 1; 

	// Request number from user
	cout << "Enter n: ";
	// Applying the users inputted number
	cin >> value; 

	//Set the precision for larger values
	if (value >= 20){
		cout.setf(ios::fixed);
		cout.precision(0);
	}	
		
	while (value > 0)
	{
		// Multiply current sum by current value
		sum = sum * value;
		
		// Reduce the value by one
		value--;
	} 

	// Output the results
	cout << value << "! is " << sum << "\n";
	
	return( 0 );
}	


