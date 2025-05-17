// Climbing the Tree
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int q;
        cin >> q;
        int l=0,r=1e18;
        while(q--)
        {
            int op;
            cin >> op;
            if(op==1)
            {
                int a,b,n;
                cin >> a >> b >> n;
                int ll,rr;
                if(n==1)
                    ll=0,rr=a;
                else
                {
                    ll=(a-b)*(n-2)+a+1;
                    rr=(a-b)*(n-1)+a;
                }
                if(ll>r||rr<l)
                {
                    cout << 0 << ' ';
                    continue;
                }
                cout << 1 << ' ';
                l=max(l,ll);
                r=min(rr,r);
            }
            else
            {
                int a,b;
                cin >> a >> b;
                int ll=(l-a)/(a-b);
                if((l-a)%(a-b)!=0)
                    ll++;
                if(l<=a)
                    ll=0;
                int rr=(r-a)/(a-b);
                if((r-a)%(a-b)!=0)
                    rr++;
                if(r<=a)
                    rr=0;
                if(ll!=rr)
                    cout << -1 << ' ';
                else
                    cout << ll+1 << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}