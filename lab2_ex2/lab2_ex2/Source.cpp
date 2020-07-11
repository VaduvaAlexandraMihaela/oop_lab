#include <iostream>
#include <string>

using namespace std;

struct Student {
	int nota;
	string name;
};

template <typename T>
T Max(T a, T b) {
	return a.nota < b.nota ? b : a;
}

int main() {
	Student a, b;
	a.nota = 7;
	a.name ="marin";
	b.nota = 10;
	b.name = "popescu";

	cout << Max(a, b).name;

	getchar();
}