/* File: pp6b.cpp 
   Description: reads account numbers and balances and prints
     them in a nice table. 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
   string accountNumber;
   double balance;
   ifstream input;
   char filename[256];

   // open input file
   cout << "Enter file name: ";
   cin.getline( filename, 256 );
   input.open( filename );

   // 2 digits to  right of decimal
   cout.precision( 2 );
   cout.setf( ios::showpoint );
   cout.setf( ios::fixed );
   // print table header
   cout << "Account Number          Balance\n";
   cout << "-------------------------------\n";

//   input >> accountNumber >> balance;
//   while( !input.eof() ) {
   while( input >> accountNumber >> balance ) {
     cout << setw(20) << left << accountNumber;
     cout << "$" << setw(10) << right << balance << endl;
//     input >> accountNumber >> balance;
   }
   input.close(); // always close files!
   return 0;
}