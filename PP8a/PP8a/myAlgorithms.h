#ifndef MYALGORITHMS_H
#define MYALGORITHMS_H


/* mySwap: template function that swaps the actual values of it parameters
    Parameters: two items to swap
   Pre-condition: type T has operator= defined
   Returns: nothing
*/
template<class T>
void mySwap( T& item1, T& item2 ) {
    T temp;
    temp = item1;
    item1 = item2; 
    item2 = temp;
}


/* myMin: template function that finds the minimum of its parameters and returns it
    Parameters: two items to compare
   Pre-condition: type T has operator< defined
   Returns: min of the two
*/
template<class T>
T& myMin( T& item1, T& item2 ) {
   
    if( item1 < item2){
        return item1;
    }
    return item2;
}

/* mySort: template function that sorts an array 
    Parameters: an array to sort and the array size 
   Pre-condition: type T has operator< and operator= defined
   Returns: nothing
*/
template<class T>
void mySort( T[]& item1, int count) {
    int min = 1;
    T[count] temp;
   
    for( int i = count - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if( T[i] > T[i+1] ){
                mySwap( T[i], T[i+1]);
            }
        }
    }
}

/* mySearch: template function that finds index of the array where the key is found
    Parameters: an array, array size, and the key to find in the array
   Pre-condition: type T has operator== defined
   Returns: the index found or -1 if not found
*/
template<class T>
int myMin( T[]& item1, int count,  T& key ) {
   
    for( int i = 0; i < count, i++){
        if(T[i] == key){
            return i;
        }
    }
    return (-1);
}

#endif