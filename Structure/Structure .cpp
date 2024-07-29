#include <iostream>
using namespace std;

int main() {
    struct student {
        string name;
        int rollnum;
        int marks;
        string grade;
    };
    
    student slip1;
    cout << "enter your name : ";
    cin >> slip1.name;
    cout << "enter your rollnum : ";
    cin >> slip1.rollnum;
    cout << "enteryour marks : ";
    cin >> slip1.marks;
    cout << "enter your grade";
    cin >> slip1.grade;
    
    
    cout << "your name is " << slip1.name << endl << "your ro  number is " << slip1.rollnum << endl << "your marks is " << slip1.marks << endl << "your grade is " << slip1.grade <<endl;
    
    

    return 0;
}
















