/* File: pp6c.cpp
 * Author: Blake Hodges and Matthew Krahel.
 * This program prompts the user for a word twice and reads only the first
 *word typed in entry
 */

//Declare Libraries and namespaces used
 #include <iostream>
 #include <string>
 using namespace std;

 //readline function declaration
 //Precondition: function has a self defined char variable that is used
 //in the function body.
 //Post Condititon: function performs the get function again the cin object to
 //check for first empty space or new line
 void readline();
//Begin main function
 int main() {
    //Declare string variables
    string word1;
    string word2;
    //Prompt user for entry
    cout << "Please enter a word \n";
    cin >> word1;
    //Function call for readline function.
    readline();

    //Prompt user for second word.
    cout << "Please enter another word \n";
    cin >> word2;
    //Function call for readline function
    readline();

    //print first word and second word after readline functions
    cout << word1 << " " << word2 <<endl;

    //return success to OS
    return 0;
 }

 //readline function
 //Precondition: function has a self defined char variable that is used
 //in the function body.
 //Post Condititon: function performs the get function again the cin object to
 //check for first empty space or new line
 void readline(){
    char character;
    do{
      cin.get(character);
   }while (character != '\n');
}
