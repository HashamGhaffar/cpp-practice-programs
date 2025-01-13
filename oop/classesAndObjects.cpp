#include <iostream>
#include <vector>
using namespace std;

class Student {
    public:
    string name, rollNum, classs, section;
    int age, marks;

    Student(string n, string r, string c, string s, int a, int m) {
        name = n;
        rollNum = r;
        classs = c;
        section = s;
        age = a;
        marks = m;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNum << endl;
        cout << "Class: " << classs << endl;
        cout << "Section: " << section << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    Student s1("Hasham", "01", "10th", "A", 15, 85);
    Student s2("Ali", "02", "10th", "B", 16, 90);
    Student s3("Sara", "03", "10th", "A", 15, 88);

    vector<Student> students = {s1, s2, s3};

    for (Student s : students) {
        s.displayInfo();
    }

    return 0;
}jjj
