// Tokens on Graph
#include<bits/stdc++.h>
using namespace std;
int dis[200100],a[200100],mark[200100],use[200100],cal[200100];
queue<int> bfs;
vector<int> g[200100];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,m;
        cin >> n >> m;
        for(int i=1;i<=n;i++)
            dis[i]=1e9;
        int p,b;
        cin >> p >> b;
        for(int i=0;i<p;i++)
            cin >> a[i] ,dis[a[i]]=0,bfs.push(a[i]);
        while(b--)
        {
            int u;
            cin >> u;
            mark[u]=1;
        }
        mark[1]=1;
        while(m--)
        {
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        while(!bfs.empty())
        {
            int u=bfs.front();
            bfs.pop();
            for(auto x:g[u])
            {
                if(!mark[x])
                    continue;
                if(dis[x]==1e9&&dis[u]==0)
                    use[x]=1;
                if(dis[x]!=1e9)
                    continue;
                dis[x]=dis[u]+1;
                bfs.push(u);
            }
        }
        int cnt=0;
        for(int i=0;i<p;i++)
        {
            int u=a[i];
            for(auto x:g[u])
            {
                if(!mark[x])
                    continue;
                if(cal[x])
                    continue;
                cal[x]=1;
                int ch=0;
                for(auto v:g[x])
                {
                    if(!mark[v])
                        continue;
                    ch=1;
                    break;
                }
                if(ch)
                {
                    cnt+=use[x]+1;
                    break;
                }
            }
        }
        if(cnt>=2&&dis[1]!=1e9||dis[1]<=1)
            cout << "YES\n";
        else
            cout << "NO\n";
        for(int i=1;i<=n;i++)
            g[i].clear(),cal[i]=mark[i]=use[i]=0;
    }
    return 0;
}