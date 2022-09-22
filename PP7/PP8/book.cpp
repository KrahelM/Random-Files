#include "book.h"
#include <string>

Book::Book(){
     ISBN = "";
	 title = "";
	 author = "";
	 publisher = "";
	 year = 1;
	 edition = 1;
    
}

Book::Book( string i, string t, string a, string p, int y, int e){
    setISBN( i );
    setTitle( t );
    setAuthor( a );
    setPublisher( p );
    setYear( y );
    setEdition( e );
}

Book::Book( const Book& newBook){
    setBook( newBook ); 
}

void Book::setISBN( string newISBN){
    ISBN = newISBN;
}

void Book::setTitle( string newTitle ){
    title = newTitle;
}

void Book::setAuthor( string newAuthor ){
    author = newAuthor;
}

void Book::setPublisher( string newPublisher ){
    publisher = newPublisher;
}

void Book::setYear( int newYear ){
    if( newYear > year ){
    year = newYear;
    }
}

void Book::setEdition( int newEdition ){
    if( newEdition > edition ){
    edition = newEdition;
    }
}

void Book::setBook( const Book& newBook ){
    setISBN( newBook.ISBN );
    setTitle( newBook.title );
    setAuthor( newBook.author );
    setPublisher( newBook.publisher );
    setYear( newBook.year );
    setEdition( newBook.edition );
}

Book& Book::operator=( const Book& b1 ){
    ISBN = b1.ISBN;
	 title = b1.title;
	 author = b1.author;
	 publisher = b1.publisher;
	 year = b1.year;
	 edition = b1.edition;
    return( *this );
}

ostream& operator<<( ostream& outstream, const Book& b ){
    outstream << b.ISBN << " " << b.title << endl << b.author << endl << b.publisher << " " << b.year << " " << b.edition << endl;
    return outstream;
}

istream& operator>>( istream& instream, Book& b ){
    string tempString;
    
    getline(instream, b.ISBN);
    getline(instream, b.title);
    getline(instream, b.author);
    getline(instream, b.publisher);
    instream >> b.year >> b.edition;
    
    return instream;
}

bool operator==( const Book& b1, const Book& b2 ){
    if(  b1.ISBN == b2.ISBN  && b1.title == b2.title && b1.author == b2.author && b1.publisher == b2.publisher && b1.year == b2.year && b1.edition == b2.edition ){
        return true;
    } 
    return false;
}