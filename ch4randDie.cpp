/* FIle: rand.cpp
   Author: Cindy Arnold
   Demonstrates use of rand and srand 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int i, dieValue;

   srand( time(0) ); 	// seed once
   // roll 6 sided die 10 times
   for( i = 0; i < 10; i++ )
   {
      // scale to get 1, ..., 6
   	dieValue = 1 + rand() % 6;
   	cout << "Die value is: "  << dieValue << endl;
   }
}





