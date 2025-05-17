// Slice to Survive
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n,m,a,b;
        cin >> n >> m >> a >> b;
        int cnt=1;
        int nn=n,mm=m-b+1;
        while(nn!=1||mm!=1){
            if(nn>mm)
                nn=nn/2+nn%2;
            else
                mm=mm/2+mm%2;
            cnt++;
        }
        int ans=cnt;
        cnt=1;
        nn=n,mm=b;
        while(nn!=1||mm!=1){
            if(nn>mm)
                nn=nn/2+nn%2;
            else
                mm=mm/2+mm%2;
            cnt++;
        }
        ans=min(ans,cnt);
        cnt=1;
        nn=n-a+1,mm=m;
        while(nn!=1||mm!=1){
            if(nn>mm)
                nn=nn/2+nn%2;
            else
                mm=mm/2+mm%2;
            cnt++;
        }
        ans=min(ans,cnt);
        cnt=1;
        nn=a,mm=m;
        while(nn!=1||mm!=1){
            if(nn>mm)
                nn=nn/2+nn%2;
            else
                mm=mm/2+mm%2;
            cnt++;
        }
        ans=min(ans,cnt);
        cout << ans << '\n';
    }
    return 0;
}
