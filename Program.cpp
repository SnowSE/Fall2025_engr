
#include <iostream>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

string ToLower(string input);


int main() {

	int *num = new int [100];
	for (int i = 0; i < 100; i++) {
		cout << "|" << num[i] << "|"<< endl;
	}
	string choice = "hey whWhat!!";

	choice = ToLower(choice);

	if (choice.find("what") >= 0) {
		cout << "You selected seven" << endl;
	}
	cout << choice << endl;


	return 0;
}	

string ToLower(string input) {
	string lower(input.size(), ' ');
	for (int i = 0; i < input.size(); i++) {
		lower[i] = 
			input[i] >= 'A' && input[i] <= 'Z' 
			? input[i] + 'a' - 'A'
			: input[i];
	} 
	return lower;
}
