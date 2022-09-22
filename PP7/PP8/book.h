#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book{
private:
	string ISBN;
	string title;
	string author;
	string publisher;
	int year;
	int edition;
public:
	//constructors
	Book(); //Default constructor
	Book( string, string, string, string, int, int ); //constructs more info
	//copy constructor
	Book( const Book& );
	//destructor
	virtual ~Book(){}
	//set/get for private data
	void setISBN( string );
	string getISBN() const { return ISBN; }
	void setTitle( string );
	string getTitle() const{ return title; }
	void setAuthor( string );
	string getAuthor() const{ return author; }
	void setPublisher( string );
	string getPublisher() const { return publisher; }
	void setYear( int );
	int getYear() const { return year; }
	void setEdition( int );
	int getEdition() const { return edition; }
	void setBook( const Book& );
	// overloaded assignment operator
	Book& operator=( const Book& );
	// overloaded << and >>
	friend ostream& operator<<( ostream&, const Book& );
	friend istream& operator>>( istream&, Book& );
	// overloaded ==
	friend bool operator==( const Book&, const Book& );
	// make Node class a friend
	friend class Node;
};

#endif