/* File: main.cpp
 * Author: Cindy
 * Description: test of heap
 */
#include <iostream>
#include "heap.h"
int main() {
   HeapPriorityQueue<int> heap;
   //  insert no bubbling required
   heap.insert( 10 );
   heap.insert( 15 );
   heap.insert( 20 );
   heap.insert( 17 );
   heap.insert( 19 );
   heap.insert( 22 );
   heap.insert( 25 );
   heap.printHeap();// 10 15 20 17 19 22 25
   // insert requiring bubbling to top
   heap.insert( 5 );
   heap.printHeap(); // 5 10 20 15 19 22 25 17
   heap.insert( 1 );
   heap.printHeap(); // 1 5 20 10 19 22 25 17 1
   // removal of min which always requires bubbling
   int e = heap.min();
   cout << "Min: " << e << endl; // 1
   heap.removeMin();
   heap.printHeap(); // 5 10 20 15 19 22 25 17
   e = heap.min();
   cout << "Min: " << e << endl; // 5 
   heap.removeMin();
   heap.printHeap(); // 10 15 20 17 19 22 25 
   e = heap.min();
   cout << "Min: " << e << endl; // 10 
   heap.removeMin();
   heap.printHeap(); // 15 17 20 25 19 22
   return 0;
}