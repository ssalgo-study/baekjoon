#include <iostream>
using namespace std;

int n;
long long dist[100001];
long long price[100001];
long long minimum = 1000000000;
long long result = 0;

int main() {
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		cin >> dist[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> price[i];
	}

	for (int i = 0; i < n - 1; i++) {
		if (price[i] < minimum) {
			minimum = price[i];
		}
		result += (minimum * dist[i]);
	}

	cout << result << endl;

	return 0;
}