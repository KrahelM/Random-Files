#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<class T> class Node; 
template<class T> class Iterator; 

#include "book.h"
#include "node.h"
#include "iterator.h"

template<typename T>
class LinkedList {
public:
   /* Default ctor creates an empty list with empty head and
      tail nodes
    */
   LinkedList();
   /* Copy constructor does deep copy of parameter list
    */
   LinkedList( const LinkedList<T>& );
   /* size returns the size of the list
    */
   int size() const { return n; }
   /* empty returns true if the list is empty
    */
   bool empty() const { return n == 0; }
   /* begin returns an iterator to the first element 
      in the list or the tail sentinel node if the list 
      is empty
    */
   Iterator<T> begin() const { 
      return Iterator<T>( headPtr->nextPtr ); }
   /* end returns an iterator to the last element in the list 
      or the tail sentinel node if the list is empty
    */
   Iterator<T> end() const { return Iterator<T>( tailPtr ); }
   /* insert inserts parameter node just before iterator
      parameter position
    * Pre-condition: node type T has copy constructor
    */
   void insert( const Iterator<T>&, const Node<T>& );
   /* insertFront inserts node at beginning of list
    * Pre-condition: node type T has copy constructor
    */
   void insertFront( const Node<T>& );
   /* insertBack inserts parameter node at the end of the list
    * Pre-condition: node type T has copy constructor
    */
   void insertBack( const Node<T>& );
    /* erase removes node from list referred to by iterator
       parameter
    */
   void erase( const Iterator<T>& );
   /* eraseFront removes the first node in the list 
     (not headPtr) if list isn’t empty
   */
   void eraseFront() { erase( begin() ); }
   /* eraseBack removes node from end of list if list is 
      not empty (not tailPtr)
    */
   void eraseBack() { erase( --end()); }
   /* traverseAndPrint traverses entire list and prints node
      items to display.
    * Precondidtion: class T has overloaded <<
    */
   void traverseAndPrint() const;
   /* LinkedList destructor deallocates all nodes including 
      head and tail sentinels
    */
   virtual ~LinkedList() { eraseList(); }
   /* operator= erases current list then deep copies list
      parameter to this list
    * Pre-condition: class T has overloaded copy constructor
    * Returns reference to this list
    */
   LinkedList<T>& operator=( const LinkedList<T>& );
private:
   /* eraseList deallocates all nodes including head and tail
      sentinels. Used by destructor, operator= and copy ctor
    */
   void eraseList(); 
   Node<T>* headPtr;
   Node<T>* tailPtr;
   // n=num nodes in list not counting sentinel head and tail
   int n; 
};

/* Default ctor creates an empty list with empty head and
*tail nodes
*/
template<class T>
LinkedList<T>::LinkedList(){
    headPtr = new Node<T>();
    tailPtr = new Node<T>();
    headPtr->nextPtr = tailPtr;
    tailPtr->prevPtr = headPtr;
    n = 0;
}


/* Copy constructor does deep copy of parameter list
*/
template<class T>
LinkedList<T>::LinkedList( const LinkedList<T>& newList){
    Node<T>* thisPtr;
    Node<T>* curPtr;
    if( newList.headPtr != NULL ){
        curPtr = newList.headPtr;
        headPtr = new Node<T>( *curPtr );
        thisPtr = headPtr;
        curPtr = curPtr->nextPtr;
        while(curPtr != NULL){
            thisPtr->nextPtr = new Node<T>( *curPtr );
            thisPtr->nextPtr->prevPtr = thisPtr;
            thisPtr = thisPtr->nextPtr;
            curPtr = curPtr->nextPtr;
        }
    }
    tailPtr = thisPtr;
    n = newList.n;
}

/*insert inserts parameter node just before iterator
*parameter position
* Pre-condition: node type T has copy constructor
*/
template<class T>
void LinkedList<T>::insert( const Iterator<T>& it, const Node<T>& node ) {
    Node<T>* next = it.curPtr; // node after new node
    // node before new node
    Node<T>* prev = it.curPtr->prevPtr; 

    Node<T>* newNode = new Node<T>(node);
    newNode->nextPtr = next;
    newNode->prevPtr = prev;
    prev->nextPtr = newNode;
    next->prevPtr = newNode;
    n++;
}

   
   
   
/* insertFront inserts node at beginning of list
* Pre-condition: node type T has copy constructor
*/
template<class T>
void LinkedList<T>::insertFront(const Node<T>& n ) {
     insert( begin(), n );
}


   
   
   
/* insertBack inserts parameter node at the end of the list
* Pre-condition: node type T has copy constructor
*/
template<class T>
void LinkedList<T>::insertBack(const Node<T>& n ) {
     insert( end(), n );
}

    
    
    
template<class T>
void LinkedList<T>::erase( const Iterator<T>& it) {
    
    Node<T>* next = it.curPtr->nextPtr; // node after new node
     // node before new node
     Node<T>* prev = it.curPtr->prevPtr; 

     it.curPtr->prevPtr->nextPtr = next;
     it.curPtr->nextPtr->prevPtr = prev;

     n--;
}



/* traverseAndPrint traverses entire list and prints node 
* items to display.
* Precondition: class T has overloaded <<
*/
template<typename T>
void LinkedList<T>::traverseAndPrint() const {
    Iterator<T> it( begin() );
    for( ; it != end(); ++it ) {
        cout << it.curPtr->item << endl;
    }
}

/* operator= erases current list then deep copies list
* parameter to this list
* Pre-condition: class T has overloaded copy constructor
* Returns reference to this list
*/
template<typename T>
LinkedList<T>& LinkedList<T>::operator=( const LinkedList<T>& l ) {
   // thisPtr goes through this' list, curPtr goes thru l's
   Node<T>* thisPtr, *nodePtr;
 
   // first, delete original list so no memory  leak
   eraseList();
   
   // get head of new list then copy l to this
   headPtr = new Node<T>;
   thisPtr = headPtr;
   Iterator<T> it = l.begin();
   while( it != l.end() ) {
        nodePtr = new Node<T>( *(it.curPtr) );
        nodePtr->prevPtr = thisPtr;
        thisPtr->nextPtr = nodePtr;
        thisPtr = nodePtr;
        ++it;
   }
   // finally, get tail node of new list
   tailPtr = new Node<T>();
   tailPtr->prevPtr = thisPtr;
   thisPtr->nextPtr = tailPtr; 
   n = l.n;         // set this lists' size
   return *this;
}

/* eraseList deallocates all nodes including head and tail
*sentinels. Used by destructor, operator= and copy ctor
*/
template<typename T>
void LinkedList<T>::eraseList(){
    if(n != 0){
        Node<T>* curPtr;
        curPtr = headPtr;
        while(curPtr != NULL ){
            headPtr = curPtr->nextPtr;
            free(curPtr);
            curPtr = headPtr;
        }
        tailPtr = NULL;
        n = 0;
    }
}



#endif