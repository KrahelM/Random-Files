/* File: pp10c.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program declares a structure, builds an array with the structure
 * then uses a function to print the array, with column formatting
 */

 #include <iostream>
 #include <string>
 #include <cstdlib>
 #include <iomanip>

 using namespace std;

  struct Pet{
     string name;
     int age;
     double weight;
     bool isNeutered;

 };

void displayPets(Pet petArr[], int arrSize);
//precondition: array with PET structure elements, the max array arrSize
//postcondiiton: a formatted pring of the array.

main(){
//declare const int for array max elements
const int ARRAYSIZE = 5;

//Assing PET struct array with data.
Pet pets[ARRAYSIZE] = {{"Spot", 6, 40.2, true}, {"Lassie", 1, 14.5, false},
{"Loner", 1, 8.2, false}, {"Brutus", 11, 92.4, true}, {"Yetti", 16, 28.7, true}};

//Call array
displayPets(pets, ARRAYSIZE);

//return success.
return(0);

}

void displayPets(Pet petArr[], int arrSize){
//precondition: array with PET structure elements, the max array arrSize
//postcondiiton: a formatted pring of the array.

   // Table column header formatting
   cout << setw(10) << left << "Name ";
   cout << setw(5) << right << "Age ";
   cout << setw(7) << right << "Weight ";
   cout << setw(10) << left << "Neutered " <<  endl;
   cout << "_________________________________" << endl;

   //for loop to print array into strucutred table
   for(int i = 0; i < arrSize; i++){
      cout << setw(10) << left << petArr[i].name << " ";
      cout << setw(5) << right << petArr[i].age << " ";
      cout << setw(7) << right << petArr[i].weight << " ";
      //boolean element output change
      if (petArr[i].isNeutered){cout << setw(5) << left << "Yes" << endl;}
      else {cout << setw(5) << left << "No" << endl;}
   }
}
