#include <iostream>
using namespace std;

int main() {
    int row = 5;
    
    for (int i=0 ; i< row ; i++){
       for (int c=0 ; c< i ; c++) {
           cout <<" ";
       }
       for (int c=i ; c<row ; c++) {
           cout << "*";
       }
       
       cout << endl ;
	}
    return 0;
}
