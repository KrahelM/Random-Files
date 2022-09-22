/*File: pp4a.cpp
*	Author: Matthew Krahel and Blake Hodges
*	This program randomly selects one card 
*	from a regular 52-card deck of cards. 
*/

// Identifying the libraries and namespaces used in this program
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Begin Main Function
int main()
{
	// Declare the variable
	string cardFaceName; //Value of the card 
	string cardSuitName; //Suit of the card 
	int randomCardFace; //Random Number to be related to the value
	int randomCardSuit; //Random Number to be related to the suit
	const int ACE = 1;
	const int TWO = 2;
	const int THREE = 3;
	const int FOUR = 4;
	const int FIVE = 5;
	const int SIX = 6;
	const int SEVEN = 7;
	const int EIGHT = 8;
	const int NINE = 9;
	const int TEN = 10;
	const int JACK =11;
	const int QUEEN = 12;
	const int KING = 13;
	const int SPADES = 1;
	const int CLUBS = 2;
	const int HEARTS = 3;
	const int DIAMONDS = 4;
	

	// Put a random number in for both variables
	srand( time(NULL) ); //Seed once
	randomCardFace = 1 + rand() % 13;	
	randomCardSuit = 1 + rand() % 4;	

	// Apply card value based on random number
	switch (randomCardFace) { 
		case ACE:
		cardFaceName = "Ace";
		break;
		case TWO:
		cardFaceName = "Two";
		break;
		case THREE:
		cardFaceName = "Three";
		break;
		case FOUR:
		cardFaceName = "Four";
		break;		
		case FIVE:
		cardFaceName = "Five";
		break;
		case SIX:
		cardFaceName = "Six";
		break;
		case SEVEN:
		cardFaceName = "Seven";
		break;
		case EIGHT:
		cardFaceName = "Eight";
		break;			
		case NINE:
		cardFaceName = "Nine";
		break;
		case TEN:
		cardFaceName = "Ten";
		break;
		case JACK:
		cardFaceName = "Jack";
		break;
		case QUEEN:
		cardFaceName = "Queen";
		break;			
		case KING:
		cardFaceName = "King";
		break;							
		default:
		cout << "ERROR1";
	}		
	
	// Apply card suit based on random number
	switch (randomCardSuit) { 
		case SPADES:
		cardSuitName = "spades";
		break;
		case CLUBS:
		cardSuitName = "clubs";
		break;
		case HEARTS:
		cardSuitName = "hearts";
		break;
		case DIAMONDS:
		cardSuitName = "diamonds";
		break;		
		default:
		cout << "ERROR2";
	}	
	
	cout << cardFaceName << " of " << cardSuitName << "\n";
	
	return( 0 );
}	


