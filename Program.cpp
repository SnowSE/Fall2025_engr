
#include <iostream>
#include <string>
#include <climits>

using namespace std;



int main() {
	int target;
	cin >> target;

	int arr[] = { 1 ,3,5,67,8,9,12,3,45,99 };
	int foundindex = -1;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == target){
			foundindex = i;
			break;
		}
	}
	if (foundindex == -1){
		cout << "we didn't find it";
	}
	else {
		cout << "It was found at position " << foundindex;
	}
}
