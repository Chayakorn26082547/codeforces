// Remove the Ends
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        vector<int> a(n+1),dp0(n+2),dp1(n+2);
        for(int i=1;i<=n;i++)
            cin >> a[i];
        for(int i=1;i<=n;i++)
            dp0[i]=dp0[i-1]+((a[i]>0)?a[i]:0);
        for(int i=n;i>=1;i--)
            dp1[i]=dp1[i+1]-((a[i]<0)?a[i]:0);
        int ans=0;
        for(int i=1;i<=n;i++)
            ans=max(ans,dp0[i]+dp1[i]);
        cout << ans << '\n';
    }
    return 0;
}
