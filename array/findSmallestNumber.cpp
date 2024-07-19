#include <iostream>
using namespace std;

int main() {
    int num = 4 , index = 0;
    int array[num] = { 1 , -200 , -40 , 70 } ;
    int min = array[0];
    for ( int i=0 ; i<num ; i++ ) {
        if ( array[i] < min ) {
            min = array[i];
            index = i ;
        }
    }
    cout << "the smallest number is " << min <<endl;
    cout << "index : " << index <<endl;
    return 0;
}
