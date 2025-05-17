// Everybody Likes Good Arrays
#include<bits/stdc++.h>
using namespace std;
int a[1000];
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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int j;
            for(j=i+1;j<n&&(a[j]%2)==(a[i]%2);j++);
            ans+=j-i-1;
            i=j-1;
        }
        cout << ans << '\n';
    }
    return 0;
}