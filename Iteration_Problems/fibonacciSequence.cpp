#include <iostream>
using namespace std;
void fibonacciSequence(int num) {
    int sum1 = 0 , sum2 = 1 , sum = 0;
    while (sum<=num) {
        sum = sum1 + sum2 ;
        sum1 = sum2;
        sum2 = sum;
        if ( sum <= num ) {
            cout << sum <<endl;
        }
    }
}
int main() {
    int num;
    cout<< "Enter any number to fiand its Fibonacci sequence"<<endl;
    cin>> num;
    fibonacciSequence(num);
    
    return 0;
}
