// We Need the Zero
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
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            int num;
            cin >> num;
            sum=sum^num;
        }
        if(n%2==1)
            cout << sum << '\n';
        else if(sum!=0)
            cout << -1 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}