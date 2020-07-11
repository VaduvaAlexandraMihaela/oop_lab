#include <iostream>

using namespace std;

struct nrComplex {
	int a, b;
};

int modul(double a) {
	return abs(a);
}

int modul(nrComplex x) {
	return sqrt(x.a*x.a + x.b*x.b);
}

int main() {
	nrComplex x;
	double y;
	x.a = 3;
	x.b = 5;
	y = -5;

	cout << modul(x) << endl;
	cout << modul(y) << endl;

	getchar();
}