// Parallel Projection
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int w,d,h;
        cin >> w >> d >> h;
        int a,b,f,g;
        cin >> a >> b >> f >> g;
        cout << min({a+h+abs(0-f)+abs(b-g),b+h+abs(a-f)+abs(0-g),
        w-a+h+abs(w-f)+abs(b-g),d-b+h+abs(a-f)+abs(d-g)}) << '\n';
    }
    return 0;
}