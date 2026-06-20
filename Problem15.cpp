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
            cin >> A[i];
        

       int oddcount = 0; 
        for (int i = 0; i < n; i++) 
        {
            if (A[i] % 2 == 1) 
                oddcount++; 
        }
        
        
        if ( oddcount % 2 == 1)
            cout << "NO" << endl; 
        else
            cout << "YES" << endl; 
    }
    return 0;
}

