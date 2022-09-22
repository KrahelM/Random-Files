/* File: pp6a.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program reads one number from an input file and writes it to an output file
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//declare functions
void inputFunction(ifstream& input, double& num);
//precondition: an input file and reference variables
//postcondition: reference variable is updated with next
//number from the input file.


void outputFunction(ofstream& output, double num);
//precondition: an output file and a variable to be put in
//the output file.
//postcondition: The output file receives the number as a part
//of the sentence: The number is 



int main()
{
	double num;
	ifstream input; // declare file variables
	ofstream output;
	char fileName[256];// input filename
	char outFile[256];// output filename


	//ask user for filename of input file
	cout << "Enter input Filename (Please no spaces): \n";
	cin >> fileName;
	// open input file, read from it, close it
	input.open(fileName);
		//check for existence of input file
		if(input.fail()) {
			cout << "FileName " << fileName << " is not found.\n";
			exit(1);
		}
		else{
			cout << "Enter output file name: ";
			cin >> outFile;
		}

		// Check if input file is empty
		char c;
		input.get(c);
		if(input.eof()){
			cout << "File " << fileName << " is empty\n";
		}
		else {
			input.putback(c);
		}
		// open output file, write to it, close it
	output.open(outFile);

	while(!input.eof()){
		inputFunction(input, num);
		outputFunction(output, num);
	}
	// close the input file

	input.close( );
	output.close( );

	return 0;
}

//functions
	
	void inputFunction(ifstream& input, double& num)
	//precondition: an input file and reference variables
	//postcondition: reference variable is updated with next
	//number from the input file.
	{
		input >> num;
	}


	void outputFunction(ofstream& output, double num)
	//precondition: an output file and a variable to be put in
	//the output file.
	//postcondition: The output file receives the number as a part
	//of the sentence: The number is 
	
	{
		output.setf(ios::fixed);
		output.setf(ios::showpoint);
		output.precision(2);
		output << "The number is $" << num << endl;
	}
