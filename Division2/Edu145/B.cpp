// Points on Plane
#include<bits/stdc++.h>
using namespace std;
#define int long long
int play(int n)
{
    int l=0,r=1e9;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(mid*mid>=n)
            r=mid;
        else
            l=mid+1;
    }
    return l;
}
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        cout << play(n)-1 << '\n';
    }
    return 0;
}