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

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}

int main() {
	const int SIZE = 10;
	int list[] = { 25,34, 4,17,44,5,7,9,18,3 };

	printArray(list, SIZE);
	for (int j = 0; j < SIZE - 1; j++) {
		for (int i = 0; i < SIZE - 1 - j; i++)
		{
			if (list[i] > list[i + 1]) {
				int temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
		printArray(list, SIZE);
		}
		cout << j << endl;
	}

	return 0;
}


