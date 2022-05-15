#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;

	int sum = 0;
	string num;
	bool isMinus = false;

	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == '+' || s[i] == '-' || s[i] == '\0') {
			if (isMinus) {
				sum -= stoi(num);
			}
			else {
				sum += stoi(num);
			}

			num = "";

			if (s[i] == '-') {
				isMinus = true;
			}

			continue;
		}
		num += s[i];
	}

	cout << sum << endl;

	return 0;
}