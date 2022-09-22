/* File: main8b.cpp
 * Author: Cindy
 * Descrption: creates a binary file of book data for 4 books
 */
#include <fstream>
#include "book.h"
int main() {
   Book books[4];
   ofstream binOut;
   int i;
   char junk;
   ifstream in;
   in.open( "b1.txt", ios::in );
   // open book.bin for writing binary
   binOut.open( "books.bin", ios::out | ios::binary );
    
   // get  books from stdin and write them to a binary file called books.bin
   for( i = 0; i < 4; i++ ) {
      in >> books[i]; // overloaded >> in Book class 
      in.get(junk);
      books[i].write( binOut );
   }
   in.close();
   binOut.close();
   
   // test binary write by reading binary file and printing contents to screen
   ifstream binIn;
   binIn.open( "books.bin", ios::in | ios::binary );
    for( i = 0; i < 4; i++ ) {
        books[i].read( binIn );
        cout << books[i] << endl;
   }
   return 0;
}