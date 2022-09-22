/* File: pp7b.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program takes 2 words from the user and outputs them in
 * alphabetical order
 

#include <iostream>


using namespace std;


//declare functions
void printMonies(double mArray[], int n);
//precondition: an array of doubles to be formatted as dollars
//and cents, a count of the number of elements in the array.
//postcondition: output of the numbers in the array that are
//formatted as dollars and cents


int main()
{
	//Declare Variables
	const int MAX_AMOUNTS = 10;		//Max number of elements in amounts array
	double amounts[MAX_AMOUNTS];    // Array of numbers from user
	int numElements;				// Elements in amounts array
	double userCancel = 1;				// Used for if user doesn't need more elements
	
	// Request numbers from user for the array
   for (int i = 0; i < MAX_AMOUNTS && userCancel >= 0 ; i++)
   {
		cout << "Enter number (-1 to end): ";
		cin >> amounts[i];
		numElements = i;
		userCancel = amounts[i];
      
   }

	//Check for user cancelled 
	if(userCancel < 0){
		numElements = numElements - 1;
	}	


	// Call printMonies function
	printMonies(amounts, numElements);

	
	

	return 0;
}

void printMonies(double mArray[], int n) 
//precondition: an array of doubles to be formatted as dollars
//and cents, a count of the number of elements in the array.
//postcondition: output of the numbers in the array that are
//formatted as dollars and cents
{
	for(int i = 0; i <= n; i++)
	{	
		//To display display 2 decimals 
		cout.setf(ios::fixed); 
		cout.setf(ios::showpoint);
		cout.precision(2);
		
		cout << "$" << mArray[i] << endl;
	}
}	