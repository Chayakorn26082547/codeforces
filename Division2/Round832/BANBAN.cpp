// BAN BAN
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        cout << (n/2)+(n%2) << '\n';
        int l=1,r=3*n;
        while(l<r)
        {
            cout << l << ' ' << r << '\n';
            l+=3,r-=3;
        }
    }
    return 0;
}