#include <iostream>
#include <string>
using namespace std;

int main() {


	int a;
	cin >> a;

	if (a > 1)
		if (a < 200)
			if (a == 100)
				a++;
			else
				a--;

	if (a == 0) 
	{
		cout << "it's 0" << endl;
	}
	else if (a > 12) {
		cout << "That's a big number." << endl;
		if (a > 100) {
			cout << "That's a really big number." << endl;
		}
	}
	else 
	{
		cout << "not 0" << endl;
	}
	cout << a << endl;

}

