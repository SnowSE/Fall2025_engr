#include <iostream>
#include <string>
using namespace std;



int main() {

	int n = 53;
	int d = 7;
	double b = (double)n*n/d;
	cout << b << endl;

	string title;
	string description;

	cout << "Title: ";
	cin >> title ;
	cin.ignore();
	cout << "Description: ";
	getline(cin, description);

	cout << "Title: |" << title << "|\n";
	cout << "Description: |" << description << "|\n";


}

