#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1 , sum;
    cout << "Enter your number to find the factorial: ";
    cin >> num; // num = 55    

    for ( int i = 1 ; i <= num ; i++ ) {
    	
    	factorial = factorial * i ;
	}

//	while () {
//		
//	}
	
	cout << "factorial of number " << num << " is equal to " << factorial << endl ;
}

