
#include <iostream>
#include <string>
//#include <>
using namespace std;

void bar();
int add(int a, int b) {
	a = a * 2;
	cout << "add() a: " << a << endl;
	int c = a + b;
	return c;
}

int main() {

	int a = 3 + 4;

	int sum2 = add(add(a, 4), 2);
	
	cout<< "main() a: " << a << endl;
	cout << sum2 << endl;

	return 0;
}



void bar() {


	return;
}













