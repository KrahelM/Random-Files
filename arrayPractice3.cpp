// This program writes the contents of an array to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   const int ARRAY_SIZE = 10;  // Maximum array size
   int numbers[ARRAY_SIZE];    // Array with 10 elements
   int count;                  // Loop counter variable
   ofstream outputFile;        // Output file stream object
   
   // Store values in the array.
   for (count = 0; count < ARRAY_SIZE; count++){
	  // Put the multiples of 3 into the array
      numbers[count] = count * 3;
	  // Let's display them on the screen too
	  cout << numbers[count] << endl;
   }
      
   // Open a file for output.
   outputFile.open("multiplesOf3.txt");
   
   // Write the array contents to the file.
   for (count = 0; count < ARRAY_SIZE; count++)
      outputFile << numbers[count] << endl;
   
   // Close the file.
   outputFile.close();
   
   // That's it!
   cout << "The numbers were saved to the file.\n ";
   return 0;
}