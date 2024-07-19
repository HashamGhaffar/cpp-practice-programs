#include <iostream>
using namespace std;

int main() {
    int num = 4, index;
    int array[num] = { 1, 20, 40, 70 };
    int max = array[0];
    for (int i = 0; i < num; i++) {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }
    cout << "the greater number is " << max << endl;
    cout << "index : " << index << endl;
    return 0;
}
