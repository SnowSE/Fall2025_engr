#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

bool isLoShuSquare(int arr[3][3]) {

	int sum = arr[0][0] + arr[1][1] + arr[2][2];
	int sum1 = arr[0][2] + arr[1][1] + arr[2][0];

	if (sum != sum1)
		return false;

	for (int i = 0; i < 3; i++)
	{
		int sumH = arr[0][i] + arr[1][i] + arr[2][i];
		int sumV = arr[i][0] + arr[i][1] + arr[i][2];

		if (sumH != sum)
			return false;
		if (sumV != sum)
			return false;

	}


	return true;
}


int main() {

	int * ptr = new int[100];

	cout << "Memory Location: " << ptr << endl;
	cout << "First Value: " << *ptr << endl;


	return 0;
}

