/* Author: Professor Burlingame  
   UserId #: c1020a30
   Creation Date: 2/2/2009  
   Modification Date: 2/2/2012
   
   Course:   CSIT 1020 
   File name: pizza1.cpp    
   
   Inputs: size of pizza, toppings (S = sausage, C = cheese)
   Ouputs: total price of pizza
   Formulas: 16 inch pizza is $7.00, 14 inch is $5.00, 12 inch is $4.50
             Cheese is free, salmon is $1.00 extra  
    
   Purpose: Calculates the total amount owed for a salmon or cheese pizza  
*/

// Identify library headers and objects used in this program
#include <iostream>  

using std::cin;
using std::cout;
using std::endl;
using std::ios;

// Define constant values used in formulas
const double SALMON_ADDED_PRICE = 1.00;
const double CHEESE_ADDED_PRICE = 0.00;
const double LARGE_PIZZA = 7.00;
const double MEDIUM_PIZZA = 5.00;
const double SMALL_PIZZA = 4.50;

// ======================
//     main function
// ======================
int main()
{
 //
 // Variable declarations
 bool errorDetected = false;  // initialize to false, assume no errors
 char topping;		         // to hold the value of the topping requested
 int pizzaSize;	             // 16, 14 OR 12 INCH PIZZA
 double toppingPrice;       // additional price if a topping is added
 double pizzaPrice = 0.0;   // amount owed for pizza purchased
                            // initialize it to zero

  // Set the output stream to show decimals as 2 pt fixed, e.g. 999.99
  // This is sometimes referred to as the "magic formula"
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

 // Clear the display screen and display a welcome message
 // system("clear");   // This sends a command to the operating system
 cout << endl << "\nWelcome to the Pizza Kiosk!" << endl << endl;
 
 // Get Input Data
 cout << "What size pizza would you like (16, 14 or 12) inches? ";
 cin >> pizzaSize;

 // Test the size to determine what price to charge. *** Notice the
 // use of == operator. DO NOT use a single = sign!
 if (pizzaSize == 16)
   pizzaPrice = LARGE_PIZZA;
 else if (pizzaSize == 14)
   pizzaPrice = MEDIUM_PIZZA;
 else if (pizzaSize == 12)
   pizzaPrice = SMALL_PIZZA;
 else
 {
   cout << "Error in your pizza size, please choose 16, 14 or 12.\n\n";
   errorDetected = true;
 }

 // If size input was OK (no error detected), then continue processing
 if (!errorDetected)
 {
    cout << "\nWould you like a Cheese pizza (C) or a Salmon pizza (S)? ";
    cin >> topping;
 
	if (tolower(topping)  == 's')
		pizzaPrice = pizzaPrice + SALMON_ADDED_PRICE;
	else if (topping == 'C'|| topping == 'c')
		pizzaPrice = pizzaPrice + CHEESE_ADDED_PRICE;
	else
	{
		errorDetected = true;
		cout << "Invalid response. C for Cheese or S for Salmon is required.\n";
    }
 
	 // If topping input was OK (still no error detected), then continue with the calculations.
	 if (!errorDetected)
	 {
		// Display the amount owed.
		cout << "\nYou owe $" << pizzaPrice << " for your pizza.\n";
		cout << "Thanks for your order. We appreciate your business!\n\n";
	  } 
 }
 return 0; // return control to the operating system using a SUCCESS code
}
 // --------------------------------
 // --------- END MAIN -------------
 // --------------------------------
