#include <iostream>
using namespace std;
int a[1000001];
int minimum = 1000000; //���� �۰ų� ����
int maximum = -1000000; //���� ũ�ų� ����
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