//Node.cpp

#include "node.h"

Node::Node( ) { // Default constructor
    nextPtr = NULL;
    prevPtr = NULL;
}

Node::Node( const Book& newBook) { // add in book object
	nextPtr = NULL;
	prevPtr = NULL;
	book = newBook;
}

Node::Node( const Node& newNode ) { // copy constructor
	nextPtr = NULL;
	prevPtr = NULL;
	book = Book( newNode.book );
}

void Node::setBook( const Book& newBook ) {
    book = newBook;
}