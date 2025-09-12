#include <iostream>
#include <string>
//#include <>
using namespace std;


/*
	Types of weapons
	Player Health
	counter attack
	more monster
	defense/ armor
	random attacks
	chance to crit

*/

int main() {

	int input = -1;
	
	int room = 1;
	bool enemyIsAlive = true;

	int enemyHealth = 50;
	int playerAttack = 10;
	bool hasSword = false;

	while (input != 0) {

		cout << "Your are in Room #" << room << endl;

		if (enemyIsAlive) 
		{
			cout << "The enemy has " << enemyHealth << " hitpoints\n";
		}
		else
		{
			cout << "There is a dead monster here.\n";
		}

		cout << "Choose and option." << endl;
		cout << "0. quit\n";
		cout << "1. Attack\n";
		cout << "2. Investigate\n";
		cout << "3. Inventory\n";
		cout << "4. Go to next room\n";
		cin >> input;

		if (input == 1)
		{
			int tempAttack = playerAttack;
			if (hasSword) 
			{
				tempAttack += 5;
			}
			enemyHealth = enemyHealth - tempAttack;
			cout << "You attack for " << tempAttack << " damage.\n";
			cout << "The enemy has " << enemyHealth << " hitpoints\n";
			if (enemyHealth <= 0)
			{
				enemyIsAlive = false;
				cout << "The enemy has died\n";
			}

		}
		else if (input == 2)
		{
			if (enemyIsAlive)
			{
				cout << "You find a scary monster\n";

			}
			else
			{
				cout << "There is a dead monster here.\n";
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
		else if (input == 4 && !enemyIsAlive)
		{
			room++;
			enemyIsAlive = true;
			enemyHealth = 50 + (room * 10);
		}

	}
}

