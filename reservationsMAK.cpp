/*Author: Matthew Krahel
*UserId 11: c1010b11
*Creation Date: 3/31/2021
*Course: CISP 1010 V01
*File name: reservationsMAK
*Purpose: This application allows passengers to reserve seats on our 
*moon flight spacecraft.
*Test Cases: Reserve a seat, reserve a taken seat, number of rows change 
*the program still works, user inputs an invalid row or seat letter, 
*user chooses a menu option not available, user makes a reservation and 
*wants to make another (displays recently chosen seat as unavailable),
*user gives a weak or a strong password, user looks up reservation with
*an incorrect password.
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string> //variable string
#include <fstream> //accessing files
#include <cctype>
#include <cstring>


using namespace std;

//Function Declarations
void displayWelcome();
//PreConditions: None
//Postcondition: The program outputs a welcome message to the user.

void displayExit();
//PreConditions: None
//Postcondition: The program outputs an exit message to the user.

char displayMenu();
//PreConditions: None
//Postcondition: Displays menu and returns character from user

void fillArray2D(char array[][3], int rows, int columns);
//PreConditions: 2 dimensional array that needs each row filled with
//a letter starting with A then B then C (max 3 columns), the number 
//of rows in the array and the number of columns in the array
//Postcondition: Array will be returned full of letters similar 
//to flight seats such as row 3 column 2 will contain "B"

void displayAvailSeats(char array[][3], int rows, int columns);
//PreConditions: A 2 dimensional array with the number of its rows
//and columns.
//Postcondition: Displays the current seats available based on array

bool checkFullFlight(char array[][3], int rows, int columns);
//Precondition: A 2 dimensional array that is full when all elements
//are full of X, the arrays number of rows and number of columns
//Postcondition: Returns a true for a full flight and false if not full.

void getUserName(string& fName, string& lName);
//PreConditions: string variable for the users first name and last name
//Postcondition: User will input their first and last name and it will be
//referenced back to the main function.

void requestSeat(char array[][3], int rows, int columns, string fName, string lName);
//PreConditions: A 2 dimensional array with the number of its rows
//and columns. The first and last name for the reservation.
//Postcondition: The specific element in the array for the seat reserved will be 
//filled with an X, the user will be informed the seat is reserved, the users reservation
//will be saved.
//If the seat is taken the user will be informed and sent back to main menu		

void outputReservation();
//Preconditions: None
//Postcondition: Gets user password, looks up reservation, outputs Reservation info.



// Begin Main Function
int main()
{
	// Declare the variables
	
	ifstream inputterArray; // declare array file variables (weird name is intentional)
	ofstream outputterArray; //declare array file variables (weird name is intentional)
	char seatsArrayFileName[256] = "seatsTaken.dat"; //file to pull and save for seats taken
	char userMenuChoice; //Choice made by user of what item to do
	const int MAX_ROWS = 6; // This will be rows on flight
	const int MAX_COLUMNS = 3; //This will be seats on flight across (A, B, C, D...)
	char seatsReserved[MAX_ROWS][MAX_COLUMNS]; //Holds the main info on seats reserved
	string firstName; //Reservation user first name
	string lastName; //Reservation user last name
	int i = 0;

	//Call the greeting function 
	displayWelcome(); 

	//Open seats reserved file
	inputterArray.open(seatsArrayFileName);

	//If no seats reserved yet, initialize array with empty seats (A,B,C)
	//Test for if reserved file did not open
	if(inputterArray.fail()) { 
		//call function to initialize array with empty seats
		fillArray2D(seatsReserved, MAX_ROWS, MAX_COLUMNS);
	}	
	else{
	//Put reservations from file into array
	while ( !inputterArray.eof())
          {
                inputterArray >> seatsReserved[i];
                i++;
          }      
	
	}
	
	
	//Start prompting user for decisions
	do{	
		
		
		//Call the menu function
		userMenuChoice = displayMenu();
		
		//Determine what function to show based on user's choice
		switch ( userMenuChoice ) { 
			case 1: //Reserve a Seat
		
				//Call the check if the flight is full function
				if(checkFullFlight(seatsReserved, MAX_ROWS, MAX_COLUMNS)){
					cout << "The flight is full, returning to main menu \n";
				}
				else{
				//Call the user name function, call the available seats function, 
				//request seat choice from user, create reservation
				getUserName(firstName, lastName);
				displayAvailSeats(seatsReserved, MAX_ROWS, MAX_COLUMNS);
				requestSeat(seatsReserved, MAX_ROWS, MAX_COLUMNS, firstName, lastName);
				}
				break;
			case 2: //View Available Seats
		
				//Call the the available seats function
				displayAvailSeats(seatsReserved, MAX_ROWS, MAX_COLUMNS);
				break;
			case 3: //View Your Existing Reservation
		
				//Call the Reservation function
				outputReservation();		
				break;
			case 4: //Exit Program
		
				//Call the exit message
				displayExit();		
				break;
			default:
			
				//inform of invalid menu choice
				cout << "Invalid menu choice, please try again. \n";
				userMenuChoice = 5;
		}
			
	} while(userMenuChoice != 4); //User inputs 4 to end the program

	//Output Seats Array into seats taken file
	//Open output file
	outputterArray.open(seatsArrayFileName);
	
	//Output info
	for (int i = 0; i < (MAX_ROWS); i++){
		for (int j = 0; j < (MAX_COLUMNS); j++){
			outputterArray << seatsReserved[i][j];
		}
	}
	
	//Close file(s)
	inputterArray.close( );
	outputterArray.close( );

	return( 0 ); // Return success to the operating system
}	


//All function bodies are described here:

void displayWelcome(){
//PreConditions: None
//Postcondition: The program outputs a welcome message to the user.

	cout << "Welcome to the Moon Flight Reservation System!\n";
} 

void displayExit(){
//PreConditions: None
//Postcondition: The program outputs an exit message to the user.

	cout << "Enjoy your flight!\n";
} 

char displayMenu(){
//PreConditions: None
//Postcondition: Displays menu and returns character from user

	//Declare Variables
	int userMenuChoice;

	cout << "\nWould you like to \n"
		 << "1. Reserve a Seat \n"
		 << "2. View Available Seats \n"
		 << "3. View Your Existing Reservation \n"
		 << "4. Exit Program \n"
		 << "User Choice: ";
	cin >> userMenuChoice;
	cout << "\n";
	if(isalpha(userMenuChoice)){
		userMenuChoice = 5;
	}
	return (userMenuChoice);
}	

void fillArray2D(char array[][3], int rows, int columns){
//PreConditions: 2 dimensional array that needs each row filled with
//a letter starting with A then B then C (max 3 columns), the number 
//of rows in the array and the number of columns in the array
//Postcondition: Array will be returned full of letters similar 
//to flight seats such as row 3 column 2 will contain "B"

	//Input A into first column
	for (int i = 0; i < rows; i++){
		array[i][0] = 'A';
	}
	
	//Input B into second column	
	if(columns > 1){
		for (int i = 0; i < rows; i++){
			array[i][1] = 'B';
		}
	}	

	//Input C into third column	
	if(columns > 2){
		for (int i = 0; i < rows; i++){
			array[i][2] = 'C';
		}
	}	

	
}


void displayAvailSeats(char seats[][3], int rows, int columns){
//PreConditions: A 2 dimensional array with the number of its rows
//and columns.
//Postcondition: Displays the current seats available based on array

	for(int i = 0; i < rows; i++){
		cout << "\n" << i+1 << ". ";
		for(int j = 0; j < columns; j++){
			cout << seats[i][j] << " ";
		}	
	}
	cout << "\n\n";
}


bool checkFullFlight(char array[][3], int rows, int columns){
//Precondition: A 2 dimensional array that is full when all elements
//are full of x, the arrays number of rows and number of columns
//Postcondition: Returns a true for a full flight and false if not full.
	
	
	//Check every array location for an X and return flase if any other value
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			if(array[i][j] != 'X'){
				return (0);
			}
		}
	} return (1);
}

void getUserName(string& fName, string& lName){
//PreConditions: string variable for the users first name and last name
//Postcondition: User will input their first and last name and it will be
//referenced back to the main function.

	cout << "Please enter the passenger's first name: ";
	cin >> fName;
	cout << "Please enter the passenger's last name: ";
	cin >> lName;
	cout << "Please select a seat for " << fName << " " << lName << ". \n";
	
}	
		

void requestSeat(char array[][3], int rows, int columns, string fName, string lName){
//PreConditions: A 2 dimensional array with the number of its rows
//and columns. The first and last name for the reservation. 
//Postcondition: The specific element in the array for the seat reserved will be 
//filled with an X, the user will be informed the seat is reserved, the users reservation
//will be saved.
//If the seat is taken the user will be informed and sent back to main menu		

	int row; //row to be chosen by user
	char seatLetter; //Seat (ABC) to be chosen by user
	int j; //column in arrow (chosen by user)
	string password; //user password to be inputted
	int strengthOfPassword = 0; //value for how strong the password is
	ofstream passwordOutputter;
	char currentReservationFileName[] = "reservations.dat";//Reservation file name
	int index7 = 0;
	int doneIf1 = 0;
	
	//request the row and seat letter and adjust seat letter to an array column
	do{
		cout << "\nEnter desired row number: ";
		cin >> row;
		cout << "Please enter desired seat letter: ";
		cin >> seatLetter;

		//Test row is within the rows allowed
		if(row > rows){	
			seatLetter = 'Z';
		}	
	
		
		switch(seatLetter){
			case 'A': case 'a':
			seatLetter = 'A';
			j = 1;
			break;
			
			case 'B': case 'b':
			seatLetter = 'B';
			j = 2;
			break;
			
			case 'C': case 'c':
			seatLetter = 'C';
			j = 3;
			break;
			
			default: 
			j = 4;
			cout << "Invalid Row and Seat combination, please try again. \n";
		}	
	}while(j > 3);  //again if incorrect row or seat given
		
	
	//check if seat is already taken
	if(array[row-1][j-1] == 'X'){
		cout << "Sorry, seat " << row << seatLetter << " is already taken. \n";
		cout << "Returning to main menu.";
	}
	else{
		array[row-1][j-1] = 'X'; //Save seats array to make seat unavailable
		cout << "Seat " << row << seatLetter << " is reserved for " << fName << " " << lName << "\n";
		
		//get password from user
		cout << "Please enter a password to pull up reservation in the future: ";
		cin >> password;

		//save password to reservation file
		passwordOutputter.open(currentReservationFileName, ios::app); 
		passwordOutputter << password << " " << row << seatLetter << " " << fName << " " << lName << "\n";
		passwordOutputter.close( );
		
		
		//Test password strength
		
		//Test for digit in password
		 while (password[index7] != '\0' && doneIf1 == 0) //stop at end of file or if the password contains the test
		{
			if (isdigit(password[index7])){ 
			strengthOfPassword = strengthOfPassword + 1;        
			doneIf1 = 1;
			}
			index7++;           // Go to the next char in the string.
		}
		
		//clean out index and test results
		index7 = 0; 
		doneIf1 = 0;
		
		//Test for lowercase letter in password 
		while (password[index7] != '\0' && doneIf1 == 0) //stop at end of file or if the password contains the test
		{
			if (islower(password[index7])){ 
			strengthOfPassword = strengthOfPassword + 1;        
			doneIf1 = 1;
			}
			index7++;           // Go to the next char in the string.
		}
		
		//clean out index and test results
		index7 = 0;
		doneIf1 = 0;
		
		//Test for uppercase letter in password 
		while (password[index7] != '\0' && doneIf1 == 0) //stop at end of file or if the password contains the test
		{
			if (isupper(password[index7])){ 
			strengthOfPassword = strengthOfPassword + 1;        
			doneIf1 = 1;
			}
			index7++;           // Go to the next char in the string.
		}
		
		//clean out index and test results
		index7 = 0;
		doneIf1 = 0;
		
		//Test for punctuation in password 
		while (password[index7] != '\0' && doneIf1 == 0) //stop at end of file or if the password contains the test
		{
			if (ispunct(password[index7])){ 
			strengthOfPassword = strengthOfPassword + 1;        
			doneIf1 = 1;
			}
			index7++;           // Go to the next char in the string.
		}
		
		//clean out index and test results
		index7 = 0;
		doneIf1 = 0;

		
		//Let user know how strong their password is
		if(strengthOfPassword == 4){
			cout << "Thank you for supplying a very strong password! \n";
		}
		else{
			cout << "Your password can be easily guessed, your password is saved and can be used to find your reservation in the future. \n";
		}			

	}
}	
	



void outputReservation(){
//Preconditions: None
//Postcondition: Gets user password, looks up reservation, outputs Reservation info.
	
	const int SIZE = 45;
	char password[SIZE];
	ifstream reservationInputter; 
	bool badPassword = 0;
	char currentReservationFileName[256] = "reservations.dat";//Reservation file name
	int countReservationPassword = -1;	
	char tempPassFromFile[SIZE];
	char tempSeatFromFile[SIZE];
	char tempFNameFromFile[SIZE];
	char tempLNameFromFile[SIZE];
	const char clearPass1 = 'C';
	const char clearPass2 = 'C';
	
	//Get user password
	do{
		cout << "Please input your reservation password: \n";
		cin.ignore(); //clean any items that cin.readline may grab
		cin.getline(password, SIZE); 
		
		//open reservation file
		reservationInputter.open(currentReservationFileName);

		//test if file opened 
		if(reservationInputter.fail()) {
			cout << "File Load Error, Returning to Main Menu";
			badPassword = 0;
		}
		
		//test how many times password has been used for a reservation
		while(!reservationInputter.eof()) {
			reservationInputter >> tempPassFromFile >> tempSeatFromFile >> tempFNameFromFile >> tempLNameFromFile;
			
			if (strcmp(password, tempPassFromFile) == 0){
			countReservationPassword = countReservationPassword + 1;
			}
		}
		
		//close and reopen reservation file to be able to start at beginning again (probably a more efficient way to do this)
		reservationInputter.close( );
		
		reservationInputter.open(currentReservationFileName);

		//test if file opened 
		if(reservationInputter.fail()) {
			cout << "File Load Error, Returning to Main Menu";
			badPassword = 0;
		}
		
		//Test if password has been used for a reservation in the past
		if(countReservationPassword < 1){
			cout << "Password entered not recognized, please try again \n";
			badPassword = 1;
		}
		//Output the reservation(s)
		else{
			while(!reservationInputter.eof()) {
				reservationInputter >> tempPassFromFile >> tempSeatFromFile >> tempFNameFromFile >> tempLNameFromFile;
			
				if (strcmp(password, tempPassFromFile) == 0){
				cout << "Seat " << tempSeatFromFile << " is reserved for " << tempFNameFromFile << " " << tempLNameFromFile << "\n";
				tempPassFromFile[0] = clearPass1;
				tempPassFromFile[1] = clearPass2;
				}
			}
		}
			
	} while (badPassword);	//do the process again if password never used for reservation
	
	//close reservation file
	reservationInputter.close( );
}