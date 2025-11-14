#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;



int main() {

	int a = 8;
	int* ptr = &a;

	cout << a+*ptr;

	return 0;
}

