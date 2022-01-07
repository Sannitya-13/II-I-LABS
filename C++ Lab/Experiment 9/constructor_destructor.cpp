#include<iostream>
#include<string>
using namespace std;
class student {
	public:
		int roll_no;
		string name;
		char grade;
		student() {
			roll_no = 123;
		}
		student(int roll_no, string name, char grade) {
			this -> roll_no = roll_no;
			this -> name = name;
			this -> grade = grade;
		}
		student(student &s1) {
			roll_no = s1.roll_no;
			name = s1.name;
			grade = s1.grade;
			
		}
		void read() {
			cout << "enter the details of the student";
			cin >> roll_no >> name >> grade;
		}
		void display() {
			cout << roll_no << endl << name << endl << grade << endl;
		}
		~student() {
			cout << "destructor is called" << endl;
        }
};
int main() {
	student s1(123, "XYZ", 'A');
	s1.read();
	s1.display();
	student s2(s1);
        return 0;
}

