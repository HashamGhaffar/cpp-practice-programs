#include <iostream>
using namespace std;

void reverseInput( int size ) {
    int num[size];
    
    for (int i = (size-1) ; i >= 0; i--) {
        cin >> num[i];
    }
    cout << "there is the reversed array."<<endl;
    for (int i = 0; i < size; i++) {
        cout << num[i] <<endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of array : " ;
    cin >> size;
    reverseInput(size);
    return 0;
}
