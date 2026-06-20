#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector <int> A(n);

        bool commonelement = false;
        for(int i = 0 ;  i < n ; i++){
            cin>>A[i];
             if(A[i] == k){
               commonelement = true;
             }
        }
        if(commonelement){
            cout<<"YES";
        }else{cout<<"NO";}


    }

    return 0;
}
