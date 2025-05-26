// Kirei Attacks the Estate
#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> g[200100];
int mn[200100],mx[200100],a[200100];
void play(int u,int p){
    mn[u]=min(mn[u],a[u]-mx[p]);
    mx[u]=max(mx[u],a[u]-mn[p]);
    for(auto x:g[u])
        if(x!=p)
            play(x,u);
}
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            mn[i]=mx[i]=a[i];
        }
        for(int i=1;i<n;i++){
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        play(1,0);
        for(int i=1;i<=n;i++)
            cout << mx[i] << ' ';
        cout << '\n';
        for(int i=1;i<=n;i++)
            g[i].clear();
    }
    return 0;
}
