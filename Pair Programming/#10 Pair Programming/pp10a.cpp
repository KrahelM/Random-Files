/* File: pp10a.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program declares a structure named Pet and stores pet
 * data from the user.
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

int main(){

Pet pet1;

   cout << "Please Enter your pet's name: " << endl;
   cin >> pet1.name;

   cout << "Please Enter " << pet1.name << "'s age in years: " << endl;
   cin >> pet1.age;

   cout << "Please Enter " << pet1.name << "'s weight in lbs: " << endl;
   cin >> pet1.weight;

   cout << "Is " << pet1.name << " nuetered? (Y or N)" << endl;
   cin >> pet1.boolcheck;

      if(pet1.boolcheck == 'Y' || pet1.boolcheck == 'y'){
         pet1.isNeutered = true;
      }
      else{
         pet1.isNeutered = false;
      }

   cout << pet1.name << " is ";

      if(pet1.age > 1){
         cout << pet1.age << " years old";
      }
      else{
         cout << pet1.age << " year old";
      }

   cout << ", weighs "<< pet1.weight << " lbs, and ";

   if (pet1.isNeutered){
      cout << "has been nuetered." << endl;
   }
   else{
      cout << "has not been neutered." << endl;
   }

   return(0);
}
