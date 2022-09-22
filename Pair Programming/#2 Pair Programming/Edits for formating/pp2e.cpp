/*File: pp2e.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program takes the users inputted marriage status and outputs a 
*	message based on that status
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable
	char marriageStatus;

	
	// Request marriage status from user
	cout << "Please type your marriage status (M for Married or S for Single) and hit enter:";
	//Applying the users inputted Marriage Status to the variable
	cin >> marriageStatus; 
	
	//Repeat marriage status to User
	cout << "Enter status (M or S): " << marriageStatus << "\n";  

	// Compare user marriage status to the correct output response
	switch ( marriageStatus ) { 
		case 'M': case 'm':
		cout << "We hope for many years of happiness for you and your spouse!\n";
		break;
		case 'S': case 's':
		cout << "We hope for all your dreams to come true!\n";
		break;
		default:
		cout << "Invalid marital status " << marriageStatus << ".\n";
	}
	
	return( 0 );
}	


