#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter a number as limit to loop" <<endl;
//    cin >> number ;
    for (int i=1 ; i<= 100 ; i++){
        if ((i % 3 == 0) && (i % 5 == 0)) {
            cout << "fizz buzz"<<endl;
        }
        else {
        	if (i % 3 == 0) {
            cout << "fizz "<<endl;
        	} 
        	
        	else if (i % 5 == 0) {
        		cout << "buzz "<<endl;
			}
			
			else {
				cout << i <<endl;
			}
        	
		}
    }
    return 0;
}

