
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

int main() {
    double x;
    int hashCode;
    int hCompressed;
    int a = 6;
    int n = 8;
    int N = 997;
    int b = 17;
    int c = 59;
 
    //Get user key
    cout << "Enter a double key (0 to end):";
    cin >> x;
   
    while ( x != 0) {
    
        //Make key into char array
        int len = sizeof( x );
        const char* p = reinterpret_cast<const char*>(&x);
    
        //create hashCode using cyclic shift
        hashCode = (unsigned int) p[0];
        for( int i = 1; i < len; i++ ) {
            hashCode = (hashCode << a ) | (hashCode >> (n-a));
            hashCode += (unsigned int) p[i];
        }

        //Compress hashcode using MAD
        hCompressed = abs( b * hashCode + c ) % N;
    
        cout << "Compressed hash code: " << hCompressed << endl;
    
        //Get user key
        cout << "Enter a double key (0 to end):";
        cin >> x;
    
    }
    
	return 0;
}
