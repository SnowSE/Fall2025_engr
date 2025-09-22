
#include <iostream>
#include <string>
//#include <>
using namespace std;

int main() {

	double rainfall[3];

	for (int i = 0; i < 3; i++) {
		cin >> rainfall[i];
	}

	double sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += rainfall[i];
	}
	cout << sum;

}
