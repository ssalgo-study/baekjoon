//
//  main.cpp
//  week2
//
//  Created by 홍민아 on 2022/05/15.
//

#include <iostream>
using namespace std;

int main() {
    int n, k, cnt = 0;
    cin >> n >> k;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = n - 1; i >= 0; i--){
        cnt += k / arr[i];
        k %= arr[i];
    }
    
    cout << cnt;
    
    
    return 0;
}
