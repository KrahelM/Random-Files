/* File: main.cpp
 * Description: make a linked list out of book data 
 *    using LinkedList class, Node class and Book class 
 * Get data from stdin - redirect input
 */ 
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "linkedList.h"
#include "node.h"
#include "book.h"

int main() {
	
   // a linked list
   LinkedList<Book> list; // calls default ctor
   Node<Book> node;
   Book b;
   int i;
   string junk;
   ifstream in;
   in.open( "b1.txt", ios::in );
   
   // test empty
   if ( list.empty()) cout << "List starts empty\n";
   
   //if ( in != NULL ) {
    if ( !in.fail() ) {
		// get 4 books from stdin(file b1),
		// instantiate nodes and put each node in the list
		// tests insertFront
		for( i = 0; i < 4; i++ ) {
			in >> b; // overloaded >> in Book class 
			//cout << b << endl;
			getline(in, junk);
			node = Node<Book>( b ); // Node class 1-arg constructor
			list.insertFront( node );
		}
		in.close();

		// test insertBack (and erase back after verify insertBack works)
		Book b("123-456", "title", "author", "publisher", 2000, 1 );
		list.insertBack( b );
		//list.eraseBack();
		
		// test traversal
		cout << "----------------------------------\nTraverse list:\n----------------------------------\n";
		list.traverseAndPrint( );
		
		// test copy ctor and eraseFront
		LinkedList<Book> list2( list );
		list2.eraseFront();
        cout << "----------------------------------\nTraverse list 2:\n----------------------------------\n";
		list2.traverseAndPrint();
		
		// test operator= and eraseBack
		list2 = list;
		list2.eraseBack();
        cout << "----------------------------------\nTraverse list 2:\n----------------------------------\n";
		list2.traverseAndPrint();
        
        // test operator++
        cout << "----------------------------------\nTraverse list:\n----------------------------------\n";
        Iterator<Book> it = list.begin();
        for( ; it != list.end(); ++it ) {
            cout << (*it).getItem() << endl;
        }
				
   }
   else {
	   cout << "Open failed.\n";
   }
   return( 0 );
    
}
