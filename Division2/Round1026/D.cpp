// Fewer Batteries
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n+1),b(n+1);
        vector<vector<pair<int,int>>> g(n+1);
        for(int i=1;i<=n;i++)
            cin >> b[i];
        while(m--){
            int u,v,w;
            cin >> u >> v >> w;
            g[u].push_back({v,w});
        }
        int l=1,r=1e9;
        while(l<r){
            int mid=(l+r)/2;
            for(int i=1;i<=n;i++)
                a[i]=0;
            for(int i=1;i<=n;i++){
                if(a[i]==0&&i!=1)
                    continue;
                a[i]+=b[i];
                a[i]=min(a[i],mid);
                for(auto x:g[i]){
                    if(x.second>a[i])
                        continue;
                    a[x.first]=max(a[x.first],a[i]);
                }
            }
            if(a[n]>0)
                r=mid;
            else
                l=mid+1;
        }
        for(int i=1;i<=n;i++)
            a[i]=0;
        for(int i=1;i<=n;i++){
            if(a[i]==0&&i!=1)
                continue;
            a[i]+=b[i];
            a[i]=min(a[i],l);
            for(auto x:g[i]){
                if(x.second>a[i])
                    continue;
                a[x.first]=max(a[x.first],a[i]);
            }
        }
        if(a[n]>0)
            cout << l << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}
