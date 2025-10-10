#include <iostream>
#include <bitset>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	// Seed the random number generator
	srand(time(0));

	// Generate and print 10 random numbers
	for (int i = 0; i < 10; i++) {
		int num = rand() % 256; // random number 0–255

		// Convert to 8-bit binary string
		bitset<8> b(num);
		string s = b.to_string();

		// Output with a space between groups of 4
		cout << i << ": " << s.substr(0, 4) << " " << s.substr(4, 4) << endl;

		// Show the decimal number too for clarity
		//cout << " (" << num << ")" << endl;

	}
	char c = 97;
	c = c ^ 32;
	cout << c << endl;
	c = c ^ 32;
	cout << c << endl;

	return 0;
}
