//DISPLAY 10.1 A Structure Definition 
//Program to demonstrate the CDAccount structure data type.
//This is a programmer-defined data type that is a composite
//of primitive data types.
#include <iostream>
using namespace std;

//Structure for a bank certificate of deposit
//Define it a global data type, but DO NOT
//declare the variable instance as a global variable

struct CDAccount
{
    double balance;
    double interest_rate;
    int term;//months until maturity
};   // IMPORTANT to end it with a semi-colon (required)


int main( )
{
    CDAccount account;   // Allocate memory for a new account instance

    // Fill the account instance with data
    cout << "Enter account balance: $";
    cin >> account.balance;

    cout << "Enter account interest rate: ";
    cin >> account.interest_rate;
    cout << "Enter the number of months until maturity\n"
         << "(must be 12 or fewer months): ";
    cin >> account.term;
    double rate_fraction, interest;
    rate_fraction = account.interest_rate/100.0;
    interest = account.balance*rate_fraction*(account.term/12.0);
    account.balance = account.balance + interest;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "When your CD matures in " 
         << account.term << " months,\n"
         << "it will have a balance of $" 
         << account.balance << endl;
    return 0;
}  // end of the main function


