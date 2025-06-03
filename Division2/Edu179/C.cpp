// Equal Values
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        int i=0,ans=1e18;
        while(i<n){
            int j=i;
            while(j<n&&a[j]==a[i])
                j++;
            ans=min(ans,a[i]*(n-j+i));
            i=j;
        }
        cout << ans << '\n';
    }
    return 0;
}
