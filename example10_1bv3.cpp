//DISPLAY 10.1 A Structure Definition 
//Program to demonstrate the CDAccount structure data type.
//This is a programmer-defined data type that is a composite
//of primitive data types.

// Version 3 - Add a customerName and make an array of customers
//
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants should be defined here
const int MAX_ACCOUNTS = 3;

//Structure for a bank certificate of deposit:
struct CDAccount
{
	string customerName;
    double balance;
    double interestRate;
    int term;//months until maturity
};


void get_data(CDAccount the_account[], int custNum);
//Postcondition: the_account[#].balance and the_account[#].interest_rate
//have been given values that the user entered at the keyboard.

void display(CDAccount account[], int numAccounts);

int main( )
{
    CDAccount account[MAX_ACCOUNTS];    // make an array of accounts
	int numAccount = 0;
	double rate_fraction, interest;
	
	while (numAccount < MAX_ACCOUNTS) {
		get_data(account, numAccount);
	
		rate_fraction = account[numAccount].interestRate/100.0;
		interest = account[numAccount].balance*rate_fraction*(account[numAccount].term/12.0);
		account[numAccount].balance = account[numAccount].balance + interest;

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "When " << account[numAccount].customerName << "'s CD matures in " 
			 << account[numAccount].term << " months,\n"
			 << "it will have a balance of $" 
			 << account[numAccount].balance << endl;
			 
		numAccount++;  // increment the number of accounts by 1
	} // end of main account getting loop
	
	// Display all account data
	display(account, MAX_ACCOUNTS);
    return 0;
}

//Uses iostream:
void get_data(CDAccount the_account[], int custNum)
{
	char garbage;
    cout << "\nEnter the customer's name: ";
	getline(cin, the_account[custNum].customerName);
    cout << "Enter account balance: $";
    cin >> the_account[custNum].balance;

    cout << "Enter account interest rate: ";
    cin >> the_account[custNum].interestRate;
    cout << "Enter the number of months until maturity\n"
         << "(must be 12 or fewer months): ";
    cin >> the_account[custNum].term;
	cin.get(garbage);
}

void display(CDAccount account[], int numAccounts)
{
	// Display all the data in the structure
	for (int i=0; i < numAccounts; i++) {
		cout << setw(20) << account[i].customerName << setw(6)
		     << account[i].interestRate << setw(6)
			 << account[i].term  << setw(10)
			 << account[i].balance << endl;
	}
}
		

