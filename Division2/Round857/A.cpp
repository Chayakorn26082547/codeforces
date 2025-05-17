// Likes
#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            if(mp[-num])
                cnt++;
            mp[num]++;
        }
        int num=n-cnt;
        mp.clear();
        for(int i=1;i<=n;i++)
            cout << min(i,num)-((i>num)?i-num:0) << ' ';
        cout << '\n';
        for(int i=1;i<=n;i++)
            cout << max(0,i-cnt*2)+((i>cnt*2)?0:i%2) << ' ';
        cout << '\n';
    }
    return 0;
}