#include <iostream>
#include <string.h>

using namespace std; 

int f(int x){
	return sizeof(x);
}

int f(double x) {
	return sizeof(x);
}

int f(char *x) {
	return strlen(x);
}

int main() {
	int x = 10;
	cout << f(x) << endl;
	double y = -11;
	cout << f(y) << endl;
	char z[4] = "ana";
	cout << f(z);

	getchar();
}