#include <iostream>
using namespace std;

class Teacher {
  public : 
  int grade ;
  string name , subject ;
   void setCrush(string c) {
        crush = c;
    }
  string getCrush() {
       return crush;
  }
  
  private: 
  string crush ;
  int sallery ;
};

int main() {
    
    Teacher t1;
    cout << t1.name << t1.subject << endl;

    t1.name = "hasham";
    t1.subject = "comp";
    
    cout << t1.name << " " << t1.subject << endl << "following is private members" << endl;
    
    t1.setCrush("ayiesha");
    
    cout << "pirated data " << t1.getCrush() ;
    

    return 0;
}