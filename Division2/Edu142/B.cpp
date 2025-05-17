//  Stand-up Comedian
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
        int h1=a,h2=a,ans=a;
        if(a==0)
        {
            cout << 1 << '\n';
            continue;
        }
        int mn=min(b,c);
        ans+=mn*2;
        b-=mn,c-=mn;
        if(c==0)
        {
            if(h2>=b)
                h1+=b,h2-=b,ans+=b,b=0;
            else
                ans+=h2+1,h2=-1;
        }
        else
        {
            if(h1>=c)
                h2+=c,h1-=c,ans+=c,c=0;
            else
                ans+=h1+1,h1=-1;
        }
        if(h1<0||h2<0)
        {
            cout << ans <<'\n';
            continue;
        }
        ans+=min({h1+1,h2+1,d});
        cout << ans << '\n';
    }
    return 0;
}