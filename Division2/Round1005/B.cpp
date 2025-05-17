// Variety is Discouraged
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
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int l=0,r=0,ans=0;
        for(int i=0;i<n;i++){
            if(mp[v[i]]!=1)
                continue;
            int j;
            for(j=i;j<n&&mp[v[j]]==1;j++);
            if(j-i>ans)
                ans=j-i,l=i+1,r=j;
            i=j;
        }
        if(ans)
            cout << l << ' ' << r << '\n';
        else
            cout << "0\n";
    }
    return 0;
}
