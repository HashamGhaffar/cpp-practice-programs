#include <iostream>
using namespace std;

void calculateIncrements(int pay[], int num) {
    for (int i = 0; i < (num - 1); i++) {
        int Percentage = ((pay[i + 1] - pay[i]) * 100 / pay[i]);
        cout << "Your " << i + 1 << " incrementation is " << Percentage << " %" << endl;
    }
}

int main() {
    int num;
    cout << "Enter the number of salaries you want to request for processing: ";
    cin >> num;
    const int size = num;

    int pay[size];
    cout << "Please enter your respective data regarding your pay." << endl;
    for (int i = 0; i < num; i++) {
        cin >> pay[i];
    }

    calculateIncrements(pay, num);

    return 0;
}

