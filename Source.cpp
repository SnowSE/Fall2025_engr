#include <iostream>
#include <string>
using namespace std;

int main() {

	string input1;
	string input2;

	cout << "1: ";
	getline( cin, input1);

	//cin.clear();
	cout << "2: ";
	cin >> input2;

	cout << "\n\n";
	cout << "1 \"" << input1 << "\" \n2 \"" << input2 << "\" \n";
}

