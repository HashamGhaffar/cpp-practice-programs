#include <iostream>
using namespace std;
int arrayInput(int array[] , int size) {
    
    for ( int i=0 ; i<size ; i++ ) {
        cin >> array[i];
    }
    return 0;
    
}
  
int arrayMaxElement(int array[] , int size) {
    int greater = array[0];
    for (int i = 0; i < size; i++) {
        if ( greater < array[i] ) {
            greater = array[i];
        }
    }
    return greater;
}

int main() {
    // up to line number 44 it will take the input regarding to array
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    arrayInput(array , size);
    
    // code to find the greater element 
    int greater =  arrayMaxElement(array , size);
    cout << "greater element of array is : " << greater << endl;
}













