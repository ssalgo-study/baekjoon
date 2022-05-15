//
//  main.cpp
//  1931
//
//  Created by 홍민아 on 2022/05/15.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;
int N; //회의 개수
int c = 1;

bool compare(pair<int, int>v1, pair<int, int> v2){
    if(v1.second == v2.second)
        return v1.first < v2.first;
    return v1.second < v2.second;
}

int main() {
    int start, end;
    int from, to;

    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> start >> end;
        v.push_back(pair<int, int>(start, end));
    }
    
    sort(v.begin(), v.end(), compare); //시작 시간 순으로 정렬
    
    from = v[0].second;
    for(int i = 1; i < N; i++){
        to = v[i].first;
        if(from <= to){
            c++;
            from = v[i].second;
        }
    }
    
    cout << c;
    return 0;
}
