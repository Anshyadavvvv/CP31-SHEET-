#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int totalXor = 0;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            totalXor ^= num;
        }

        if (n % 2 == 1) {
            cout << totalXor << "\n";
        }
        else {
            if (totalXor == 0)
                cout << 0 << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}