/* File: pp7.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program initializes an array, calls the selection
 * sort function to sort the elements in ascending order,
 * then outputs the array.
 */
 

#include <iostream>


using namespace std;


//declare functions
void selectionSort(int arrayToSort[], int count);
//precondition: an array of integers to be sorted in 
//ascending order and the number of elements in the array
//postcondition: array is sorted by ascending order.


int main()
{
	//Declare Variables
	const int MAX_AMOUNTS = 8;				//Max number of elements in mArray
	int mArray[MAX_AMOUNTS] = { 12, 1, 0, 
								-5, 6, 8, 
								18, 10 };	// Array of numbers initialized
									


	// Call selectionSort function
	selectionSort(mArray, MAX_AMOUNTS);

	//Print array numbers (array values should be ascending order)
	for(int i = 0; i < MAX_AMOUNTS; i++)
	{
		cout << mArray[i] << " ";
	}	

	//add line for output visual clarity
	cout << endl;
	
	
	return 0;
}

void selectionSort(int arrayToSort[], int count)
//precondition: an array of integers to be sorted in 
//ascending order and the number of elements in the array
//postcondition: array is sorted by ascending order.
{
	//Declare variables
	int currentMin; //Current minimum element address
	int tempElem; //Temporary placeholder for number in the minimum element address
	
	//Sort the array in ascending order
	for(int i = 0; i < count; i++)
	{	
		//Initialize what element to start at
		currentMin = i;
		
		//Determine the minimum number in the remaining elements
		for(int j = i+1; j < count; j++)
		{
			if(arrayToSort[j] < arrayToSort[currentMin])
			{	
				currentMin = j;
			}
		}
		
		//Take current minimum number and SWAP it with the current lowest element address
		tempElem = arrayToSort[i]; //place number in current lowest element address in temp variables
		arrayToSort[i] = arrayToSort[currentMin]; //place minimum number into current lowest element address
		arrayToSort[currentMin] = tempElem; //place number from lowest element at start of loop into the location of the current minimum

	}
}	