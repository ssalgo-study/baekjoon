//
//  main.cpp
//  1541
//
//  Created by 홍민아 on 2022/05/15.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    string temp = "";
    cin >> str;
    
    int result = 0;
    bool minus = false;
    
    for(int i = 0; i <= str.size(); i++){
        if(str[i] == '+' || str[i] == '-' || str[i] == '\0'){
            if(minus)
                result -= stoi(temp);
            else
                result += stoi(temp);
        
        
        temp="";
        
        if(str[i] == '-')
            minus = true;
        
            continue;
        }
        
        temp+=str[i];
    }
    
    cout << result;
        
    return 0;
}
