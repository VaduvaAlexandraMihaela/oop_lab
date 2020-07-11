#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	int id_student;
	static int nr_students;
	Student* next;
	Student* head = NULL;
	Student() {
		nr_students += 1;
		}
	void add_student() {
		Student *temp = new Student();
		temp->id_student = nr_students;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			delete temp;
		}
		else
		{
			while (head->next != NULL)
				head = head->next;
			head->next = temp; 
			head->next->id_student = nr_students;
			delete temp;
		}
	}
	void display_students(int index) {
		Student *temp = new Student();
		temp = head;
		for (int i = 0; i < index - 1; i++) {
			temp = temp->next;
		}
		cout << "Student: " << temp->id_student << endl;

		while (temp->next != NULL) {
			cout << "Student: " << temp->id_student << endl;
			temp = temp->next;
		}
		delete temp;
	}
};

int Student::nr_students = 0;

int main() {
	Student *new_student_list = new Student();
	for (int i = 0; i < 10 - 1; i++) {
		new_student_list->add_student();
	}
	new_student_list->display_students(5);

	getchar();
}