#include <iostream>
using namespace std;

void arrayInputMethod(int array[2][2]) {
    for ( int i=0 ; i<2 ; i++ ) {
        for ( int j=0 ; j<2 ; j++ ) {
            cout << "enter element at "<< i+1 << j+1 << " : " ; 
            cin >> array[i][j];
        }
        cout << endl;
    }
}


int findDeterminantOf2by2Array(int array[2][2]) {
    int determinant;
    // 00 01
    // 10 11
    determinant = (array[0][0]*array[1][1]) -(array[1][0]*array[0][1]);
    return determinant;
}

int main() {
    int array[2][2];
    cout << "note! you are supposet to input 2by2 array to find the determinant of array."<<endl;
    arrayInputMethod(array);
    
    cout << "determinant of array is : " <<findDeterminantOf2by2Array(array);
    return 0;
}
