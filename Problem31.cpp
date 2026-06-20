<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a + b <= n - 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
=======
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a + b <= n - 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
>>>>>>> f137f7601dab08ce9be3599d1cfa67b74b6a65a9
}