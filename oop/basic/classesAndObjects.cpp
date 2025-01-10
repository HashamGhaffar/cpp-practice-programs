#include <iostream>
using namespace std;

class teacher {
    public:
    string name, subject;
    int age, sallery;
};

int main() {
    teacher t1;
    t1.name = "Hasham";
    cout << t1.name;

    return 0;
}
