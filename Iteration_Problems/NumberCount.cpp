#include <iostream>
using namespace std;

int main () {
	int num , count = 0 ;
	cout << "Enter you number and this code will tell you the amount of numbers in your input : ";
	cin >> num ; //num = 40
	 

	do {
		count++;
		num = num / 10 ;
	}while(num > 0);
	
	cout << "there are total : " << count << " numbers" ;
}