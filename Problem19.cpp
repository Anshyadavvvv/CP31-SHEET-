<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int neg = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == -1)
                neg++;
        }

        int ans = 0;

        while (neg > n / 2) {
            neg--;
            ans++;
        }

        if (neg % 2 != 0)
            ans++;

        cout << ans << "\n";
    }

    return 0;
=======
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int neg = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == -1)
                neg++;
        }

        int ans = 0;

        while (neg > n / 2) {
            neg--;
            ans++;
        }

        if (neg % 2 != 0)
            ans++;

        cout << ans << "\n";
    }

    return 0;
>>>>>>> f137f7601dab08ce9be3599d1cfa67b74b6a65a9
}