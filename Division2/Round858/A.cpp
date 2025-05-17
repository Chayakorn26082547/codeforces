// Walking Master
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b>d)
        {
            cout << -1 << '\n';
            continue;
        }
        a+=d-b;
        int ans=0;
        ans+=d-b;
        b=d;
        if(c>a)
        {
            cout << -1 << '\n';
            continue;
        }
        cout << ans+a-c << '\n';
    }
    return 0;
}