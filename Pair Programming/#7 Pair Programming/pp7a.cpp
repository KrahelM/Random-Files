/* File: pp7a.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program declares and initializes an array of MAX_STUDENTS
 * Uses a for loop to print the grades and sum them.
 * Calculate and print the average.
 * Challenge: initialize the grades in a sorted order and
 * calculate the median grade.
 */

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main() {

    //Declare Variables
    const int MAX_STUDENTS = 6;
    double grades[MAX_STUDENTS] = {56.8, 67.5, 87.8, 88.8, 96.1, 99.9};
    double totalGrade = 0;
    double gradeAverage = 0;
    int count = 0;
	int medianArrayElem; //element number of the median
	double medianNum; //Median number

    //For Loop for printing the array elements
    for (count = 0; count < MAX_STUDENTS; count++)
   {
         //Display array element
         cout << "The entered grades are: " << grades[count] << endl;
         totalGrade += grades[count];
   }

   //Calculate average grade
   gradeAverage = totalGrade/count;

   //Display average grade
   cout << "The Average for the class is: ";
   cout << gradeAverage << endl;

	//Display Median
   cout << "The Median for the class is: ";
   if(MAX_STUDENTS % 2 == 0){ //if true then MaxStudents is even
	   medianArrayElem = MAX_STUDENTS / 2;
	   medianNum = (grades[medianArrayElem - 1] + grades[medianArrayElem]) / 2;
	}   
	   else{
		   medianArrayElem = (MAX_STUDENTS / 2); //should take only when MaxStudents is odd
		   medianNum = grades[medianArrayElem];
	   }	
   cout << medianNum << endl;	

    return 0;
 }
