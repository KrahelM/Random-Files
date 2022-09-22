#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <utility>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

class student {
private:
    string firstName;
    string lastName;
    string idNumber;
    double gpa;


public:
    //Default Constructor
    student(){
        firstName = "";
        lastName = "";
        idNumber = "";
        gpa = 0;
    };
    //4-arg constructor
    //Parameters:
    // f student first name
    // l student last name
    // id student id number
    // g student gpa
    student(string f, string l, string id, double g){
        firstName = f;
        lastName = l;
        idNumber = id;
        gpa = g;
    };
    //get functions
    string getFirstName() const {return firstName;};
    string getLastName() const {return lastName;};
    string getIdNumber() const {return idNumber;};
    double getGpa() const {return gpa;};
    
    //overloaded << operator
    //parameters:
    // outstream the output stream
    // s the student
    friend ostream& operator<<(ostream& outStream, student& s){
    outStream << s.firstName << " " << s.lastName << " " << s.idNumber << " " << s.gpa;
    return outStream;
    };
    
    //overloaded < operator
    //parameters:
    // 2 students to compare
    //returns true if first students last name is less than seconds students last name
    friend bool operator<(const student& s1, const student& s2){
        return (s1.lastName < s2.lastName);
    };
    
    friend class DescendingOrder;
};


class DescendingOrder {
public:
    bool operator()(student& s1, student& s2) {
        return (s1.idNumber > s2.idNumber);
	}

};

//compareStudentsFunction compares 2 students based on a key and returns if one is less 
// than the other
//parameters:
// 2 pairs to compare that have both a key and a student
// returns true if student one's key is less than student two's key
bool compareStudentsFunction( const pair<string, student>&, const pair<string, student>&);




int main() {
    string idToSearch;
    
    
    //Create student class variables
    student s1("April", "Adams", "a1a1a1", 4.0);
    student s2("Henry", "Hunt", "h8h8h8", 0.5);
    student s3("David", "Dunn", "d4d4d4", 2.5);
    student s4("Carol", "Cook", "c3c3c3", 3.0);
    student s5("Elliott", "Evans", "e5e5e5", 2.0);
    student s6("John", "Jacobs", "j10j10j10", 4.2);
    student s7("George", "Grant", "g7g7g7", 1.0);
    student s8("Beth", "Bolt", "b2b2b2", 3.5);
    student s9("Isaac", "Irving", "i9i9i9", 0.1);
    student s10("Frank", "Ford", "a2a2a2", 1.5);
   
    map<string,student> studentMap;
   
    //Output welcome message
    cout << "\nHello User, \nWelcome to the Student Information Portal \n";
   
    //Initialize Map
    studentMap[s1.getIdNumber()] = s1;
    studentMap[s2.getIdNumber()] = s2;
    studentMap[s3.getIdNumber()] = s3;
    studentMap[s4.getIdNumber()] = s4;
    studentMap[s5.getIdNumber()] = s5;
    studentMap[s6.getIdNumber()] = s6;
    studentMap[s7.getIdNumber()] = s7;
    studentMap[s8.getIdNumber()] = s8;
    studentMap[s9.getIdNumber()] = s9;
    studentMap[s10.getIdNumber()] = s10;
    
    //Create map iterator
    map<string, student>::iterator it;
    
    //Print student with minimum last name
    it = min_element(studentMap.begin(), studentMap.end(), compareStudentsFunction);
    cout << "\nStudent with minimum last name:\n" << it->second << "\n";

 
    cout << "\nStudents in Descending Order: \n";
    for( it = studentMap.begin(); it != studentMap.end(); it++ ) {
        cout << it->second << endl;
    }
   
    
    //Print User's Student ID entry
    cout << "Please enter student ID to find (type 0 to end): ";
    cin >> idToSearch;
    if(idToSearch != "0"){ //confirm user wants to search an id
        do{
            it = studentMap.find(idToSearch);
            if(it != studentMap.end()){ //id found
                cout << "\nStudent with id: " << idToSearch << "\n" << it->second << "\n";
            } else { //id not found
                cout << "\nNo student found with id: " << idToSearch << " Please try again \n";
            }  
            //get new id to search then loop
            cout << "Please enter student ID to find (type 0 to end): ";
            cin >> idToSearch;
        
        }while(idToSearch != "0"); //While user wants to continue to search for id
    }
    //Send goodbye message
    cout << "\nThank you for using the Student Information Portal \n";
    
    return 0;
}


//compareStudentsFunction compares 2 students based on a key and returns if one is less 
// than the other
//parameters:
// 2 pairs to compare that have both a key and a student
// returns true if student one's key is less than student two's key
bool compareStudentsFunction( const pair<string, student>& p1, const pair<string, student>& p2){
    return (p1.first < p2.first);
}