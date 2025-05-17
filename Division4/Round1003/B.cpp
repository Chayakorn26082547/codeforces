// Skibidus and Ohio
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int ans=s.size();
        for(int i=1;i<s.size();i++)
            ans=((s[i]==s[i-1])?1:ans);
        cout << ans << '\n';
    }
    return 0;
}
