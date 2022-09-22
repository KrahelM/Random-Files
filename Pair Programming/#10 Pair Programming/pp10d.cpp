/* File: pp10d.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program declares a structure, builds an array with the structure,
 * sorts the array alphabetically then uses a function to print the 
 * array, with column formatting
 */

 #include <iostream>
 #include <string>
 #include <cstdlib>
 #include <iomanip>
 #include<cstring>

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

void sortPets(Pet toSort[], int arraySize);
//Precondition: a structure array to be sorted and the number of elements in the array
//Postcondition: the array will be sorted based on the name


main(){
//declare const int for array max elements
const int ARRAYSIZE = 5;

//Assing PET struct array with data.
Pet pets[ARRAYSIZE] = {{"Spot", 6, 40.2, true}, {"Lassie", 1, 14.5, false},
{"Loner", 1, 8.2, false}, {"Brutus", 11, 92.4, true}, {"Yetti", 16, 28.7, true}};

//Call the sort function
sortPets(pets, ARRAYSIZE);


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

void sortPets(Pet toSort[], int arraySize){
//Precondition: a structure array to be sorted and the number of elements in the array
//Postcondition: the array will be sorted based on the name
	
	string nameTemp[arraySize];
    int ageTemp[arraySize];
    double weightTemp[arraySize];
    bool isNeuteredTemp[arraySize];
	int alphaTest;
	
	//test and sort in alphabetical order
	for(int i = arraySize-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			

			
			if(toSort[j].name > toSort[j+1].name){ //true means j string is earlier in the alphabetical
				nameTemp[0] = toSort[j+1].name;
				ageTemp[0] = toSort[j+1].age;
				weightTemp[0] = toSort[j+1].weight;
				isNeuteredTemp[0] = toSort[j+1].isNeutered;
								
				toSort[j+1].name = toSort[j].name;
				toSort[j+1].age = toSort[j].age;
				toSort[j+1].weight = toSort[j].weight;
				toSort[j+1].isNeutered = toSort[j].isNeutered; 	

				toSort[j].name = nameTemp[0];
				toSort[j].age = ageTemp[0];
				toSort[j].weight = weightTemp[0];
				toSort[j].isNeutered = isNeuteredTemp[0];	
				
			}
		}
	}
}	
	