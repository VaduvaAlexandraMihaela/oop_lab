#include <iostream>
#include <string>

using namespace std;

struct pisica {
	string nume; 
	string stapan;
	int age;
};

struct persoana {
	string nume;
	string prenume;
	int age;
};

struct masina {
	string marca;
	int nrinmatriculare;
	int age;
};

template <typename T>
T min_Age(T a, T b) {
	return a.age > b.age? b : a;
}
template <typename T>
bool same_Age(T a, T b) {
	return a.age == b.age ? true : false;
}

int main() {
	struct persoana persoana_1, persoana_2;
	persoana_1.nume = "Vaduva";
	persoana_1.prenume = "Alexandra";
	persoana_1.age = 20;
	persoana_2.nume = "Vaduva";
	persoana_2.prenume = "Cristina";
	persoana_2.age = 15;
	cout << same_Age(persoana_1, persoana_2) << endl;
	cout << min_Age(persoana_1, persoana_2).nume << " " << min_Age(persoana_1, persoana_2).prenume;

	getchar();
}