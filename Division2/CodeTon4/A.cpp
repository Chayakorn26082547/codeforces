// Beautiful Sequence
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
        int ch=0;
        for(int i=1;i<=n;i++)
        {
            int num;
            cin >> num;
            if(num<=i)
                ch=1;
        }
        if(ch)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}