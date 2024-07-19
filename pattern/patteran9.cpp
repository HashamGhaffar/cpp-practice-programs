#include <iostream>
using namespace std;

int main() {
    //       *
    //     * *
    //   * * *
    // * * * *
    //   * * *  
    //     * *
    //       *
   for ( int i=0 ; i<=4 ; i++ ) {
       for ( int k=i ; k<4 ; k++ ) {
           cout <<"   ";
       }
       for ( int j=0 ; j<i ; j++ ) {
           cout << "*  ";
       }
       cout <<endl;
   }
   for ( int i=3 ; i>=0 ; i-- ) {
       for ( int k=i ; k<4 ; k++ ) {
           cout <<"   ";
       }
       for ( int j=0 ; j<i ; j++ ) {
           cout << "*  ";
       }
       cout <<endl;
   }
    return 0;
}
