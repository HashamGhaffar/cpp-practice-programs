#include <iostream>
#include <fstream>
using namespace std;

int main() {
//Controlling files
//reading in file
//tellp = returns the position of cursor
//seekp = used to move cursor left right in file
//ios::beg, end, cur
//while writing in file
//
//tellg = returns the position of cursor
//seekg = used to move right
//while reading from file


    ofstream write;
    write.open("test3.txt");//app means append
    write << "i love you"<<endl;
    write.seekp(2,ios::beg);
    write << "fuck ";
    
    write.close();// It's good practice to close the file after writing


    string st,line;
    ifstream read;
    read.open("test3.txt");//open (filename, mode)
    getline(read,line);//it will store full line in variable line
    read>>st;//it will store first word in string st
    cout<<st<<endl;
    cout <<line;
    read.close();// It's good practice to close the file after writing
    return 0;
}

















