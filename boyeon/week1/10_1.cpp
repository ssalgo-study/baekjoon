#include <iostream>
using namespace std;

int main() {
	int n, m; //5 21
	cin >> n >> m;

	int card[100];

	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}

	int sum = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (card[i] + card[j] + card[k] >= sum && card[i] + card[j] + card[k] <= m) //왜 sum보다 커야 함 ...?
					sum = card[i] + card[j] + card[k];
			}
		}
	}

	cout << sum << endl;

	return 0;
}