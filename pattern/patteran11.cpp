#include <iostream>
using namespace std;

int main() {
    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *
    //   * * * * *
    //     * * *
    //       *

   for ( int i=0 ; i<=8 ; i++ ) {
       for ( int k=i ; k<8 ; k++ ) {
           cout <<"  ";
       }
       if ( i%2==0 ) {
       for ( int j=0 ; j<=i ; j++ ) {
               cout << "*   ";
       }
       }
      cout <<endl;
   }
  cout << endl;
   for ( int i=6 ; i>=0 ; i-- ) {
       for ( int k=i ; k<8 ; k++ ) {
           cout <<"  ";
       }
       if ( i%2==0 ) {
       for ( int j=0 ; j<=i ; j++ ) {
               cout << "*   ";
       }
       }
      cout <<endl;
   }
   
    return 0;
}
