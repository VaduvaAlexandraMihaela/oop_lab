#include <iostream>

using namespace std;

template <typename T>
void interchange(T &a, T &b){
	T aux;
	aux = a; 
	a = b;
	b = aux;
}

int main() {
	int a, b;
	a = 2;
	b = 3;
	cout << a << " " << b << endl;
	interchange(a, b);
	cout << a << " " << b;

	getchar();
}