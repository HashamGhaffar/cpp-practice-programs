#include <iostream>
using namespace std;

int main() {
    int number;
    
    for (int i=0 ; i<= 4 ; i++){
       for (int c=0 ; c<= i ; c++) {
           cout << "*";
       }
       cout <<endl;
       
    }
    return 0;
}

