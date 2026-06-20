#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int xor_sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            xor_sum ^= val;
        }

        if (n % 2 != 0)
        {
            cout << xor_sum << "\n";
        }

        else
        {
            if (xor_sum == 0)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}