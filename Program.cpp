
#include <iostream>
#include <string>
//#include <>
using namespace std;

double ComputeAverage(double arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size*2; i++) {
		sum += arr[i];
	}
	return sum/size;
}

int main() {
	
	const int MONTHS = 4;
	double rainfall[MONTHS] = {3.22, 4.78, 0.1, 34};

	int values[MONTHS] = {  };

	//for (int i = 0; i < MONTHS; i++) {
	//	cin >> rainfall[i];
	//}

	double sum = 0;
	for (int i = 0; i < MONTHS; i++) {
		sum += rainfall[i];
	}
	cout << "Sum: " << sum << endl;

	cout << "Average: " << ComputeAverage(rainfall, MONTHS) << endl;

}
