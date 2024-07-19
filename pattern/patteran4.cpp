#include <iostream>
using namespace std;

int main() {
    int number , row = 5;
    
    for (int i=0 ; i<= row ; i++){
       for (int c=i ; c< row ; c++) {
           cout <<" ";
       }
       for (int c=0 ; c<= i ; c++) {
           cout << "*";
       }
       
       cout << endl ;
	}
    return 0;
}
