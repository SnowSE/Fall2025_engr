
#include <iostream>
#include <string>
#include <climits>

using namespace std;



int main() {
	int choice;

	cin >> choice;


	switch (choice)
	{
	case 2:
	case 5:
		cout << "You typed 2 or 5";
		break;
	case 3:
		cout << "You typed 3";
	break;
	case 'a':
	case 'A':
		cout << "You typed a";
		break;
	case -21:
		cout << "You typed -21";
	case 13:
		cout << "You typed -13";
	default:
		cout << "I'm sorry, Dave, I can't do that.";
		break;
	}


}
