// Emordnilap
#include<bits/stdc++.h>
using namespace std;
#define int long long
int m=1e9+7;
int a[100100],b[100100];
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    for(int i=1;i<=100010;i++)
        a[i]=i+a[i-1],a[i]%=m;
    b[0]=1;
    for(int i=1;i<=100010;i++)
        b[i]=i*b[i-1],b[i]%=m;
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        cout << (((2*a[n-1])%m)*b[n])%m << '\n';
    }
    return 0;
}