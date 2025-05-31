//  Gellyfish and Baby's Breath
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q,m=998244353;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        vector<int> a(n),b(n),dp(n);
        dp[0]=1;
        for(int i=1;i<n;i++)
            dp[i]=(dp[i-1]*2)%m;
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
            cin >> b[i];
        int mx=0,l=0,r=0;
        for(int i=0;i<n;i++){
            mx=max({mx,a[i],b[i]});
            if(a[i]==mx)
                l=i;
            if(b[i]==mx)
                r=i;
            int ans=0;
            if(a[l]==mx)
                ans=max(ans,b[i-l]);
            if(b[r]==mx)
                ans=max(ans,a[i-r]);
            cout << (dp[mx]+dp[ans])%m << ' ';
        }
        cout << '\n';
    }
    return 0;
}
