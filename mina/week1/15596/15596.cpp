//
//  main.cpp
//  15596
//
//  Created by 홍민아 on 2022/05/08.
//

#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a){
    long long ans = 0;
    
    for(int i = 0; i < a.size(); i++)
        ans += a[i];
    
    return ans;
}
