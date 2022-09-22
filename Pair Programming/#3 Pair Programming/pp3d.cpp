/*File: pp3d.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program outputs a menu of flooring   
*	gets a choice from the user and outputs
*	the users choice and message
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable
	char floorChoice;

	// Produce the menu for the user
	cout << "H \t hardwood \n" << "L \t laminate \n" << "E \t engineered hardwood \n" << "Q \t quit \n";
	// Request the user's choice
	cout << "choice: "
	cin >> floorChoice

	// Compare user's choice to the correct output response
	switch ( floorChoice ) { 
		case 'H': case 'h':
		cout << "Hardwood, excellent choice!\n";
		break;
		case 'L': case 'l':
		cout << "Laminate, always a great value!\n";
		break;
		case 'E': case 'e':
		cout << "Engineered Hardwood, definitely easy to clean!\n";
		break;		
		default:
		cout << "Choice " << floorChoice << ".\n";
	}
	
	return( 0 );
}	


