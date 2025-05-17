// Yet Another Tournament
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,idx,w;
};
bool val(A a,A b)
{
    if(a.v!=b.v)
        return a.v<b.v;
    return a.idx<b.idx;
}
bool win(A a,A b)
{
    if(a.w!=b.w)
        return a.w>b.w;
    return a.idx>b.idx;
}
A a[500100];
int mark[500100];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,m;
        cin >> n >> m;
        for(int i=0;i<n;i++)
            cin >> a[i].v , a[i].idx=i , a[i].w=n-1-i;
        sort(a,a+n,val);
        int sum=0,ch=1,s;
        a[n].w=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i].v;
            if(sum<=m)
                a[n].w++;
            else{
                a[i].w++,mark[i]=1;
                if(ch&&i>0)
                    ch=0;
                    s=sum-a[i-1].v-a[i].v;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(mark[i])
            {
                mark[i]=0;
                continue;
            }
            if(s+a[i].v<=m&&a[i].w-1==a[n].w)
            {
                a[i].w--;
                break;
            }
        }
        a[n].idx=n;
        sort(a,a+n+1,win);
        for(int i=0;i<=n;i++)
        {
            if(a[i].idx==n)
                cout << i+1 << '\n';
        }
    }
    return 0;
}