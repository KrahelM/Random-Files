/*File: pp2d.cpp
	Author: Matthew Krahel and Blake Hodges
	This program takes the users inputted grade as a number and outputs their letter grade
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable
	double scoreGrade;
	char letterGrade;

	
	// Request score input from user
	cout << "Please type your grade and hit enter:";
	cin >> scoreGrade; //Applying the users inputted score grade to the variable for their scoreGrade
	
	cout << "Enter grade:" << scoreGrade << "\n";  //Repeat score grade to User

	// Compare user scoreGrade to apply it to the grading scale and apply letter character to the letterGrade variable
	if ( scoreGrade >= 93 ) { 
		letterGrade = 'A';
	}
	else if ( scoreGrade >= 83 ) { 
		letterGrade = 'B';
	}
	else if ( scoreGrade >= 73 ) { 
		letterGrade = 'C';
	}
	else if ( scoreGrade >= 63 ) { 
		letterGrade = 'D';
	}
	else {
		letterGrade = 'F';
	}
	
	// Output User's letter grade
	cout << letterGrade << "\n\n";  
	
	
	return( 0 );
}	


