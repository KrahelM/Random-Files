#ifndef NODE_H
#define NODE_H

#include "book.h"

class Node {
private:
   Book book;
   Node* nextPtr;
   Node* prevPtr;
public:
   Node();
   Node( const Book& );
   Node( const Node& );
   virtual ~Node() {}
   void setBook( const Book& );
   Book getBook() const { return book; } 
   // LinkedList is a friend
   friend class LinkedList;
};

#endif
