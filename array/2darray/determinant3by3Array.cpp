#include <iostream>
using namespace std;

void arrayInputMethod(int array[3][3]) {
    for ( int i=0 ; i<3 ; i++ ) {
        for ( int j=0 ; j<3 ; j++ ) {
            cout << "enter element at "<< i+1 << j+1 << " : " ; 
            cin >> array[i][j];
        }
        cout << endl;
    }
}


int findDeterminantOf2by2Array(int array[3][3]) {
    int determinant , rezult1 , rezult2 , rezult3;
    // 00 01 02
    // 10 11 12
    // 20 21 22
    rezult1 = array[0][0] * (array[1][1] * array[2][2] - array[2][1] * array[1][2]);
    
    rezult2 = array[0][1] * (array[1][0] * array[2][2] - array[2][0] * array[1][2]);
    
    rezult3 = array[0][2] * (array[1][0] * array[2][1] - array[2][0] * array[1][1]);
    
    determinant = rezult1 - rezult2 + rezult3;
    return determinant;
}

int main() {
    int array[3][3];
    cout << "note! you are supposet to input 3by3 array to find the determinant of array."<<endl;
    arrayInputMethod(array);
    
    cout << "determinant of array is : " <<findDeterminantOf2by2Array(array);
    return 0;
}




