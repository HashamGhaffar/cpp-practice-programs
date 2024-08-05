#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;// not prime
        
    for (int i = 2; i <= num; i++) {
        if (num % i == 0)
            return false;// not prime
    }
    
//    if (num == 2)// its an edge case
//        return false;// not prime
//    
    return true;// is prime
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}

