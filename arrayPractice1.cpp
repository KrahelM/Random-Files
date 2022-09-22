// This program asks for the number of hours worked
// by six employees. It stores the values in an array.
// Version 2: calculates the average
// Version 3: asks user for number of employees
#include <iostream>
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 30; // Max number of employees
   int hours[NUM_EMPLOYEES];    // Each employee's hours
   int count;                   // Loop counter
   double totalHours = 0;		// Sum of hours worked
   int actualEmployees = 0;		// Actual number of employees
   
   // Request the current number of employees
   cout << "Enter the current number of employees? ";
   cin >> actualEmployees;

   // Input the hours worked.
   for (count = 0; count < actualEmployees; count++)
   {
      cout << "Enter the hours worked by employee "
           << (count + 1) << ": ";
      cin >> hours[count];
	  totalHours = totalHours + hours[count];
   }

   // Display the contents of the array.
   cout << "The hours you entered are:";
   for (count = 0; count < actualEmployees; count++)
      cout << " " << hours[count];
   cout << endl;
   
   // Calculate the average and display
   cout << "The average hours is " << totalHours/actualEmployees << endl;
   
   return 0;
}