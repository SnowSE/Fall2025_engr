
#include <iostream>
#include <string>
#include <climits>

using namespace std;

int i;

int add(int num) {
	num += 1000000000;
	int a = 20;
	int i = 3;
	i += 2;
	cout << num << endl;
	return i;
}

int main2() {
	srand(time(0));

	for (int j = 0; j < 10; j++) {
		cout << j << ": " << rand() % 256 << endl;
	}

	int num = 7;
	unsigned int num2 = 23;
	int a = 100;
	i = 0;

	add(num);
	num += i;

	cout << num << endl;
	cout << a;
	return 0;
}
