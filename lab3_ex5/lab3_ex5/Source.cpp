#include <iostream>

using namespace std;

class Course {
public:
	string course_name;
	string teacher_name;
};

class Student {
public:
	static int nr_student; 
	string nume;
	string prenume;
	string grupa; 
	Course course;

	Student* next = NULL;
	Student* previous = NULL;

	Student() {
		nr_student += 1;
	}


};