/* Author: Professor
   UserId #: c1010b29
   Creation Date: 2/24/2009 
   Modification Date: 2/16/2021  
   File name: functionPractice.cpp    
   
   Inputs: two numbers, x and y to be used in various calculations 
   Ouputs: answers to function problems 
   Formulas: see comments throughout  
    
   Purpose: Practice with predefined C++ functions  
*/
// Identify libraries and objects used in this program
// *** Remember to add new libraries for your predefined functions
#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

const double PI = 3.14;

int main()
{
 //
 // Variable declarations
 double x,y,z;
 int angle,mets;
 
 /* Get the length of 2 sides, x and y, and the measure of the
  * angle between them in degrees. Find the length of the 3rd
  * side, z, using the formula z = square root of 
  *        (b-squared + c-squared - 2bc(cos(angle in radians)))
 */
 cout << "Enter the length of side x = ";
 cin >> x;

 cout << "Enter the length of side y = ";
 cin >> y;


 cout << "Enter the angle between them in degrees = ";
 cin >> angle;

 // Calculate the length of side z
  
 z = sqrt(pow(x,2)+pow(y,2)-(2*x*y*cos(PI/180*angle)));

  // Set the output object to show decimals as 2 pt fixed, e.g. 999.99
 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(2);

 // Output the length of side z
 cout << "The length of the 3rd side is " << z << ".\n" << endl;

 // Ask the user for the appropriate input;
 // Use C++ functions and mathematical operators to write an assignment
 // statement that will produce the answer for each formula:

 // 1. log base e of (x to the y power)
 cout << "Log base e " << log(pow(x,y)) << endl;
 // 2. log base 10 of (1000.0)
 cout << "Log 10 " << log10(1000.0) << endl;
 // 3. The number of hours and minutes in 146 minutes
 int  hours, minutes;
 hours = 146/60;  // Do integer division so it will discard  remainder
 minutes = 146 % 60;  // Get "remainder" to get minutes using "mod" op
 cout << "146 mins = " << hours << " hours and " << minutes 
     << " minutes." << endl;

 // 4. The square root of (the floor of (floating-pt absolute value 
 //    of (x)))
 cout << "\nThe sqrt(floor(fabs(" << x << ")))= ";
 cout << sqrt(floor(fabs(x))) << endl;

 return 0;
}

