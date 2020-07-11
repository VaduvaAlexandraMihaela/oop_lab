#include <iostream>

using namespace std;

class Student {
public:
	int grade;
	Student(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return grade;
	}
	void setGrade(int g) {
		grade = g;
	}
};

int main() {
	Student student1(6);
	Student *student2 = new Student(9);

	cout << student1.getGrade() << endl;
	cout << student2->getGrade();

	getchar();
}