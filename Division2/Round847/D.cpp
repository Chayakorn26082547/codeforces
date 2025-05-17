// Matryoshkas
#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> mp;
int a[200100];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int num=a[i];
            mp[num]++;
            if(!mp[num-1])
                ans++;
            else
                mp[num-1]--;
        }
        cout << ans << '\n';
        mp.clear();
    }
    return 0;
}