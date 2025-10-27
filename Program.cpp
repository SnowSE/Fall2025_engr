
#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>

using namespace std;


int greatestCommonDivisor(int a, int b);


int main() {

	cout << greatestCommonDivisor(384, 186);

	return 0;
}	

int greatestCommonDivisor(int a, int b)
{
	if (b == 0)
		return a;

	return greatestCommonDivisor(b, a % b);
}
