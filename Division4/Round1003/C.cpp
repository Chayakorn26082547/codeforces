// Skibidus and Fanum Tax
#include<bits/stdc++.h>
using namespace std;
int a[200100],b[200100];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n,m;
        cin >> n >> m;
        for(int i=1;i<=n;i++)
            cin >> a[i];
        for(int i=0;i<m;i++)
            cin >> b[i];
        sort(b,b+m);
        int ans=1;
        a[0]=-1e9;
        for(int i=1;i<=n;i++){
            int idx=lower_bound(b,b+m,a[i-1]+a[i])-b;
            if(idx<m&&a[i]>=a[i-1])
                a[i]=min(a[i],b[idx]-a[i]);
            else if(idx<m)
                a[i]=b[idx]-a[i];
            if(a[i]<a[i-1])
                ans=0;
        }
        cout << (ans?"YES\n":"NO\n");
    }
    return 0;
}
