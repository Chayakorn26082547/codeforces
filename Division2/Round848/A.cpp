// Flip Flop Sum
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        int sum=0,mx=-1e9;
        for(int i=1;i<=n;i++)
            cin >> a[i] , sum+=a[i];
        for(int i=1;i<n;i++)
            mx=max(mx,((a[i]==1)?-2:2)+((a[i+1]==1)?-2:2));
        cout << sum+mx << '\n';
    }
    return 0;
}