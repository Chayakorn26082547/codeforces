// Two Large Bags
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
        vector<int> v(n+1);
        for(int i=0;i<n;i++){
            int num;
            cin >> num;
            v[num]++;
        }
        string ans="YES";
        for(int i=1;i<=n;i++){
            if(v[i]>2)
                v[i+1]+=v[i]-2,v[i]=2;
            if(v[i]%2==1)
                ans="NO";
        }
        cout << ans << '\n';
    }
    return 0;
}
