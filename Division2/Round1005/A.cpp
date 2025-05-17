// Brogramming Contest
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans=0,now=0;
        for(int i=0;i<n;i++){
            if(s[i]-'0'==now)
                continue;
            ans++,now=s[i]-'0';
        }
        cout << ans << '\n';
    }
    return 0;
}
