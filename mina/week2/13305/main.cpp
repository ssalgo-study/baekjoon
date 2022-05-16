//
//  main.cpp
//  13305
//
//  Created by 홍민아 on 2022/05/15.
//

#define MAX 1000000000 //10억

#include <iostream>
using namespace std;

int main() {
    int N; //도시 개수
    cin >> N;
    
    int greedy;
    
    greedy = MAX;
    int sum = 0;
    
    int price[N];
    int km[N-1];
    
    for(int i = 0; i < N - 1; i++)
        cin >> km[i];
    
    for(int i = 0; i < N; i++)
        cin >> price[i];
    
    for(int i = 0; i < N; i++){
        if(price[i] < greedy)
            greedy = price[i];
        sum += greedy * km[i];
    }
    
    cout << sum;
    
    return 0;
}
