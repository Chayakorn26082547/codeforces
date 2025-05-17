// Swap Game
#include<bits/stdc++.h>
using namespace std;
int a[200100];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,mn=2e9;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(i>0)
                mn=min(mn,a[i]);
        }
        a[0]--;
        if(a[0]<mn)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    return 0;
}