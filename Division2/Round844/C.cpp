// Equal Frequencies
#include<bits/stdc++.h>
using namespace std;
struct A{
    int idx,sz;
    bool operator<(const A&o)const{
        return sz>o.sz;
    }
};
char a[100100];
A b[30],c[30];
stack<int> v[30];
int s[30];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        memset(s,0,sizeof s);
        for(int i=0;i<n;i++)
            cin >> a[i] , v[a[i]-'a'].push(i) , s[a[i]-'a']++;
        for(int i=0;i<26;i++)
            b[i]={i,s[i]};
        sort(b,b+26);
        int mn=2e9,u;
        for(int i=1;i<=n;i++)
        {
            if(n%i!=0)
                continue;
            if(n/i>26)
                continue;
            for(int j=0;j<26;j++)
                c[j]=b[j];
            int sum=0;
            for(int j=0;j<26;j++)
            {
                if(c[j].sz==0)
                    break;
                for(int k=j+1;k<26;k++)
                {
                    if(c[j].sz==i)
                        break;
                    while(c[j].sz<i&&c[k].sz>i)
                        c[j].sz++,c[k].sz--,sum++;
                    while(c[j].sz>i&&c[k].sz<i)
                        c[j].sz--,c[k].sz++,sum++;
                }
                for(int k=25;k>j;k--)
                {
                    if(c[j].sz==i)
                        break;
                    while(c[j].sz<i&&c[k].sz<i&&c[k].sz>0)
                        c[j].sz++,c[k].sz--,sum++;
                }
            }
            int ch=0;
            for(int j=0;j<26;j++)
            {
                if(c[j].sz!=0&&c[j].sz!=i)
                    ch=1;
            }
            if(ch)
                continue;
            if(sum<mn)
                mn=sum,u=i;
        }
        for(int j=0;j<26;j++)
            c[j]=b[j];
        int i=u;
        for(int j=0;j<26;j++)
        {
            if(c[j].sz==0)
                break;
            for(int k=j+1;k<26;k++)
            {
                if(c[j].sz==i)
                    break;
                while(c[j].sz<i&&c[k].sz>i)
                    c[j].sz++,c[k].sz--,v[c[j].idx].push(v[c[k].idx].top()),v[c[k].idx].pop();
                while(c[j].sz>i&&c[k].sz<i)
                    c[j].sz--,c[k].sz++,v[c[k].idx].push(v[c[j].idx].top()),v[c[j].idx].pop();
            }
            for(int k=25;k>j;k--)
            {
                if(c[j].sz==i)
                    break;
                while(c[j].sz<i&&c[k].sz<i&&c[k].sz>0)
                    c[j].sz++,c[k].sz--,v[c[j].idx].push(v[c[k].idx].top()),v[c[k].idx].pop();
            }
        }
        for(int j=0;j<26;j++)
        {
            while(!v[j].empty())
                a[v[j].top()]=j+'a',v[j].pop();
        }
        cout << mn << '\n';
        for(int i=0;i<n;i++)
            cout << a[i] ;
        cout << '\n';
    }
    return 0;
}