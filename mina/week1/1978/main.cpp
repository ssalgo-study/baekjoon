//
//  main.cpp
//  1978
//
//  Created by 홍민아 on 2022/05/08.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    int cnt = 0;
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        
        if(arr[i] == 2 || arr[i] == 3)
            cnt++;
        
        if(arr[i] % 2 != 0 && 
    }
    
    
    return 0;
}
