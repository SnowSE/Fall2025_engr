#include <iostream>
#include <string>
//#include <>
using namespace std;

int main() {

	int num;
	int heads = 0;
	int tails = 0;

	auto timer = time(0);
	//cout << "timer: " << timer << endl;
	srand(timer);

	//cout << num << endl;

	num = rand();
	cout << rand() % 11 + 10 << endl;
	cout << rand() % 11 + 10 << endl;
	cout << rand() % 11 + 10 << endl;
	cout << rand() % 11 + 10 << endl;
	cout << rand() % 11 + 10 << endl;
	cout << rand() % 11 + 10 << endl;
	cout << rand() % 11 + 10 << endl;
	cout << rand() % 11 + 10 << endl;
	cout << rand() % 11 + 10 << endl;
}

