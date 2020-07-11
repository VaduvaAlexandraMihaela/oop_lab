#include <iostream>

using namespace std;

template <typename T>
T  max(T a, T b, T c){
	int d = a < b ? b : a;
	return d > c ? d : c;
}

int main() {
	int a, b, c;
	a = 2;
	b = 4;
	c = 1;
	cout << max(a, b, c);

	getchar();
}