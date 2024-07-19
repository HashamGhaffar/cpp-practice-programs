#include <iostream>
using namespace std;

//	declearing a Structure 
	struct student {
		int id;
		float cgpa;
		char grade;
		string name;
		int rollnum;
	};
	
int main() {
	student student1;//there student is you own datatype
//	you can declear a structure in main body
	student1 = {1, 3.75, 'A', "John Doe", 12345};
	cout << student1.id;
	return 0;
}














