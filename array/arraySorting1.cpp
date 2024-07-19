#include <iostream>
using namespace std;

void swapTwoNum(int &num1 , int &num2) {
    int box;
    box = num1;
    num1 = num2;
    num2 = box;
}

void inputarray(int array[],int size) {
    for ( int i=0 ; i<size ; i++ ) {
        cin >> array[i];
    }
}

void sortingArray(int array[] , int size) {
    for ( int i=0 ; i<size ; i++ ) {
        for ( int j=0 ; j<size ; j++ ){
            if ( array[i] < array[j]  ) {
                swapTwoNum(array[i],array[j]);
            }
        }
    }
}

int main() {
    int size;
    cout << "enter the size of array : ";
    cin >>size;
    int array[size];
    inputarray(array,size);
    
    // sorting array 
    for ( int i=size ; i>0 ; i-- ) {
        sortingArray(array , size);
    }
    
    // executing array
    for ( int i=0 ; i<size ; i++ ) {
        cout <<array[i];
    }
    return 0;
}
