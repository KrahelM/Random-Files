/* File: pp7c.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program takes numbers from user, puts them in an
 * array, calls a function to output the elements in the
 * array formatted as dollars and cents.
 */


#include <iostream>


using namespace std;


//declare functions
//precondition:function is passed the amounts array.
//postcondition:prints array elements in array.
void printMoney(double m[]);

int count = 0;

int main()
{
	const int MAX_AMOUNTS = 10;
	double amounts[MAX_AMOUNTS];
	double amount= 0;

   // Request numbers from user for the array
	cout << "Enter number (-1 to end): ";
	//Read in amounts
	cin >> amount;
	//Check array parameters
	while (count < MAX_AMOUNTS && amount != -1){
		//Check valid entry or user quit
		if (amount >= 0){
			amounts[count] = amount;
			count ++;
		}
		//check array size
		if (count < MAX_AMOUNTS){
			cout << "Enter number (-1 to end): ";
			cin >> amount;
		}



	}
	//call function
	printMoney(amounts);

	return 0;
}

void printMoney(double m[])
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	for(int i = 0; i < count; i++)
	{
      cout << "$" << m[i] << endl;
	}
}
