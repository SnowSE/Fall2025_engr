#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>

using namespace std;

int globalCount = 7; // Renamed 'count' to 'globalCount' to avoid ambiguity

int greatestCommonDivisor(int a, int b);

/// <summary>
/// Calculates the fibbonacci number count number of steps in
/// </summary>
/// <param name="count">steps to count</param>
/// <param name="fib2">must be 1 to start</param>
/// <param name="fib1">must be 0 to start</param>
/// <returns></returns>
int fibonacci(int count, int fib2, int fib1) {
	if (!count) return fib2;
	globalCount++;
	return fibonacci(count - 1, fib2 + fib1, fib2);
}

int main() {
	int num;
	cin >> num;
	cout << fibonacci(num, 1, 0) << endl;
	
	globalCount++; 

	int fib1 = 0;
	int fib2 = 1;
	for (int i = 0; i < num; i++) {
		int temp = fib2;
		fib2 = fib2 + fib1;
		fib1 = temp;
	}
	cout << fib2 << endl;
	cout << globalCount << endl;
	return 0;
}	

int greatestCommonDivisor(int a, int b)
{
	if (b == 0) 
		return a;
	return greatestCommonDivisor(b, a % b);
}
