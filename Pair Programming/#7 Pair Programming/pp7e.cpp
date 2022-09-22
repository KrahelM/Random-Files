/* File: pp7e.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program searches an array for a key element and returns
 * found element or did not find element
 */

#include <iostream>

using namespace std;

//delcare global Variables
const int NOT_FOUND = -1;

//declare functions
int linearSearch(const int array[], int n, int key);
//precondition: n is <= MAX_SIZE, also array[] have values
//in index 0-MAX_SIZE
//postcondition: returns int for element found that matches key
//or NOT_FOUND if not element mathces key

int main(){

//declare function variables
int foundIndex = 0; // index returned from search
const int MAX_SIZE = 8; // max size of array1
int key = 0; // search element

   //Prompt and read in element to search for
   cout << "Enter key value to search: " << endl;
   cin >> key;

   //Fill array
   int array1[MAX_SIZE] = {12, 1, 0, -5, 6, 8, 10, 18};

   //set foundIndex variable with search function return
   foundIndex = linearSearch(array1, MAX_SIZE, key);

       // check for index not found
       if(foundIndex == NOT_FOUND){
          cout << "Not found!\n";
       }
       // if found display element location by index
       else{
          cout << "Found element " << array1[foundIndex] <<
          " at index " << foundIndex << endl;
       }

   return 0;
}

int linearSearch(const int array[], int n, int key){
   //declare function variables
   int index = 0;
   bool found = false;

   //while loop if found is false and index is less than MAX_SIZE
   while ((!found) && (index < n)){
      //search matches array
      if (key == array[index]){
         found = true;
      }
      //increment index if match not found
      else {
         index++;
      }
   }
   //when found = true return index number for search
   if (found){
      return index;
   }
   //if no matches were found return -1
   else{
      return NOT_FOUND;
   }
}
