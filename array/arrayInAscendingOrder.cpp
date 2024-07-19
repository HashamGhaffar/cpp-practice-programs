#include <iostream>
using namespace std;

void arrayInput(int array[] ,int  size) {
    for ( int i=0 ; i<size ; i++ ) {
        cin >> array[i];
    }
    
}

void findSmallestNumber(int array[] ,int size,int smallNumber) {
    smallNumber = array[0];
    for ( int i=size ; i<0 ; i-- ) {
        if(array[i] < array[0]) {
            smallNumber = array[i];
        }
    }
}

int main() {
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    cout << "enter the array : ";
    
    // array input by user
    arrayInput(array,size);
    
    // find the smallest number
    int smallNumber;
    findSmallestNumber(array,size,smallNumber);
    
    cout << smallNumber ;
    return 0;
}

