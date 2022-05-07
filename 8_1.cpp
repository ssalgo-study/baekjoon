#include <iostream>
#include <cmath>
using namespace std;

int n;
bool isPrime(int x) {
	if (x == 1) return false;
	else if (x == 2) return true;
	else {
		for (int i = 2; i <= sqrt(x); i++) { //에라토스테네스의 체 알고리즘 사용
			for (int j = i + i; j <= x; j += i) { //자기 자신은 지우지 않고, 배수부터 지움
				if (j == x) return false;
			}
		}
		return true;
	}
}

int main(void) {
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (isPrime(input))
			cnt++;
	}
	cout << cnt << endl;
}