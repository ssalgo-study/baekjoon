//
//  main.cpp
//  1330
//
//  Created by 홍민아 on 2022/05/08.
// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    
    if(A > B)
        cout << ">";
    else if(A < B)
        cout << "<";
    else
        cout << "==";
        
    return 0;
}
