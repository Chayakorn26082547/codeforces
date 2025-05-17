// Odd Queries
#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[200100];
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        for(int i=1;i<=n;i++)
            cin >> dp[i] , dp[i]+=dp[i-1];
        while(q--)
        {
            int l,r,k;
            cin >> l >> r >> k;
            int sum=dp[n]-dp[r]+dp[l-1]+k*(r-l+1);
            if(sum%2==1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}