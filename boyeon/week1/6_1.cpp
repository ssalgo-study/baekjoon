#include <iostream>
using namespace std;

int main() {
	char c; //입력은 문자형
	int result;

	cin >> c;
	result = (int)c; //char형을 int로 변환하면,,,,,, 아스키 출력 완
	cout << result;

	return 0;
}