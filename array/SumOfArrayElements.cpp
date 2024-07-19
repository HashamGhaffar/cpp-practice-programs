#include <iostream>
using namespace std;
  
int arrayInput(int array[] , int size) {
    
    for ( int i=0 ; i<size ; i++ ) {
        cin >> array[i];
    }
    return 0;
    
}
  
int sumArray(int size, int array[]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}


int main() {
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    
    int sumList[size];
    arrayInput(sumList , size);
    int sum = sumArray(size, sumList); 
    cout << "the sum of array is : " << sum; 
    return 0;
}
