/* File: main8a.cpp
 * Description: make a linked list out of book data 
 *    using LinkedList class, Node class and Book class 
 */ 
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "linkedlist.h"
#include "node.h"
#include "book.h"

int main() {
   // a linked list
   LinkedList list1; // calls default ctor
   Node* nodePtr; // for a node to put in the list
   Book b;             // temp book to put in a node
   int i;
   char junk;
   ifstream in;
   //in.open( "b1.txt", ios::in | ios::binary );
   in.open( "b1.txt");
   
   if ( !in.fail() ) {
		// get 4 books from stdin(file b1),
		// instantiate nodes and put each node in the list
		// tests addFront
		for( i = 0; i < 4; i++ ) {
			in >> b; // overloaded >> in Book class 
			in.get(junk);
			nodePtr = new Node( b ); // Node class 1-arg constructor
			list1.insertNode( nodePtr );
		}
		in.close();
   

		// test stack traversal
		cout << "Traverse stack: \n";
		list1.traverseStack( );

		// test queue traversal
		cout << "Traverse queue: \n";
		list1.traverseQueue( );

		// test popNode
        nodePtr = list1.popNode();
		if ( nodePtr != NULL ) {
			cout << "Successfully popped from front\n";
            delete nodePtr; // since pop doesn't. Don't want a memory leak
            list1.traverseStack();
        }

		// test dequeueNode
        nodePtr = list1.dequeueNode();
		if ( nodePtr != NULL ) {
			cout << "Successfully dequeued from tail\n";
            delete nodePtr; // since dequeue doesn't. Don't want a memory leak
            list1.traverseStack();
        }

		// test findNode. Two books are equal if titles and ISBNs equal 
		b.setISBN( "0" );
		Node* foundNode = list1.findNode( b );
		if ( foundNode == NULL ) 
			cout << "Node with ISBN 0 not found " << endl;
		b.setISBN( "978-1-890774-44-8" );
        b.setTitle( "Java Servlets and JSP" );
		foundNode = list1.findNode( b );
		if ( foundNode != NULL ) 
			cout << "Found " << foundNode->getBook() << endl;

		// test deleteNode
		list1.deleteNode( foundNode );
		cout << "After deletion of found node:\n";
		list1.traverseStack();
   
		// test operator=
		LinkedList list2 = list1;
        cout << "List 1: \n";
        list1.traverseStack();
		cout << "List 2 after list2 = list1\n";
		list2.traverseStack();
		nodePtr = list1.popNode();
        delete nodePtr; // don't want a memory leak
        cout << "List1 after removing front from List 1\n"; 
		list1.traverseStack();
		cout << "List2 after removing front from List 1\n"; 
		list2.traverseStack();

		// test deleteList after putting 3 nodes in list 1 since it's empty now
        Book b("ISBN", "Title", "Author", "Publisher", 1, 1 );
        list1.insertNode( new Node( b ) );
        list1.insertNode( new Node( b ) );
        list1.insertNode( new Node( b ) );
		list1.deleteList();
		if ( list1.isEmpty() ) cout << "List is empty\n";
   
		// test copy ctor
		list1 = LinkedList( list2 );
		cout << "After copy ctor of list2\n";
		list1.traverseStack();
   }
   else {
	   cout << "Open failed.\n";
   }
   return( 0 );
}