#include <iostream>
using namespace std ;
int main () {
	int num ;
	cout << "Please input a number to determine whether it is even or odd : ";
	cin >> num;
	 
	if ( num % 2 == 0) {
		cout << "The number you enter is even.";
	}
	
	else {
		cout << "The number you enter is odd.";
	}
}
