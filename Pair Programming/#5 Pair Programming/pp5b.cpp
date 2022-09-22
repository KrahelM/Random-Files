/*File: pp5b.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program requests 1 number from the 
*	user and calls a function to determine the 
*	number's attributes. 
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
using namespace std;

// Declare Functions
void figureit(double intA, bool& div2, char& sign, int& rounded);


// Begin Main Function
int main()
{
	// Declare the variables
	double intX; //Value to get from user
	bool divX; //Output for even or not
	char signX; //Output for value's sign
	int roundedX; //Output for rounded value
	
	do{
		//Request variables from user
		cout << "Enter x (0 to end): ";
		cin >> intX;
		
		//Call the function to get attributes
		figureit(intX, divX, signX, roundedX);
		
		//Output the attributes
		cout << intX;
		cout << ": ";
		if(divX){
			cout << "even, ";
		}
		else{
			cout << "not even, ";
		}	
		cout << signX;
		cout << ", ";
		cout << roundedX;
		cout << "\n";
	} while (intX != 0);	
	
	return( 0 );
}	

// Function for swapping 2 variables
void figureit(double intA, bool& div2, char& sign, int& rounded)
//Precondition: 1 inputted number and 3 variables to be referenced
//Postcondition: outputted references for:
//				Even as a Bool
//				Integer sign ( + or - )
//				Rounded integer
{
	//Declare Variables
	double tempDecimal; //temporary value for calculating decimal amount
	int tempRemainder; //temporary value for calculating remainder

	//Determine if integer is divisible by 2
	if(intA == static_cast<int>(intA)){
		tempRemainder = (static_cast<int>(intA) % 2);
		if(tempRemainder == 0){
			div2 = (true);
		}
		else{
			div2 = (false);
		}
	}	
	else{
		div2 = (false);
	}		
		
	//Determine the sign of the integer
	if(intA >= 0){
		sign = '+';
	}
	else{
		sign = '-';
	}

	//Round the integer
	tempDecimal = intA - static_cast<int>(intA);
	if(tempDecimal >= .5){
		rounded = static_cast<int>(intA) + 1;
	}
	else if(tempDecimal <= -.5){
		rounded = static_cast<int>(intA) - 1;
	}		
	else{
		rounded = static_cast<int>(intA);	
	}
	return;
}	
