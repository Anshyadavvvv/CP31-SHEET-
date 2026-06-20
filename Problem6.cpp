#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        if (freq.size() == 1) {
            cout << "Yes\n";
            continue;
        }

        if (freq.size() > 2) {
            cout << "No\n";
            continue;
        }

        vector<int> cnt;

        for (auto it : freq) {
            cnt.push_back(it.second);
        }

        sort(cnt.begin(), cnt.end());

        if (n % 2 == 0) {
            if (cnt[0] == n / 2 && cnt[1] == n / 2)
                cout << "Yes\n";
            else
                cout << "No\n";
        } else {
            if (cnt[0] == n / 2 && cnt[1] == n / 2 + 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}