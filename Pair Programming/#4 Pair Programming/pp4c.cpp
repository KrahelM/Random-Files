/*File: pp4c.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program calculates the cost of an  
*	item when multiple of the same item are
*	purchased. 
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Declare Functions
double calculateTotal (double itemCost, double numberOfItems);

//Declare Global Variables
const double salesTax = .0925; //Sales tax

// Begin Main Function
int main()
{
	// Declare the variable
	double itemCost; //Cost of the item inputted by user
	double numberOfItems; //Number of the items inputted by user
	double totalCost; //Total cost of all items
	
	//Request the item cost and number of items from user
	cout << "Enter cost of one item and number of items: ";
	cin >> itemCost >> numberOfItems;
	
	
	//To display display 2 decimals 
	cout.setf(ios::fixed); 
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	totalCost = calculateTotal (itemCost, numberOfItems);
	cout << "$";
	cout << totalCost;
	cout << "\n";
	
	return( 0 );
}	

// Function for calculating the total
double calculateTotal (double itemCost, double numberOfItems)
{
	return (itemCost * numberOfItems * (1 + salesTax));
}	
