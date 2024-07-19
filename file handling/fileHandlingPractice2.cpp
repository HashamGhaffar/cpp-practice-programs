#include <iostream>
#include <fstream>
using namespace std;

int main() {
//ios::in reading file
//ios::out writing file
//ios::app everything will written at end
//ios::trunc erases everything
//ios::ate will be described later
//ios::binary opens file in binary mode
//ios::nocreate open failed if file doesn't exist
//ios::noreplace opens failed if file already exist


    ofstream write;
    write.open("test2.txt",ios::app);//app means append
    write << "newest data" <<endl;//it will write content in the file
    write.close();// It's good practice to close the file after writing


    string st,line;
    ifstream read;
    read.open("test2.txt");
    getline(read,line);//it will store full line in variable line
    read>>st;//it will store first word in string st
    cout<<st<<endl;
    cout <<line;
    read.close();// It's good practice to close the file after writing
    return 0;
}

















