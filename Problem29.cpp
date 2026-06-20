<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 1; i < n; i++) {
            if ((a[i] % 2) == (a[i - 1] % 2))
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
=======
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 1; i < n; i++) {
            if ((a[i] % 2) == (a[i - 1] % 2))
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
>>>>>>> f137f7601dab08ce9be3599d1cfa67b74b6a65a9
}