/* File: pp7b.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program uses one for loop to assign powers of 2 to 
 * the elements in the array and uses a for loop to print 
 * the values in the array.
 */
 

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


int main()
{
	//Declare Variables
	const int NUM_BASES = 11; 	// Max number of elements/Bases
	int Powers2[NUM_BASES];    	// Array of powers of 2	
	
	// Input the powers for the array
   for (int count = 0; count < NUM_BASES; count++)
   {

      Powers2[count] = pow(2, count);
   }


   // Output the Array (powers of 2)
   for (int count = 0; count < NUM_BASES; count++)
   {

      cout << "Powers[" << count << "] = " << Powers2[count] << endl;
   }  
	
	

	return 0;
}
