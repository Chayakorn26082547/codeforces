// Skibidus and Sigma
#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[200100];
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n,m,ans=0;
        cin >> n >> m;
        vector<int> v;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=1;j<=m;j++){
                cin >> dp[j];
                dp[j]+=dp[j-1];
                sum+=dp[j];
            }
            v.push_back(dp[m]);
            ans+=sum;
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0,k=m*(n-1);i<n-1;i++,k-=m)
            ans+=k*v[i];
        cout << ans << '\n';
    }
    return 0;
}
