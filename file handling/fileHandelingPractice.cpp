#include <iostream>
#include <fstream>
using namespace std;

int main() {
//     file handeling
//    create
//    open 
//    write
//    read
//    close

//    if you want to write in the file then use ofstream
    ofstream write("test1.txt");//this function will create a file
    write << "my name is hashaam" <<endl;
    write << "i am studing file handling" <<endl;//it will write content in the file
    write.close();// It's good practice to close the file after writing

//  if you want to write in the file then use ofstream
    string st,line;
    ifstream read("test1.txt");
    getline(read,line);//it will store full line in variable line
    read>>st;//it will store first word in string st
    cout<<st<<endl;
    cout <<line;
    read.close();// It's good practice to close the file after writing
    return 0;
}

















