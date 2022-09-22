/*File: gradeList.cpp
* Author: 
* Version 1: Use a for-loop to display a class grade chart
*            that has the following format:
Grade   Score
--------------
A       90-100
B       80-89
C       70-79
D       60-69
E       50-59
F       49 & under

* Version 2: 
* 
*/
// Identify the libraries and namespaces used in this program.
#include <iostream>
using namespace std;

// Begin main function - single entry point to the program
int main()
{
	// Define the fixed values
	const char BASE_GRADE = 'A';
	const int BASE_SCORE = 100;
	
	char grade = BASE_GRADE;
	int range_start = BASE_SCORE;
	int range_end = range_start - 10;
	 
	// Display chart heading
	cout << "\nGrade\tScore\n";
	cout << "--------------\n";
	
	// Loop to display the grades
	for (int range_start; range_start >= 40; range_start - 10)
		if(range_start >= 90) {
			grade = 'A'
			cout << grade << "\t90-100"
		}
		else if (range_start >= 80) {
			grade = 'B'
			cout << grade << "\t80-89"			
		}	
		else if (range_start >= 70) {
			grade = 'C'
			cout << grade << "\t70-79"			
		}	
		else if (range_start >= 60) {
			grade = 'D'
			cout << grade << "\t60-69"			
		}	
		else if (range_start >= 50) {
			grade = 'E'
			cout << grade << "\t50-59"			
		}	
		else if (range_start >= 40) {
			grade = 'F'
			cout << grade << "\t49 & under"			
		}	


    return(0); // Return SUCCESS to operating system
}  // end of main program