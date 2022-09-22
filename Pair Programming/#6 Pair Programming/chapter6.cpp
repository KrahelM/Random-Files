/* File: chapter6.cpp
 * Author: Cindy Arnold
 * This program reads one number from an input file and writes it to an output file
 */
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	double num;
	ifstream input; // declare file variables
	ofstream output;

	// open input file, read from it, close it
	input.open( "pp6ainput.dat" );
	input >> num; // syntax just like cin
	input.close( );

	// open output file, write to it, close it
	output.open( "pp6aoutput.dat" );
   // syntax just like cout
	output << "The number is: " << num << endl;	
	output.close( );

	return 0;
}

