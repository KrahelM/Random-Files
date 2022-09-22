#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "book.h"
#include "node.h"

class LinkedList {
public:
   LinkedList() : headPtr( NULL), tailPtr( NULL ), count( 0 ) {} 
   LinkedList( const LinkedList& );
   void insertNode( Node* ); // at head
   void traverseQueue() const;
   void traverseStack() const;
   Node* findNode( const Book& ) const;
   void deleteNode( Node* );
   Node* dequeueNode(); // from tail
   Node* popNode(); // from head
   virtual ~LinkedList() { deleteList(); }
   void deleteList();
   bool isEmpty() const { return headPtr == NULL; }
   LinkedList& operator=( const LinkedList& );
private:
   Node* headPtr;
   Node* tailPtr;
   int count;
};

#endif
