
#include <iostream>
#include <string>
#include <climits>

using namespace std;



int main1() {

	cout << (7 ^ 13) << endl;

	int target = 0;
	//cin >> target;

	int value = target % 2 == 0 ? target / 2 : (target + 1) * 2;

	cout << value;

	if (value > 12 || value % 3 == 0) {

	}

	return 0;
}
