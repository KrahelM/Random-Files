#include <iostream>
#include "book.h"
#include "myAlgorithms.h"
#include "myPair.h"

int main(int argc, char **argv)
{
	int i = 3, j = 2;
	// get some books
	Book b1("1", "Title", "Author", "Publisher", 2015, 1);
	Book b2("9", "C++ Programming", "Goodrich", "Wiley", 2011, 2 );
	// get a small array of books
	Book books[3];
	books[0] = Book("1", "Title", "Author", "Publisher", 2015, 1 );
	books[1] = Book("2", "ABC", "Author 2", "Publisher 2", 2015, 2 );
	books[2] = Book( "3", "Title 3", "Author 3", "Publisher 3", 2015, 3 );
	
	// test swap template function
	cout << "Before swap: " << i << " " << j << endl;
	mySwap( i, j );
	cout << "After swap: " << i << " " << j << endl;
	cout << "Before swap: " << b1 << " " << b2 << endl;
	mySwap( b1, b2 );
	cout << "After swap: " << b1 << endl << b2 << endl;
	
	// test min template function
	Book b3 = myMin( b1, b2 );
	cout << "Min book: " << b3 << endl;
	
	// test sort template function (which uses swap template function)
	mySort( books, 3 );
	cout << "Sorted books\n";
	for( int i = 0; i < 3; i++ ) {
		cout << books[i] << endl;
	}
	
	// test mySearch
	int found = mySearch( books, 3, b1);
	if ( found != -1 ) {
		cout << "Found book " << books[found] << endl;
	}
	else {
		cout << "Not found " << b1 << endl;
	}
	found = mySearch( books, 3, b2 );
	if ( found != -1 ) {
		cout << "Found book " << books[found] << endl;
	}
	else {
		cout << "Not found " << b2 << endl;
	}
	
    MyPair<int,double> p(1,1.1);
    cout << p.getKey() << " " << p.getValue() << endl;

    // a pair with ISBN key and Book value
    Book b4("9999", "Title", "Author", "Pub", 2000, 1 );
    MyPair<string,Book> p2("9999", b4 );
    cout << "Pair key: " << p2.getKey() << "\t Pair value: " << p2.getValue() << endl;
	
	return 0;
}
