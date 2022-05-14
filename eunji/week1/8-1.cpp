#include <iostream>
using namespace std;

int main(void){
    int N;
    cin>>N;
    
    int a;
    int result=0;
    for (int i=0; i<N; i++) {
        cin>>a;
        for (int i=2; i < a; i++)
        {
            if (a%i==0)
            {
                break;
            }
        }
        result++;
    }
    cout<<result;
    return 0;
}