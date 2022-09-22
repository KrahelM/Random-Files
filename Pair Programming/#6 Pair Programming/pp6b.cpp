/* File: pp6b.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program reads numbers from an input file and outputs
 * in a specific and neat format.
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	ifstream input; // declare file variables
	char fileName[256] = "pp6b.dat";// input filename
	string accountNum;
	double balance;



	// open input file
	input.open(fileName);
		
		//check for existence of input file
		if(input.fail()) {
			cout << "FileName " << fileName << " is not found.\n";
			exit(1);
		}
	
		//Output header
		cout << setw(14) << left << "Account Number";
		cout << "    ";
		cout << setw(8) << right << "Balance\n";
		cout << "-------------------------\n";
		
	
		//Output account numbers and balances
		
		while(!input.eof())  
		{
			input >> accountNum;
			cout << setw(14) << left << accountNum; //Output Account Number
			cout << " $ ";
			
			
			//To display display 2 decimals 
			cout.setf(ios::fixed); 
			cout.setf(ios::showpoint);
			cout.precision(2);
			
			input >> balance;
			cout << setw(8) << right << balance << "\n"; //Output Balance
		}

	input.close( );


	return 0;
}

