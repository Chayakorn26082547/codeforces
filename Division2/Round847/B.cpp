// Taisia and Dice
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,r,s;
        cin >> n >> s >> r;
        cout << s-r << ' ';
        n--;
        int a=r/n,b=r%n;
        for(int i=1;i<=n;i++)
        {
            if(i<=b)
                cout << a+1 << ' ';
            else
                cout << a << ' ';
        }
        cout << '\n';
    }
    return 0;
}