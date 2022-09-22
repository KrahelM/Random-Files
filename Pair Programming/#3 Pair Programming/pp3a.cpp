/*File: pp3a.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program takes the users inputted hours and outputs  
*	the salary based on overtime rules and pay rates
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable
	double hours;
	double rate;
	double salary;
	
	//To display display 2 decimals 
	cout.setf(ios::fixed); 
	cout.setf(ios::showpoint);
	cout.precision(2);

	do{

		// Request hours from user
		cout << "Enter hours (0 to end): ";
		//Applying the users inputted hours
		cin >> hours; 	
		//Repeat hours to user
		cout << "Hours entered: " << hours << "\n";  
			if (hours > 0){

			// Request rate from user
			cout << "Enter rate: ";
			//Applying the users inputted rate
			cin >> rate; 	
			//Repeat rate to user
			cout << "Rate entered: " << rate << "\n";  
			
			//Calculate Salary based on hours and overtime
			if ( hours <= 40 ) { 
				salary = hours * rate;
			}
			else {
				salary = 40 * rate + (hours - 40) * rate * 1.5;
			}

			//Output the salary
			cout << "Salary: $" << salary << "\n";
			}
		
		else { break; }
		
	} while (hours > 0);
	
	return( 0 );
}	


