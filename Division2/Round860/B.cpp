// Three Sevens
#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
vector<int> v;
int mark[50100],ans[50100];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int m;
        cin >> m;
        for(int i=1;i<=m;i++)
        {
            int n;
            cin >> n;
            while(n--)
            {
                int num;
                cin >> num;
                mark[num]=i;
                v.push_back(num);
            }
        }
        sort(all(v));
        v.resize(unique(all(v))-v.begin());
        int cnt=0;
        for(auto x:v)
        {
            if(!mark[x])
                continue;
            if(!ans[mark[x]])
                ans[mark[x]]=x,cnt++;
        }
        if(cnt!=m)
            cout << -1 << '\n';
        else
        {
            for(int i=1;i<=m;i++)
                cout << ans[i] << ' ';
            cout << '\n';
        }
        for(int i=1;i<=m;i++)
            ans[i]=0;
        for(auto x:v)
            mark[x]=0;
        v.clear();
    }
    return 0;
}