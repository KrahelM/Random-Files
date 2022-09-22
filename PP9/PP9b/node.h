#ifndef NODE_H
#define NODE_H

// declarations for friend statements below
template<class T> class LinkedList; 
template<class T> class Iterator; 
 
template<class T>
class Node {
public:
   /* Default constructor sets next and prev pointers to 
      NULL and calls item's default ctor
    */
   Node();
   /* 1-arg ctor that creates a node from an item type in the
      node. Sets next and prev pointers to NULL
    * Precondition: class T has overloaded operator= that 
      performs deep copy if T dynamically allocates memory
    */
   Node( const T& );
   /* copy constructor. Creates a node from another node. 
    */
   Node( const Node<T>& ); 
   /* destructor
    */
   virtual ~Node<T>() {}
   /* setItem: sets values for item in node. 
    * Precondition: class T has overloaded operator= that 
      performs deep copy if T dynamically allocates memory
    */
   void setItem( const T& ); 
   /* getItem: returns node's item
    * Precondition: class T has overloaded operator= that
      performs deep copy if T dynamically allocates memory
    */
   T getItem() const { return item; } 
   /* operator= assigns one node's data to another. Does not
      copy next and prev pointers
    * Precondition: class T has overloaded operator= that
      performs deep copy if T dynamically allocates memory
    */
   Node<T>& operator=( const Node<T>& );
   friend class LinkedList<T>;
   friend class Iterator<T>;
private:
   T item;
   Node<T>* nextPtr;
   Node<T>* prevPtr;
};


/* default constructor sets pointers to NULL
*/
template<class T>
Node<T>::Node() : nextPtr( NULL ), prevPtr( NULL ) { }
 
/* 1-arg copy constructor doesn't copy the next/prev pointers
   Pre-condition: T has defined operator= 
*/
template<class T>
Node<T>::Node( const Node<T>& n ) {
   *this = n; 
   nextPtr = NULL;
   prevPtr = NULL;
}

/* setItem sets the item data values in the node
   Parameter
      i the item
   Pre-condition: T has defined operator=
   Returns: nothing
*/
template<class T>
void Node<T>::setItem( const T& i ) {
   this->item = i;
}

/* 1-arg ctor that creates a node from an item type in the
*node. Sets next and prev pointers to NULL
* Precondition: class T has overloaded operator= that 
*performs deep copy if T dynamically allocates memory
*/
template<class T>
Node<T>::Node( const T& thing){
    item = thing;
    nextPtr = NULL;
    prevPtr = NULL;
}

/* operator= sets this' node’s item values to n’s item values
      and this' pointers to NULL
   Parameter
      n the source node to copy from
   Pre-condition: T has defined operator=
   Returns: a reference to the destination node copied to
*/
template<class T>
Node<T>& Node<T>::operator=( const Node<T>& n ) {
     nextPtr = NULL;
     prevPtr = NULL;
     item = n.item;
     return *this;
}

#endif