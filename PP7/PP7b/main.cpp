/* File: main.cpp
 * Author: Cindy Arnold
 * This program tests a Date class
 */
#include <iostream>
#include "date.h"

using namespace std;
int main(int argc, char **argv)
{
    // Code to test PP 7a start here
    Date d1;
    cout << "Minimum year: " << Date::MIN_YEAR << endl;
    //d1.month = -5;
    
    // test setYear, getYear
    d1.setYear(1999);
    cout << "d1 year: " << d1.getYear() << endl; // 1999
    d1.setYear(-5); // shoulld set to min year  = 0
    cout << "d1 year: " << d1.getYear() << endl; // 0
    
    // test printDate and other set/get functions
    d1.setMonth(DECEMBER);
    d1.setDay(31);
    cout << "d1: "; d1.printDate();    cout << endl; // 12/31/000
    d1.setDate(JANUARY, 1, 2000);
    cout << "d1: ";  d1.printDate();    cout << endl; // 1/1/2000
    d1.setMonth(FEBRUARY);
    d1.setDay( 29 ); // test not a leap year
    cout << "d1: ";  d1.printDate();    cout << endl;
    d1.setDate(-1, -1, -1); // test invalid everything
    cout << "d1: ";  d1.printDate();    cout << endl;
    
    // test constructors
    Date d2;  // calls default constructor =
    d2 = Date( ); // also calls default constructor
    cout << "d2: ";  d2.printDate(); cout << endl;
    Date *d2Ptr = new Date(); // default constructor
    cout << "d2Ptr->: ";  d2Ptr->printDate(); cout <<endl; // note -> operator
    Date d3( 1999 ); // calls 1-arg conestructor
    cout << "d3: ";  d3.printDate(); cout << endl;
    Date d4( APRIL, 2001 ); // calls 2-arg constructor
    cout << "d4: ";  d4.printDate(); cout << endl;
    Date d5( MAY, 1, 2000); // calls 3-arg constuctor
    cout << "d5: ";  d5.printDate(); cout << endl;
    Date d6( d5 ); // calls copy constructor
    cout << "d6: ";  d6.printDate(); cout << endl;
    //End of code to test 7a

    //The code below is for PP 7b  
    // test destructor  
    // don't forget to de-allocate memory when done with it! Otherwise program has a memory leak!
    delete d2Ptr; // this calls destructor
 
    // test overloading operators" +, =
    d6 = d5 + d4; // tests + and = actually
    cout << "d6 = d5 + d4: ";
    d6.printDate(); cout << endl;
    
    // test ==
    d4.setDate( d5.getMonth(), d5.getDay(), d5.getYear());
    if ( d5 == d4 ) { // should be true
        cout << "d5 and d4 contain the same date\n";
    }
    
    // test - (negate)
    d5 = -d4; // tests - and = actually
    cout << "d5 = -d4: ";   d5.printDate(); cout << endl;
    
    // test >> and <<
    cout << "Enter month, day, year: ";
    cin >> d5;
    cout << "You entered: " << d5 << endl;
    
    // test an array of Date objects
    Date dates[3]; 
    dates[1].setYear( 1999 );
    for( int i = 0; i < 3; i++ ) {
        cout << dates[i] << endl;
    }

   return 0; 
}