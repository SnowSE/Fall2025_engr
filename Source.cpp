#include <iostream>
#include <string>
using namespace std;



int main() {

	int s;

	s = sizeof(double);
	cout << "double: " << s << endl;
	s = sizeof(float);
	cout << "float: " << s << endl;

	s = sizeof(int);
	cout << "int: " << s << endl;
	s = sizeof(long long);
	cout << "long long: " << s << endl;
	s = sizeof(long);
	cout << "long: " << s << endl;
	s = sizeof(short);
	cout << "short: " << s << endl;
	s = sizeof(bool);
	cout << "bool: " << s << endl;
	s = sizeof(char);
	cout << "char: " << s << endl;

	s = sizeof(string);
	cout << "string: " << s << endl;

}

