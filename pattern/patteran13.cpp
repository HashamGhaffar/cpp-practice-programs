#include <iostream>
using namespace std;

int main() {
// *                                 * 
// * *                             * * 
// * * *                         * * * 
// * * * *                     * * * * 
// * * * * *                 * * * * * 
// * * * * * *             * * * * * * 
// * * * * * * *         * * * * * * * 
// * * * * * * * *     * * * * * * * * 
// * * * * * * * * * * * * * * * * * * 

       for (int i=0 ; i<= 8 ; i++){
        for (int c=0 ; c<= i ; c++) {
           cout << "* ";
        }
        for (int j=8 ; j>i ; j-- ) {
            cout <<"  ";
        }
        for (int j=8 ; j>i ; j-- ) {
            cout <<"  ";
        }
        for (int l=0 ; l<= i ; l++) {
           cout << "* ";
        }
        cout <<endl;       
    }
   
    return 0;
}
