#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

struct Point {
	int X; 
	int Y;
};

void add(int a, int b, int* sum) {
	*sum = a + b;
}

int main() {
	
	int a = 7, b = 12;
	int c = 0;
	int* ptr = &c;

	add(a, b, &c);

	cout << c << endl;

	a = 55; 
	b = 13;

	add(a, b, ptr);

	cout << *ptr << endl;

	return 0;
}


