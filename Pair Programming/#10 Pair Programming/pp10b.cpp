/* File: pp10b.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program declares a structure, calls 2 functions, one to
 * fill in the structure and the other to print the info
 */

#include <iostream>
#include <string>

using namespace std;

 struct Pet{
    string name;
    int age;
    double weight;
    bool isNeutered;
    char boolcheck;
};


//Declare Functions
void getPetInfo(Pet& petIn);
//Precondition: a parameter that is the Pet Structure.
//Postcondition: The structure will be filled with the pet's data

void displayPet(const Pet& petOut);
//Precondition: a parameter that is the Pet Structure.
//Postcondition: output of the Pet Structure's info.

int main(){

Pet pet1;

	getPetInfo(pet1); //Call the get pet info function

	displayPet(pet1); //Call the display pet info function


   return(0);
}


void getPetInfo(Pet& petIn){
//Precondition: a parameter that is the Pet Structure.
//Postcondition: The structure will be filled with the pet's data

	cout << "Please Enter your pet's name: " << endl;
	cin >> petIn.name;

	cout << "Please Enter " << petIn.name << "'s age in years: " << endl;
	cin >> petIn.age;

	cout << "Please Enter " << petIn.name << "'s weight in lbs: " << endl;
	cin >> petIn.weight;

	cout << "Is " << petIn.name << " nuetered? (Y or N)" << endl;
	cin >> petIn.boolcheck;

		if(petIn.boolcheck == 'Y' || petIn.boolcheck == 'y'){
			petIn.isNeutered = true;
		}
		else{
			petIn.isNeutered = false;
		}
}


void displayPet(const Pet& petOut){
//Precondition: a parameter that is the Pet Structure.
//Postcondition: output of the Pet Structure's info.	

	cout << petOut.name << " is ";

	if(petOut.age > 1){
		cout << petOut.age << " years old";
    }
    else{
		cout << petOut.age << " year old";
	}

	cout << ", weighs "<< petOut.weight << " lbs, and ";

	if (petOut.isNeutered){
		cout << "has been nuetered." << endl;
	}
	else{
		cout << "has not been neutered." << endl;
	}
}	