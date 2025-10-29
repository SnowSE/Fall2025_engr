#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>

using namespace std;


//double add(double a, double b) { return a + b; }

int add(int a, int b) { return add(a, b, 0); }
int add(int a, int b, int c) { return add(a, b, c, 0); }
int add(int a, int b, int c, int d) { return a + b + c + d; }




int main() {
	cout << add(3, 4) << endl;
	cout << add(3, 4, 56) << endl;
	cout << add(3, 4, 56, 27) << endl;
	return 0;
}	

