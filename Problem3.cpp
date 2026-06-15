#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
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
                // Count length of this empty segment
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