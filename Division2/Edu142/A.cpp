// GamingForces
#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=0)
                continue;
            if(a[i]>1)
                ans++;
            else
                ans++,a[i+1]--;
        }
        cout << ans << '\n';
    }
    return 0;
}