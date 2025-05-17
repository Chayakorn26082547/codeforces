// Garland
#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
vector<int> v;
int mark[20];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        for(int i=0;i<4;i++)
        {
            char num;
            cin >> num;
            mark[num-'0']++;
            v.push_back(num-'0');
        }
        sort(all(v));
        v.resize(unique(all(v))-v.begin());
        if(v.size()==2&&mark[v[0]]==1||mark[v[0]]==3)
            cout << 6 << '\n';
        else if(v.size()==2&&mark[v[0]]==2)
            cout << 4 << '\n';
        else if(v.size()==4||v.size()==3)
            cout << 4 << '\n';
        else
            cout << -1 << '\n';
        v.clear();
        memset(mark,0,sizeof mark);
    }
    return 0;
}