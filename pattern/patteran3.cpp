#include <iostream>
using namespace std;

int main() {
    int number;
    
    for (int i=0 ; i<= 5 ; i++){
       for (int c=5 ; c>= i ; c--) {
           cout << "*";
       }
       cout <<endl;
       
    }
    return 0;
}

