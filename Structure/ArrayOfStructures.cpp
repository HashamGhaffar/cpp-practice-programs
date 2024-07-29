#include <iostream>
using namespace std;

struct student {
    string name;
    int rollnum;
    int marks;
};

string GetSuffix(int count) {
    if (count >= 4) {
        cout << "th";
    }else if (count == 3) {
        cout << "rd";
    } else if (count == 2) {
        cout << "nd";
    } else {
        cout << "st";
    }
    return " ";
    
}

int main() {
    student array[4];

    for (int i = 1; i < 5; i++) {
       
            cout << "enter name of "<<i <<GetSuffix(i) <<" student : ";
            cin >> array[i].name;

            cout << "roll number of "<< i << GetSuffix(i) <<" student : ";
            cin >> array[i].rollnum;

            cout << "marks of " <<i <<GetSuffix(i) <<" student : ";
            cin >> array[i].marks;

            cout << endl << endl;
        
    }

    return 0;
}











