#include <iostream>
#include <string>
//#include <>
using namespace std;

int main() {

	int input = -1;
	int enemyHealth = 50;
	int playerAttack = 10;
	bool hasSword = false;

	while (input != 0) {

		cout << "Choose and option." << endl;
		cout << "0. quit\n";
		cout << "1. Attack\n";
		cout << "2. Investigate\n";
		cout << "3. Inventory\n";
		cin >> input;

		if (input == 1)
		{
			int tempAttack = playerAttack;
			if (hasSword) 
			{
				tempAttack += 5;
			}
			enemyHealth = enemyHealth - playerAttack;


		}
		else if (input == 2)
		{
			if (enemyHealth > 0)
				cout << "The enemy has " << enemyHealth << " hitpoints\n";
			else
			{
				cout << "The enemy is dead\n";
				cout << "You find a sword\n";
				hasSword = true;
			}
		} 
		else if (input == 3)
		{
			if (hasSword) 
			{
				cout << "You have a sword\n";
			}
			else
			{
				cout << "You do not have a sword\n";
			}
		}



	}
}

