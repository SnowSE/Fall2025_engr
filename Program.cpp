#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

struct Point { 
	int X; 
	int Y; 
};


int main() {

	Point player = { 1,2 };
	Point monster = { 1,2 };

	// playerX = 3;
	player.X = 3;
	player.Y = 3;
	monster.X = 3;

	if (player.X == monster.X && player.Y == monster.Y) {
		cout << "You got eaten.";
	}
	else {
		cout << "You got away.";
	}


	return 0;
}

