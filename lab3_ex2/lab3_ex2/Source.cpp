#include <iostream>

using namespace std;

class Student {
private:
	int grade;
	Student() {
		this->grade = 8;
	}
public:
	 static Student* create() {
		return new Student();
	}
	 int getGrade() {
		 return this->grade;
	 }
};

int main() {
	Student *student = Student::create();
	cout << student->getGrade();

	getchar();
}