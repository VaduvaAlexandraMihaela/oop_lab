#include <iostream> 

using namespace std; 

unsigned char f(int a) {
	return(a&(1 << sizeof(int))) >> sizeof(int);
}

unsigned char f(double a){
	return (int(a) & (1 << sizeof(int))) >> sizeof(int);
}

char f(char *s) {
	return s[0];
}

int main() {
	cout << f(-11) << endl;
	cout << f(-121.112) << endl;
	char s[4] = "ana";
	cout << f(*s);

	getchar();
}