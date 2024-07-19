#include <iostream>
using namespace std;
int arrayInput(int array[] , int size) {
    
    for ( int i=0 ; i<size ; i++ ) {
        cin >> array[i];
    }
    return 0;
    
}
  
bool findRepNum(int array[] , int size , int repNum) {
    for ( int i=0 ; i<size ; i++ ) {
        if ( array[i] == repNum ) {
            return true;
        }
    }
    return false;
}

int main() {
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    
    arrayInput(array , size);
    
    cout << "enter the number you want to ckeak in : " ;
    int repNum;
    cin >> repNum;
    bool num = findRepNum(array , size , repNum);
    if (num == true) {
        cout << true;
    } else {
        cout << false;
    }
}
