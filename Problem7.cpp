
#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;
        int ans = -1;
        int operation = 0;
        while (operation <= 6) {
        if (x.find(s) != string::npos) {
            ans = operation;
            break;
        }
        x += x; 
        operation++;
    }

        cout << ans <<endl;
    }

    return 0;
}

