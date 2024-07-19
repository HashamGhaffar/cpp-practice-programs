#include <iostream>
using namespace std;
int arrayInput(int array[] , int size) {
    
    for ( int i=0 ; i<size ; i++ ) {
        cin >> array[i];
    }
    return 0;
    
}

int main() {
    int size1 , size2;
    cout << "enter the size of first array : ";
    cin >> size1;
    int array1[size1];
    arrayInput(array1 , size1);
    
    cout << "enter the size of second array : ";
    cin >> size2;
    int array2[size2];
    arrayInput(array2 , size2);
    
    // merge both two arrays 
    int sumSize = size1 + size2;
    int mergedArray[sumSize];
    for ( int i=0 ; i<size1 ; i++ ) {
        mergedArray[i] = array1[i];
    }
    for ( int i=0; i<size2 ; i++ ) {
        mergedArray[size1] = array2[i];
        size1++;
    }
    for ( int i=0 ; i<sumSize ; i++ ) {
        cout << mergedArray[i] << " ";
    }
}
