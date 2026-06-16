#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[1005];
        int total2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2)
                total2++;
        }

        if (total2 == 0) {
            cout << 1 << "\n";
            continue;
        }

        if (total2 % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }

        int need = total2 / 2;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 2)
                cnt++;

            if (cnt == need) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }

    return 0;
}