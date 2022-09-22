/*File: pp5c.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program takes input from the user,
*   inputs are name and age. Modifies the 
*   inputs and outputs differnt variables.
*/

//define library and namespace
#include <iostream>
#include <string>
using namespace std;

//define function
void getData(int& age, string& name);
//Precondition: Two non-assigned variables
//Postcondition: Two variables populated from user and outputs to be called by the driver.

//main function
int main(){

//Declare variables
int ageGiven;
string nameGiven;

 getData(ageGiven, nameGiven);



return(0);
}

//Function
void getData(int& age, string& name){
    
    //Prompts User
    cout << "Enter name:\n";
    cin >> name;
    cout << "Enter age:\n";
    cin >> age;

    cout << "Your name is " << name << " and your age is " << age <<".\n";
}