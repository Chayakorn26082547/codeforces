// Pull Your Luck
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,x,p;
        cin >> n >> x >> p;
        x=(n-x)%n;
        int ch=1;
        for(int i=0;i<2*n;i++)
        {
            int ans=i*i+i-((2*x)%(2*n));
            if(ans%(2*n)!=0)
                continue;
            ans=i;
            if(ans>0&&ans<=p)
            {
                cout << "YES\n";
                ch=0;
                break;
            }
            ans+=2*n;
            if(ans>0&&ans<=p)
            {
                cout << "YES\n";
                ch=0;
                break;
            }
        }
        if(ch)
            cout << "NO\n";
    }
    return 0;
}