#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int maxi = *max_element(A.begin(), A.end());
        vector<int> b;
        vector<int> c;

        for (int j = 0; j < n; j++)
        {
            if (A[j] != maxi)
            {
                b.push_back(A[j]);
            }
            else
            {
                c.push_back(A[j]);
            }
        }

        if (b.size() == 0)
        {
            cout << "-1" << endl;
            continue;
        }

        cout << b.size() << " " << c.size() << endl;

        for (int k = 0; k < b.size(); k++)
        {
            cout << b[k] << " ";
        }
        cout << endl;

        for (int l = 0; l < c.size(); l++)
        {
            cout << c[l] << " ";
        }
        cout << endl;
    }
    return 0;
}