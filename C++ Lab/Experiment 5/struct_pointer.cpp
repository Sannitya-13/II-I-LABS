#include <iostream>
#include <string>
using namespace std;
struct student{
    string name;
    int roll_no;
    string branch;
    int marks; 
    public:
        void read(){
            cout << "enter name, roll_no, branch, marks:";
            cin >> name >> roll_no >> branch >> marks;
          }
        void display(){
              cout << "student name is " << name << endl;
              cout << "student roll_no is " << roll_no << endl;
              cout << "student branch is " << branch << endl;
              cout << "student marks are " << marks;
                    }
    };
    
int main()
{ 
   student s1;
   student *ptr = &s1;
   ptr -> read();
   ptr -> display();
   
   return 0;
  }

