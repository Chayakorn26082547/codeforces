// Settlement of Guinea Pigs
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
        int ans=0,now=0,cnt=0;
        while(n--)
        {
            int num;
            cin >> num;
            if(num==1)
            {
                now++;
                cnt++;
                ans=max(ans,now);
                continue;
            }
            if(cnt==0)
                continue;
            now=cnt/2+1;
            ans=max(ans,now);
        }
        cout << ans << '\n';
    }
    return 0;
}