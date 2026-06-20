<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i = 0 ; i < n ; i++){
            cin>>A[i];
        }
        int cnt = 0;
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(A[i] == 0){
                cnt++;
                ans = max(ans,cnt);
            }else{cnt = 0;}
        }
        cout<<ans<<endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i = 0 ; i < n ; i++){
            cin>>A[i];
        }
        int cnt = 0;
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(A[i] == 0){
                cnt++;
                ans = max(ans,cnt);
            }else{cnt = 0;}
        }
        cout<<ans<<endl;
    }
    return 0;
>>>>>>> f137f7601dab08ce9be3599d1cfa67b74b6a65a9
}