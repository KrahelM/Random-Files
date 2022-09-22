/* 
*File: pp1a.cpp
*Author: Blake Hodges, Matthew Krahel
*This program gets two integers from the user then adds, subtracts, multiplies and divides them and displays the results 
*/

#include <iostream>  
int main()
{
    double number1; // 1st and 2nd integers to divide
    double number2; 
    double sum; //sum of number1 and number2
    double difference; //difference of number1 and number2
    double product; //product of number1 and number2
    double quotient;    //quotient of number1 and number2

    //Get numbers from user
    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;
    
    //apply calculations of numbers and print the results
    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;
    
    //Display Results
    std::cout << "Sum: "<<sum<<std::endl;
    std::cout << "Difference: "<<difference<<std::endl;
    std::cout << "Product: "<<product<<std::endl;
    std::cout << "Quotient: "<<quotient<<std::endl;
    return (0);


}