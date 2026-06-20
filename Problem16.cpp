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
        vector <int> A(n);
        for (int i = 0; i < n; i++) 
            cin >> A[i];
       

        int operation = INT_MAX;
        for (int i = 0; i < n - 1; i++) 
        {
            if (A[i] <= A[i + 1]) 
            {
                int diff = A[i + 1] - A[i]; 
                int required_operations = (diff / 2) + 1; 
                operation = min(operation, required_operations); 
            }
            else {
                operation = 0; 
                break;}
        }

        cout << operation << endl; 
    }
    return 0;
}

