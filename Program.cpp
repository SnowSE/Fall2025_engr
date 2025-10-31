#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>

using namespace std;

string superReplace(string full, string sub, string value, bool replaceAll = false) {

	int i = full.find(sub);
	while (i > -1) {
		full.replace(i, sub.size(), value);
		i = full.find(sub);
		if (!replaceAll)
			break;
	}
	return full;
}



int main() {
	string text = "the initial and final positions in a range";
	text = superReplace(text, "a", "A", true);
	cout << text;
	return 0;
}

