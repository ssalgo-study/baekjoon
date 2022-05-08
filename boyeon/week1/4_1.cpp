#include <iostream>
using namespace std;
int a[1000001];
int minimum = 1000000; //보다 작거나 같음
int maximum = -1000000; //보다 크거나 같음
int N;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		if (a[i] < minimum) {
			minimum = a[i];
		}

		if (a[i] > maximum) {
			maximum = a[i];
		}
	}

	cout << minimum << " " << maximum << endl;
	

	return 0;
}