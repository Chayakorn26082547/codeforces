// Two Groups
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
        int n,ans=0;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            ans+=num;
        }
        cout << abs(ans) << '\n';
    }
    return 0;
}