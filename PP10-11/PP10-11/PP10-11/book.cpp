/* File: book.cpp 
 * Author: Cindy
 * Description: implements a Book class
 */
#include <string>
#include <iostream>
#include "book.h"

using namespace std;

/* default constructor
 */ 
Book::Book() {
   year = edition = 0;
   isbn = author = title = publisher = "";
}

/* 6-arg constructor
 * Parameters:
 *    i ISBN 
 *    t title
 *    a author
 *    p publisher
 *    y year published
 *    e edition 
 */
Book::Book( string i, string t, string a, string p, int y, int e ) {
   setIsbn( i );
   setTitle( t );
   setAuthor( a );
   setPublisher( p );
   setYear( y );
   setEdition( e );
}

/* copy constructor
 */
Book::Book( const Book& b ) {
   setIsbn( b.isbn );
   setTitle( b.title );
   setAuthor( b.author );
   setPublisher( b.publisher );
   setYear( b.year );
   setEdition( b.edition );
}


/* setIsbn sets ISBN number
 * Parameter ISBN number
 * Returns: nothing
 */
void Book::setIsbn( string i ) {
   if ( i != "" ) isbn = i;
}

/* setTitle sets book title
 * Parameter  the title
 * Returns: nothing
 */
void Book::setTitle( string t ) {
   if ( t != "" ) title = t;
}

/* setAuthor sets book's author
 * Parameters author name
 * Returns: nothing
 */
void Book::setAuthor( string a ) {
   if ( a != "" ) author = a;
}

/* setPublisher sets book publisher
 * Parameters publisher name
 * Returns: nothing
 */
void Book::setPublisher( string p ) {
   if ( p != "" ) publisher = p;
}

/* setYear sets year book was published
 * Parameters year
 */
void Book::setYear( int y ) {
   if ( y > 0 ) year = y;
}

/* setEdition sets the book's edition
 * Parameters edition
 * Returns: nothing
 */
void Book::setEdition( int e ) {
   if ( e > 0 ) edition = e;
}

/* setBook sets all of this Book object's data from
 *    date in parameter Book object
 * Parameter book object to copy to this book object
 * Returns: nothing
 */ 
void Book::setBook( const Book& b) {
   isbn = b.isbn;
   title = b.title;
   author = b.author;
   publisher = b.publisher;
   year = b.year;
   edition = b.edition; 
}

/* operator<< overloaded for Book object
 * Parameters:
 *    outStream the output stream
 *    b the book
 * Returns the output stream
 */
ostream& operator<<( ostream& outStream, const Book& b ) {
   outStream << b.isbn << " " << b.title <<  "\n\t" << 
      b.author << "\n\t" << b.publisher << " " << b.year <<
      " " << b.edition;
   return outStream;
}

/* operator>> overloaded for Book object
 * Parameters:
 *    inStream the input stream
 *    b the book
 * Returns the input stream
 */
istream& operator>>( istream& inStream, Book& b )  {
   getline( inStream, b.isbn );
   getline( inStream, b.title );
   getline( inStream, b.author );
   getline( inStream, b.publisher );
   inStream >> b.year >> b.edition;
   return inStream;
} 

/* overloaded == operator returns true if books' ISBN's are equal
 * Parameters: two books to compare 
 * Returns true if books' titles, and ISBNs are equal
 */
bool operator==( const Book& b1, const Book& b2 ) {
   return ( b1.title == b2.title && b1.isbn == b2.isbn );
}

/* overloaded assignment operator
 * Parameter book on right-hand side of =
 * Returns: the book on the left-hand side of the =
 */
Book& Book::operator=( const Book& b ) {
   if ( this != &b ) { // don't copy the same object to itself
      isbn = b.isbn;
      title = b.title;
      author = b.author;
      publisher = b.publisher;
      year = b.year;
      edition = b.edition;
   }
   return *this;
}


/* operator< returns true if one book b1 < b2  (if one title < another)
 * Parameters two books
 * Returns true if b1.title < b2.title
 */
bool operator<(const Book& b1, const Book& b2 ) {
	if ( b1.title == b2.title ) return b1.isbn < b2.isbn;
    return b1.title < b2.title;
}