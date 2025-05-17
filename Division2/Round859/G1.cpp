// Subsequence Addition (Easy Version)
#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200100];
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        if(a[0]!=1)
        {
            cout << "NO\n";
            continue;
        }
        int sum=1,ch=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]>sum)
            {
                cout << "NO\n";
                ch=0;
                break;
            }
            sum+=a[i];
        }
        if(ch)
            cout << "YES\n";
    }
    return 0;
}