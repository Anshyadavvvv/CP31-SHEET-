#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[55];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool same = true;

        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                same = false;
                break;
            }
        }

        if (same) {
            cout << "NO\n";
            continue;
        }

        sort(a, a + n);

        cout << "YES\n";

        cout << a[n - 1] << " ";

        for (int i = 0; i < n - 1; i++) {
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}