#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, t;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += v[i] * (n - i);
	}

	cout << sum << endl;

	return 0;
}