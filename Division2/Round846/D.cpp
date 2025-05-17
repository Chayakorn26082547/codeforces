// Bit Guessing Game
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
        int mn=n,sum=0,ans=0,i=0;
        while(n>0)
        {
            int now=(1<<i)-sum;
            cout << "- "<< now << '\n';
            cout.flush();
            cin >> n;
            if(n<mn)
                mn=n,ans+=(1<<i),sum=0;
            else
                sum+=now;
            i++;
        }
        cout << "! " << ans << '\n';
        cout.flush(); 
    }
    return 0;
}