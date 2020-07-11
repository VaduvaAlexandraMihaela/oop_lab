#include <iostream>

using namespace std;

int f(float n, bool isRoundedto100 = false){
	if (isRoundedto100 == false)
		return int(n);
	else
		return int(n / 100) * 100;
}

int main()
{
	cout << f(float(12.5), true);

	getchar();
}