#include <iostream>
#include <cstdlib>
#include <ctime>
#include "book.h"
#include "node.h"
#include "position.h"
#include "binarySearchTree.h"

using namespace std;

int main(int argc, char **argv)
{
	
   BinarySearchTree<int> tree;
   int randNumbers[] = { 50, 25, 75, 10, 30, 60, 80, 55 };

   for( int i = 0; i < 8; i++ ) {
      tree.insert( randNumbers[i] );
   }

   cout << "Tree size: " << tree.size() << endl;
   cout << "Pre-order: ";
   tree.traverseAndPrint( tree.root(), PREORDER);
   cout << endl << "In-order: ";
   tree.traverseAndPrint( tree.root(), INORDER );
   cout << endl << "Post-order: ";
   tree.traverseAndPrint( tree.root(), POSTORDER );
   cout << endl;
   
   Position<int> i = tree.find( 75 );
   if ( i.isInternal() ) {
	   	int height = tree.height( i );
		cout << "Height of 75 should be 3: " << height << endl;
	}
	i = tree.find( 5 );
	if ( i.isExternal() ) { 
		cout << 5 << " is not in the tree\n";
	}
 
   tree.erase( 50 ); // erase root
   cout << "After erasing 50\n";
   tree.traverseAndPrint( tree.root(), PREORDER);
   tree.erase( 80 );// erase a leaf
   cout << "\nAfter erasing 80\n";
   tree.traverseAndPrint( tree.root(), PREORDER);
   cout << endl;
   cout << "Using operator++ to traverse tree:\n";
   for( Position<int> it = tree.begin(); it != tree.end(); ++it ) {
       cout << (*it).getItem() << " ";
   }
   cout << endl;
   return 0;
}
