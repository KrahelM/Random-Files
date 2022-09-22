#ifndef MYPAIR_H
#define MYPAIR_H

template<class T1, class T2>
class MyPair {
private:
   T1 key;
   T2 value;
public:
   MyPair() {};
   MyPair(T1 k, T2 v );
   void setKey( T1 k );
   void setValue( T2 v );
   T1 getKey() const { return key; }
   T2 getValue() const { return value; }
};
 
template<class T1, class T2>
MyPair<T1,T2>::MyPair( T1 k, T2 v ) {
   key = k;
   value = v;
}
 
template<class T1, class T2>
void MyPair<T1,T2>::setKey( T1 k ) {
   key = k;
}
 
template<class T1, class T2>
void MyPair<T1,T2>::setValue( T2 v ) {
   value = v;
}






#endif
