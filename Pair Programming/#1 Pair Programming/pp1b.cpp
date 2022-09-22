/*
* File: pp1b.cpp
* Author: Matthew Krahel and Blake Hodges
* This program gets 2 integers from the user, calculates the force (in newtons) of an object given its mass (in kg) and acceleration (in meters per second2). 
*/
#include <iostrem>
int main()
{
	int mass; 	//object mass
	int acceleration;	//object acceleration
	int force;		//product of mass and acceleration

//Get numbers from user
std::cout << "Enter mass:";
std::cin >> mass;
std::cout <<"Enter acceleration:";
std::cin >> acceleration;
// multiply numbers and print the product
force = mass + acceleration;
std::cout << "Force: " << force << std::endl;
	return ( 0 );
}	