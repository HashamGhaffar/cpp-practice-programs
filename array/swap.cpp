#include <iostream>
using namespace std;

void arrayElementIn( int size ,int array[] ) {
	
	for ( int i=0 ; i<size ; i++ ) {
		cout << "enter the value number " << i+1 << ": " ;
    	cin >> array[i] ;
	}
}

void arrayElementSwap( int size ,int array[] ,int iteration ) {
	int j = size - 1 ;
    for ( int i=0 ; i < iteration ; i++ ) {
    	int acending = 0;
    	acending = array[i];
    	array[i] = array[j];
    	array[j] = acending;
    	j--;
	}
}

void arrayElementOut( int size ,int array[] ) {
	for ( int i=0 ; i<size ; i++ ) {
    	cout<< " the value number " << i+1 << " is : " << array[i] <<endl ;
	}
}

int main() {
    int size;
    cout << "enter size of array : ";
    cin >> size ;
    int iteration;
    cout << "enter number of iteration (must smaller than " << size/2 << ") : ";
    cin >> iteration;
    if ( iteration < size/2 ) {
	
	
    int array[size];
    cout << endl;


    arrayElementIn(size , array);

	arrayElementSwap(size , array, iteration);
	
	arrayElementOut(size , array);
	
	}
	else {
		cout << "Sorry for trouble but number of iteration must be smaller than "<< size/2 <<endl;
	}
	
}














