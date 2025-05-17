// GCD Partition
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
        for(int i=1;i<=n;i++)
            cin >> a[i] , a[i]+=a[i-1];
        int ans=1;
        for(int i=1;i<n;i++)
            ans=max(ans,__gcd(a[i],a[n]-a[i]));
        cout << ans << '\n';
    }
    return 0;
}