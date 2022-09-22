#ifndef ITERATOR_H
#define ITERATOR_H

template<class T> class LinkedList;
template<class T> class Node;

#include "book.h"
#include "node.h"
 
template<class T>
class Iterator {
public:
     /* operator* dereferences iterator to return a reference
        to node in list
      */
     Node<T>& operator*() const;
     /* operator== returns true if this iterator and 
        parameter iterator point to same object
      */
     bool operator==( const Iterator<T>& p ) const;
     /* operator!= returns true if this iterator and 
        parameter iterator don't point to same object
      */
     bool operator!=( const Iterator<T>& p ) const;
     /* operator++ moves iterator to point to next node 
        in list and returns same iterator
      */
     Iterator& operator++();
     /* operator-- moves iterator to point to previous 
        node in list and returns same iterator
      */
     Iterator& operator--();
     friend class LinkedList<T>;
     friend class Node<T>;
private:
     /* the node pointer that this iterator refers to*/
     Node<T>* curPtr;
     /* Iterator constructor that creates an iterator 
         that points to Node parameter. No default constructor,
         just a private copy constructor
      */
     Iterator( Node<T>* nPtr );
};


/* Iterator constructor that creates an iterator 
*that points to Node parameter. No default constructor,
*just a private copy constructor
*/
template<class T>
Iterator<T>::Iterator( Node<T>* nPtr ){
    curPtr = nPtr;
}

/* operator* dereferences list iterator 
   Returns a reference to the node in list
*/
template<class T>
Node<T>& Iterator<T>::operator*() const {
     return *curPtr;
}

/* operator== returns true if this iterator and parameter
   iterator point to same object
   Parameter
      it iterator that points to a node in the list
   Returns true if this iterator’s node == it’s node
*/
template<class T>
bool Iterator<T>::operator==( const Iterator& it ) const {
     return curPtr == it.curPtr;
}


/* operator!= returns true if this iterator and 
*parameter iterator don't point to same object
*/
template<class T>
bool Iterator<T>::operator!=( const Iterator<T>& p ) const{
    bool x = (curPtr == p.curPtr);
    bool y = !x;
    return y;
}




/* operator++ moves iterator to point to next node in list 
   and returns same iterator
   Returns reference to current iterator
*/
template<class T>
Iterator<T>& Iterator<T>::operator++() {
     curPtr = curPtr->nextPtr;
     return *this;
}


/* operator-- moves iterator to point to previous 
*node in list and returns same iterator
*/
template<class T>
Iterator<T>& Iterator<T>::operator--() {
     curPtr = curPtr->prevPtr;
     return *this;
}

#endif