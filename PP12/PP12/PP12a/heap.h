#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <iostream>
using namespace std;

template<class E>
class HeapPriorityQueue {
public:
   // constructor creates empty first element
   HeapPriorityQueue() { E e; v.push_back( e ); }
   int size() const { return v.size() - 1; }
   bool empty() const { return (v.size() == 1 ); }
   void insert( const E& );
   // the minimum node is at the top of the heap
   const E& min() const { return v[1]; }
   void removeMin();
   void printHeap() const;
private:
   vector<E> v;
   bool hasLeft( int );
   bool hasRight(int );
   void swap( int, int );
};

/* hasRight: returns true is element i in heap/vector  
 *    has a right child
 * Parameter i the index in the vector of this entry
 * Returns true if entry i in heap has right child
 */
template<class E>
bool HeapPriorityQueue<E>::hasRight( int i ) {
   return (i*2+1) < ((int)v.size());
}


template<class E>
bool HeapPriorityQueue<E>::hasLeft( int i )
{
	return (i*2) < ((int)v.size()) ;
}


/* swap: swaps elements i and j in heap/vector
 * Parameters: i and j are indices of entries to swap
 * Returns  nothing
 */
template<class E>
void HeapPriorityQueue<E>::swap( int i, int j ) {
   E temp;
   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}


template<class E>
void HeapPriorityQueue<E>::insert( const E& e)
{
	v.push_back(e);
	int currentIndex = v.size() - 1;
	
	while(currentIndex != 1)
	{
		int parentIndex = (currentIndex / 2);

		if(v[parentIndex] > v[currentIndex])
		{
			swap(parentIndex, currentIndex);
			currentIndex = parentIndex;
		}
		else
		{
			return;
		}
	}
}

template<class E>
void HeapPriorityQueue<E>::removeMin()
{
	int smallerIndex;
	
	if(size() == 0)
	{
		return;
	}
	
	if(size() == 1)
	{
		v.pop_back();
		return;
	}

	swap(1, v.size() - 1);
	v.pop_back();
	int currentIndex = 1;

	while( hasLeft(currentIndex) )
	{
		if( (hasRight(currentIndex) && (v[currentIndex *2 +1]) < v[currentIndex *2]) )
		{
			smallerIndex = currentIndex  *2 + 1;
		}
		else
		{
			smallerIndex = currentIndex *2;
		}

		if( v[smallerIndex] < v[currentIndex] )
		{
			swap(smallerIndex, currentIndex);
			currentIndex = smallerIndex;
		}
		else
		{
			return;
		}
	}
}


template<class E>
void HeapPriorityQueue<E>::printHeap() const
{
	cout << "Heap: ";
	for(int i = 1; i < (int)v.size(); i++)
	{
		cout << v[i] << "  ";
	}
	cout << endl;
}

#endif