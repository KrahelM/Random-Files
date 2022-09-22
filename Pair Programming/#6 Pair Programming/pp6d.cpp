/* File: pp6d.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program requests an input from the user and
 * outputs information on that input.
 */

//Declare Libraries and namespaces used 
#include <iostream>
#include <cctype>

 using namespace std;

 int main()
 {
 	//Declare Variables
 	char var1;

 	//Request Character from user
 	cout << "Enter One Character: ";
 	cin.get(var1);

 	//Determine aspects of the character
 	if(isupper(var1)){
 		cout << "is uppercase" << endl;
 	}

 	if(islower(var1)){
 		cout << "is lowercase" << endl;
 	}

 	if(isalpha(var1)){
 		cout << "is alphabetic" << endl;
 	}

 	if(isdigit(var1)){
 		cout << "is a digit" << endl;
 	}

 	if(isspace(var1)){
 		cout << "is white space" << endl;
 	}
	

 	return 0;
 }
