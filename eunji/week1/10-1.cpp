#include <iostream>
using namespace std;

int main(void){
    int n, m;
    cin>>n>>m;

    int v[n];
    int mx=0;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    

    for (int i=0; i < n-2; i++)
    {
       for(int j=i+1; j <n-1;j++){
           for(int k=j+1; k<n; k++){
               int sum= v[i]+v[j]+v[k];
               if ((sum>mx) && (sum <=m))
               {
                   mx=sum;
               }
               
           }
       }
    }
    
    cout<<mx;

    return 0;
}