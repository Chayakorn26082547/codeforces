// Flexible String
#include<bits/stdc++.h>
using namespace std;
#define int long long
char a[100100],b[100100];
int dp[100100][20];
int mark[30];
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,k,ans=0;
        cin >> n >> k;
        cin >> a+1 >> b+1;
        int cnt=1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==b[i])
                continue;
            if(!mark[a[i]-'a'])
                mark[a[i]-'a']=cnt++;
        }
        for(int m=0;m<(1<<(cnt-1));m++)
        {
            int c=0;
            for(int i=0;i<10;i++)
                if((1<<i)&m)
                    c++;
            if(c>k)
                continue;
            c=0;
            int l=0;
            for(int i=1;i<=n;i++)
            {
                if(a[i]!=b[i]&&!(m&(1<<(mark[a[i]-'a']-1))))
                    l=i;
                c+=i-l;
            }
            ans=max(ans,c);
        }
        cout << ans << '\n';
        memset(mark,0,sizeof mark);
    }
    return 0;
}