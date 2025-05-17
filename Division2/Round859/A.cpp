// Plus or Minus
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b==c)
            cout << '+';
        else
            cout << '-';
        cout << '\n';
    }
    return 0;
}