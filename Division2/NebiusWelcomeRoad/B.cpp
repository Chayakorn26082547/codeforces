// Vaccination
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,k,d,w;
        cin >> n >> k >> d >> w;
        int p=0,ans=0,t=0;
        for(int i=1;i<=n;i++)
        {
            int num;
            cin >> num;
            if(p==0||t<num)
            {
                ans++;
                t=num+w+d;
                p=k-1;
                continue;
            }
            p--;
        }
        cout << ans << '\n';
    }
    return 0;
}