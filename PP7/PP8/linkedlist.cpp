#include "linkedlist.h"
#include "node.h"
#include <iostream>
#include <cstdlib>

LinkedList::LinkedList( const LinkedList& newList ){
    Node* thisPtr;
   if( newList.headPtr != NULL ){
       Node* curPtr = newList.headPtr;
       headPtr = new Node( *curPtr );
        thisPtr = headPtr;
       curPtr = curPtr->nextPtr;
       while( curPtr != NULL ){
           thisPtr->nextPtr = new Node( *curPtr );
           thisPtr->nextPtr->prevPtr = thisPtr;
           thisPtr = thisPtr->nextPtr;
           curPtr = curPtr->nextPtr;
       }
   }
   tailPtr = thisPtr;
    count = newList.count;
}

void LinkedList::insertNode( Node* nPtr ){
		count++;
		if ( headPtr == NULL )
		{
			headPtr = nPtr;
			tailPtr = nPtr;
		}
		else
		{
			nPtr->nextPtr = headPtr;
			headPtr->prevPtr = nPtr;
			headPtr = nPtr;
		} 	
}

void LinkedList::traverseQueue() const{
		Node* curPtr = tailPtr;
		while ( curPtr != NULL )
		{
			cout << curPtr->book;
			curPtr = curPtr->prevPtr;
		}
}

void LinkedList::traverseStack() const{
		Node* curPtr = headPtr;
		while ( curPtr != NULL )
		{
			cout << curPtr->book;
			curPtr = curPtr->nextPtr;
		}
}

Node* LinkedList::findNode( const Book& key ) const{
    
    for( Node* curPtr = headPtr; curPtr != NULL; curPtr = curPtr->nextPtr ){
        if( curPtr->book == key ){
            return curPtr;
        } 
    }
    return NULL;
}

void LinkedList::deleteNode( Node* nodePtr ){
     if( nodePtr == headPtr ){ 
         headPtr = nodePtr->nextPtr;
         if( headPtr != NULL ){
             headPtr->prevPtr = NULL;
         } else {
             tailPtr = NULL;
         }
     }
     else if( nodePtr == tailPtr ){
         tailPtr = nodePtr->prevPtr;
         tailPtr->nextPtr = NULL;
     } else {
         nodePtr->prevPtr->nextPtr = nodePtr->nextPtr;
         nodePtr->nextPtr->prevPtr = nodePtr->prevPtr;
     }
     count--;
     free( nodePtr );
}

Node* LinkedList::dequeueNode(){
    count--;
    Node* nodePtr;
    nodePtr = tailPtr;
	tailPtr = tailPtr->prevPtr;
	if ( count != 0 )
	{
        tailPtr->nextPtr = NULL;
    }
    else
    {
        headPtr = NULL;
    }
    nodePtr->prevPtr = NULL;
    nodePtr->nextPtr = NULL;
    return nodePtr;

}

Node* LinkedList::popNode(){
    Node* nodePtr;
	count--;
    nodePtr = headPtr;
	headPtr = headPtr->nextPtr;
    if ( count != 0 )
    {
        headPtr->prevPtr = NULL;
    }
    else
    {
        tailPtr = NULL;
    }
    nodePtr->prevPtr = NULL;
    nodePtr->nextPtr = NULL;
    return nodePtr;
}

void LinkedList::deleteList(){
    for ( int i = count; i > 0; i-- )
    {  	
        Node* curPtr = headPtr;
        Node* tempNext = headPtr->nextPtr;
        free( curPtr );
        headPtr = tempNext;
    }
    headPtr = NULL;
    tailPtr = NULL;
}

LinkedList& LinkedList::operator=( const LinkedList& newList){
    deleteList();
    Node* thisPtr;
    if( newList.headPtr != NULL ){
       Node* curPtr = newList.headPtr;
       headPtr = new Node( *curPtr );
       thisPtr = headPtr;
       curPtr = curPtr->nextPtr;
       while( curPtr != NULL ){
           thisPtr->nextPtr = new Node( *curPtr );
           thisPtr->nextPtr->prevPtr = thisPtr;
           thisPtr = thisPtr->nextPtr;
           curPtr = curPtr->nextPtr;
       }
    }
    tailPtr = thisPtr;
    count = newList.count;
    
    return *this;
}