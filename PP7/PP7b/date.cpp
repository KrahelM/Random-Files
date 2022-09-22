/* date.cpp
 * Author: Matthew Krahel and Hiram Kamau
 * Description: contains constants for dates
 */

#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <ctime> 
#include <iomanip> 
#include "date.h"

const int Date::MIN_MONTH = JANUARY; 
const int Date::MAX_MONTH = DECEMBER;
const int Date::MIN_YEAR = 1;
const int Date::MIN_DAY = 1;

/* Date: default constructor sets date to today
 */
Date::Date()
{
   time_t t = time(NULL);
   tm* tPtr = localtime( &t );
   month = tPtr->tm_mon;
   day = tPtr->tm_mday;
   year = tPtr->tm_year + 1900;
}

/* 3-arg constructor
 * Parameters:
 *    mm month, 1 - 12
 *    dd day in month
 *    yyyy year
 */
Date::Date( int mm, int dd, int yyyy ) {
   setMonth( mm );
   setYear( yyyy );
   setDay( dd );
}

/* 2-arg constructor
 * Parameters:
 *    mm month, 1 - 12
 *    yyyy year
 */
Date::Date( int mm, int yyyy ) { // month, year parameters
   setMonth( mm );
   setYear( yyyy );
   setDay( MIN_DAY );
}


/* 1-arg constructor
 * Parameters:
 *    yyyy year
 */
Date::Date( int yyyy ) {// year parameter
   setMonth( MIN_MONTH);
   setYear( yyyy );
   setDay( MIN_DAY );
}

Date::~Date() {
   printDate();
   cout << " destroyed\n";
}


Date operator+( const Date& d1, const Date& d2 ) {
  int month = d1.month, day = d1.day, year = d1.year;
  // The code here just adds the days. It doesn’t
  //   check to see if it’s a valid day. This is fine
  //   for the purpose of the pair programming.
   day += d2.day;
   return Date( month, day, year );
}

bool operator==( const Date& d1, const Date& d2 ) {
   if ( d1.day == d2.day && d1.month == d2.month &&
      d1.year == d2.year ) return true;
   else return false;
}


Date Date::operator-( ) const {
   return Date( abs(this->month-6), this->day, this->year );
}




ostream& operator<<( ostream& outStream, const Date& d ) {
  outStream << setfill( '0' ) << setw(2) <<
     (d.month+1) << '/' << d.day << '/' << setw(4) << d.year;
   return outStream;
}

istream& operator>>( istream& inStream, Date& d ) {
   inStream >> d.month >> d.day >> d.year;
   d.setMonth( d.month-1 ); // since user enters 1 for JAN
   return inStream;
}

Date& Date::operator=( const Date& d1 ) {
   this->day = d1.day;
   this->month = d1.month;
   this->year = d1.year;
   return *this;
}







 /* daysInMonth: returns number of days in month based upon year
 * Pre-condition object month and year have been set
 * Returns maximum valid day given a particular month/year
 */
int Date::daysInMonth() const {
   int max; // max number of days in month
   switch( month ) {
      case JANUARY: case MARCH: case MAY: case JULY: 
      case AUGUST: case OCTOBER: case DECEMBER:
         max = 31; break;
      case  APRIL: case JUNE: case SEPTEMBER: case NOVEMBER:
         max = 30; break;
      case FEBRUARY: // FEB
         // leap year? 
         if ( (year % 4 == 0 && year % 100 != 0) ||
              ( year %400 == 0) )
            max = 29;
         else
            max = 28;
   }
   return max;
}

/* printDate: prints date in form mm/dd/yyyy
 */
void Date::printDate() const {
   cout << setfill( '0' ) << setw(2) <<
      (month+1) << '/' << day << '/' << setw(4) << year;
}


/* setYear: sets year 
 * Parameter y year
 * Returns: nothing
 */
void Date::setYear ( int y ){
  if ( y < MIN_YEAR ) year = MIN_YEAR;
  else year = y;
} 
    
/* setMonth: sets month
 * Parameter m month
 * Returns: nothing
 */
void Date::setMonth( int m){
  if ( m < MIN_MONTH ) month = MIN_MONTH;
  else month = m;
} 


/* setDay: sets day
 * Parameter d day
 * Returns: nothing
 */
void Date::setDay( int d){
  if ( d < MIN_DAY ) day = MIN_DAY;
  else day = d;
} 


/* setDate: calls setMonth, setYear, and setDay functions
 * to then set the entire date at once
 * Parameter m month, d day, y year
 * Returns: nothing
 */
void Date::setDate( int m, int d, int y ){
    setMonth(m); 
    setYear(y);
    setDay(d);
}

