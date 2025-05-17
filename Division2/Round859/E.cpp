// Interview
#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[200100];
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        for(int i=1;i<=n;i++)
            cin >> dp[i] , dp[i]+=dp[i-1];
        int l=1,r=n;
        while(l<r)
        {
            int mid=(l+r)/2;
            cout << "? " << mid << ' ';
            for(int i=1;i<=mid;i++)
                cout << i << ' ';
            cout << '\n';
            cout.flush();
            int sum;
            cin >> sum;
            if(sum>dp[mid])
                r=mid;
            else
                l=mid+1;
        }
        cout << "! " << l << '\n';
        cout.flush();
    }
    return 0;
}