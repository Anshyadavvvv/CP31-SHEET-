<<<<<<< HEAD
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

        for (int i = 0; i <= 6; i++) {

            if (x.find(s) != string::npos) {
                ans = i;
                break;
            }

            x += x;   // perform one operation
        }

        cout << ans << '\n';
    }

    return 0;
}
=======
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
>>>>>>> f137f7601dab08ce9be3599d1cfa67b74b6a65a9
