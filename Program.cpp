
#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>

using namespace std;



int main() {

	ifstream inputfile;
	inputfile.open("numbers.txt");

	if (!inputfile.is_open()) {
		cout << "could not open file" << endl;
		return -1;
	}
	int first;
	inputfile >> first;
	cout << first;

	const int MAX_SIZE = 40;
	int arr[MAX_SIZE];

	int num;
	int size = 0;
	while (inputfile >> num && size < MAX_SIZE) {
		arr[size] = num;
		size++;
	}

	inputfile.close();


	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}


	return 0;
}	


