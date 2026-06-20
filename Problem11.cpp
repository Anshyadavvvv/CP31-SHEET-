#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = INT_MAX;

    for(int i = 0; i < N; i++) {
        ans = min(ans, abs(A[i]));
    }

    cout << ans << endl;

    return 0;
}
