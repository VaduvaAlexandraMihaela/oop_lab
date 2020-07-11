#include <iostream>

using namespace std;

class Student {
public:
	int grade;
	static int nr_students;
	Student(int grade){
		this->grade = grade;
		nr_students += 1;
	}
	~Student() {
		nr_students -= 1;
	}

};

int Student::nr_students = 0;

int main() {
	Student *new_student = new Student(7);
	cout << Student::nr_students << " students" << endl;
	Student *new_student2 = new Student(6);
	cout << Student::nr_students << " students" << endl;
	delete new_student2;
	cout << Student::nr_students << " students";

	getchar();
}