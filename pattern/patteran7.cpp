#include <iostream>
using namespace std;

int main() {
//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *
    int row = 5;
    for ( int i=0 ; i<row ; i++ ) {
       for ( int j=i ; j<row ; j++ ) {
	cout << " ";
       }
       for ( int k=0 ; k<i ; k++ ) {
       	cout << "* ";
       }
       cout << endl;
    }
    
    for (int i=0 ; i< row ; i++) {
       for (int j=0 ; j< i ; j++) {
           cout <<" ";
       }
       for (int k=i ; k<row ; k++) {
           cout << "* ";
       }
       cout << endl ;
     }
     
    return 0;
}
