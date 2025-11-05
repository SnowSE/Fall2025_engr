#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

// 1. Print all elements of the vector
void printVector(std::vector<int> nums);

// 2. Return the sum of all elements
int sumVector(std::vector<int> nums);

// 3. Return the average value as a double
double averageVector(std::vector<int> nums);

// 4. Find and return the maximum element
int maxElement(std::vector<int> nums);

// 5. Find and return the minimum element
int minElement(std::vector<int> nums);

// 6. Count how many numbers are even
int countEven(std::vector<int> nums);

// 7. Count how many numbers are odd
int countOdd(std::vector<int> nums);

// 8. Return true if a specific value exists in the vector
bool containsValue(std::vector<int> nums, int value);

// 9. Multiply every element by a given factor
void scaleVector(std::vector<int> nums, int factor);

// 10. Return a new vector with all elements doubled
std::vector<int> doubleElements(std::vector<int> nums);

// 11. Return a reversed copy of the vector
std::vector<int> reverseVector(std::vector<int> nums);

// 12. Remove all negative numbers from the vector
void removeNegatives(std::vector<int> nums);

// 13. Return how many times a specific number appears
int countOccurrences(std::vector<int> nums, int value);


// 15. Add all elements of two vectors together element-wise
std::vector<int> addVectors(std::vector<int> a, std::vector<int> b);

// 16. Sort the vector in ascending order
void sortAscending(std::vector<int> nums);

// 20. Return a new vector containing only even numbers
std::vector<int> filterEven(std::vector<int> nums);

// 1. Input and Print
void inputAndPrint(std::vector<int> nums);

// 2. Find the Maximum
int findMax(std::vector<int> nums);

// 17. Sort the vector in descending order
void sortDescending(std::vector<int> nums);

// 18. Remove duplicate values
void removeDuplicates(std::vector<int> nums);

// 19. Return the median of all elements
double findMedian(std::vector<int> nums);
void foo(int things[][4], int size) {

}

// 14. Return the index of the first occurrence of a value (or -1 if not found)
int findIndex(std::vector<int> nums, int value) {
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == value) {
			return i;
		}
	}
	return -1;
}


int main() {
	vector<int> list;// = { 12,3,5,6,6,744,2334,4,3,2,3,4 };
	int index = findIndex(list, 2);
	if (index != -1) {
		list[index];
	}

	for (int& val : list) {
		val = val / 2;
		cout << val << ", ";
	}
	cout << endl;
	for (int val : list) {
		cout << val << ", ";
	}

	/*for (int i = 0; i < list.size(); i++) {
		cout << list[i] << ", ";
	}*/

	return 0;
}

