// Many Perfect Squares
#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100];
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,ans=0;
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i] ;
            if((int)sqrt(a[i])*(int)sqrt(a[i])==a[i])
                ans++;
        }
        sort(a+1,a+n+1);
        int ch=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==a[i-1])
                ch++;
            else
                ch=1;
            ans=max(ans,ch);
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if((a[j]-a[i])%2==0)
                    continue;
                int sum=(a[j]-a[i]-1)/2;
                sum*=sum;
                if(a[i]>sum)
                    continue;
                int add=sum-a[i];
                if(add>1e18)
                    continue;
                int cnt=0;
                for(int k=1;k<=n;k++)
                {
                    int now=a[k]+add;
                    if((int)sqrt(now)*(int)sqrt(now)==now)
                        cnt++;
                }
                ans=max(ans,cnt);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}