// Candy Store
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
        int n;
        cin >> n;
        int ans=0,g,l,gc;
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin >> a >> b;
            if(i==1)
            {
                ans++;
                g=a*b;
                l=a*b;
                gc=a;
                cout << ans << ' ';
                continue;
            }
            int gg=__gcd(g,a*b);
            int ll=a*b*g/gg;
            if(gc%(ll/(a*b))!=0)
                ans++,g=a*b,l=a*b,gc=a;
            else
                g=gg,l=ll,gc=__gcd(gc,a);
            cout << ans <<  ' ';
        }
        cout << '\n'
    }
    return 0;
}