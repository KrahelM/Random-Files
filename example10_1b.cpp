//DISPLAY 10.1 A Structure Definition 
//Program to demonstrate the CDAccount structure data type.
//This is a programmer-defined data type that is a composite
//of primitive data types.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

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
//Postcondition: the_account.balance and the_account.interest_rate
//have been given values that the user entered at the keyboard.


int main( )
{
    CDAccount account[MAX_ACCOUNTS];	
	for(int i=0; i < MAX_ACCOUNTS; i++){
		get_data(account, i);

		double rate_fraction, interest;
		rate_fraction = account[i].interestRate/100.0;
		interest = account[i].balance*rate_fraction*(account[i].term/12.0);
		account[i].balance = account[i].balance + interest;

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "When "
			 << account[i].customerName
			 << " CD matures in " 
			 << account[i].term << " months,\n"
			 << "it will have a balance of $" 
			 << account[i].balance << endl;
	}	

	for(int i=0; i < MAX_ACCOUNTS; i++){
		cout << endl << setw(30) << account[i].customerName
			 << setw(6) << account[i].term
			 << setw(6) << account[i].balance
			 << setw(6) << account[i].interestRate << endl;
		
		
		
	}
    return 0;
}

//Uses iostream:
void get_data(CDAccount the_account[], int custNum)
{
	char throwAway;
	
	cout << "\nEnter Customer's name: ";
	getline(cin, the_account[custNum].customerName);
	
    cout << "Enter account balance: $";
    cin >> the_account[custNum].balance;

    cout << "Enter account interest rate: ";
    cin >> the_account[custNum].interestRate;
    cout << "Enter the number of months until maturity\n"
         << "(must be 12 or fewer months): ";
    cin >> the_account[custNum].term;
	cin.get(throwAway);
}

Display 7.13 has bubble sort for PP 10D
