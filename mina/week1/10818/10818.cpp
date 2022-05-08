//
//  main.cpp
//  10818
//
//  Created by 홍민아 on 2022/05/08.
// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int arr[N];
    
    int min = 1000000;
    int max = -1000000;
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        
        if(arr[i] < min)
            min = arr[i];
        
        if(arr[i] > max)
            max = arr[i];
    }
    
    cout << min << " " << max;
    
    return 0;
}
