#include <iostream>

using namespace std;



int getMax(const int* ar, int size) {
	int maximum = ar[0];
	for (int i = 0; i < size; i++) {
		if (ar[i] > maximum) {
			maximum = ar[i];
		}
	}
	return maximum;
}

int getMin(const int* ar, int size) {
	int minimum = ar[0];
	for (int i = 0; i < size; i++) {
		if (ar[i] < minimum) {
			minimum = ar[i];
		}
	}
	return minimum;
}

int main() {
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	} 
	cout << getMax(ar, n) << endl;
	cout << getMin(ar, n);
}
