#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<int, int>> s(n);
	
	for (int i = 0; i < n; i++) {
		cin >> s[i].second >> s[i].first;
	}

	sort(s.begin(), s.end());

	int time = 0;
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (time <= s[i].second) {
			time = s[i].first;
			count++;
		}
	}
	cout << count << endl;

	return 0;
}