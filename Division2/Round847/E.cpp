// Vlad and a Pair of Numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,ch=0,last=1,a=0,b=0;
        cin >> n;
        for(int i=0;i<31;i++)
        {
            if((1<<i)&n)
            {
                if(last!=0)
                {
                    ch=1;
                    break;
                }
                last=1;
                a+=(1<<i)+(1<<(i-1));
                b+=(1<<(i-1));
            }
            else
                last=0;
        }
        if(ch)
            cout << -1 << '\n';
        else
            cout << a << ' ' << b << '\n';
    }
    return 0;
}