#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //Display all data of file in one line
    //Display all data of file as it is
    //Display all data of file in one line without space
    //Display first 5 characters of file
    //Display last 5 characters of file
    //Display all data of file after first 'a'
    //Count the num of characters in file
    //Count the num of words in file
    //Count num of lines in file
    //count num of p / spaces / vowels in file
    //store the second line in a variable
    //Display next 5 characters after first 'e'
    string data;
    ifstream file;
    file.open("test2.txt",ios::in);
    
    if(!file.is_open()) {
        cout << "file open error!"<<endl;
    } else {
    	while(!file.eof()) {
    		getline(file,data);
    		cout <<data <<endl;
	    }
    }
    return 0;
}






























