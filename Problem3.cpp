#include <bits/stdc++.h>
using namespace std;

int main(){
   
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int ans = 0;
        int i = 0;
        while(i < n){
            if(s[i] == '.'){
                
                int len = 0;
                while(i < n && s[i] == '.'){
                    len++;
                    i++;
                }
                ans += (len + 1) / 2;
            } else {
                i++;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}
