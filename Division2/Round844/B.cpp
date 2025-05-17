// Going to the Cinema
#include<bits/stdc++.h>
using namespace std;
int a[200100];
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
            if(a[i]>i)
                continue;
            if(i!=n-1&&i+1>=a[i+1])
                continue;
            ans++;
        }
        cout << ans+(a[0]!=0) << '\n';
    }
    cout << '\n';
    return 0;
}