/* date.h
 * Author: Matthew Krahel and Hiram Kamau
 * Description: header for date class
 */

#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

enum month_t { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, 
JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

class Date
{
public: 
    // default constructor is the constructor 
    // with no parameters
    Date();  
    Date( int, int, int ); // month, day, year
    Date( int, int ); // month, year parameters
    Date( int ); // year parameter
    
    //virtual ~Date();

     
    static const int MIN_MONTH;      
    static const int MAX_MONTH;      
    static const int MIN_YEAR;      
    static const int MIN_DAY; 
    void setYear( int ); 
    int getYear() const { return year; } 
    void setMonth( int ); 
    int getMonth() const { return month; } 
    void setDay( int ); 
    int getDay() const { return day; } 
    void setDate( int, int, int ); 
    void printDate() const ;
private: 
    int daysInMonth() const;      
    int month; 
    int day; 
    int year;

};



#endif