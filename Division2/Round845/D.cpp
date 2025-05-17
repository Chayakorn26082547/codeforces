// Score of a Tree
#include<bits/stdc++.h>
using namespace std;
#define int long long
int m=1e9+7;
int a[100100];
vector<int> g[100100];
int play(int u,int p)
{
    int sum=0;
    for(auto x:g[u])
    {
        if(x==p)
            continue;
        sum=max(sum,play(x,u)+1);
    }
    return sum;
}
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    a[0]=1;
    for(int i=1;i<=100010;i++)
        a[i]=2*a[i-1] , a[i]%=m;
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        for(int i=1;i<n;i++)
        {
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int t=play(1,0);
        int ans=0,now=n;
        for(int i=1;i<=n;i++)
            g[i].clear();
        while(t--)
            ans+=a[now-1]*n,ans%=m,now--;
        cout << ans << '\n';
    }
    return 0;
}