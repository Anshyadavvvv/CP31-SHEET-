
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> A(n);
        for(int i = 0; i < n ; i++){
            cin>>A[i];
        }
        int cnt = 0;
        for(int i = 0 ; i < n-1 ; i++){
        if(A[i]<A[i+1]){
            cnt++;
        }
        }
        if(cnt == (n-1)){
            cout<<"YES"<<endl;
            continue;
        }
        if(k == 1){
            cout<<"NO"<<endl;
        }else{cout<<"YES"<<endl;}
    
        
    }
    return 0;

    return 0;
