#include <iostream>
#include <vector>
#include <climits> 
using namespace std;
void print(vector<int> arr) {
	for (auto value : arr) {
		cout << value << ' ';
	}
	cout << endl;
}

void reverse(vector<int>& arr) {
	int size = arr.size();
	if (size < 2) return;

	for (int i = 0; i < size / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

void find(vector<int> arr) {
	int size = arr.size();

	if (size < 2) { 
		cout << "No element to be Found!\n"; 
		return; 
	}

	int largest = INT_MIN, smallest = INT_MAX;
	int slargest = largest, ssmallest = smallest;

	for (auto value : arr) {
		if (value > largest) largest = value;
		if (value < smallest) smallest = value;
	}

	for (auto value : arr) {
		if (value > slargest && value < largest) slargest = value;
		if (value < ssmallest && value > largest) ssmallest = value;
	}

	cout << "Second Largest value is: " << slargest << endl;
	cout << "Second Smallest value is: " << ssmallest << endl;
}
int main() {
	int size;

	cout << "Enter the size of array: "; cin >> size;
	vector<int> arr(size);

	for (int i = 0; i < size; i++) {
		cout << "Enter " << i + 1 << " the element: ";
		cin >> arr[i];
	}

	cout << "Original array: "; print(arr);
	reverse(arr); 
	cout << "Reversed array: "; print(arr);

	find(arr);
	return 0;
}