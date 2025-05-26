// Come a Little Closer
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        vector<int> x(n),y(n);
        int mxx1=0,mxy1=0,mnx1=1e9,mny1=1e9,
        mxx2=0,mxy2=0,mnx2=1e9,mny2=1e9;
        for(int i=0;i<n;i++){
            cin >> x[i] >> y[i];
            if(x[i]>mxx1)
                mxx2=mxx1,mxx1=x[i];
            else if(x[i]>mxx2)
                mxx2=x[i];
            if(x[i]<mnx1)
                mnx2=mnx1,mnx1=x[i];
            else if(x[i]<mnx2)
                mnx2=x[i];

            if(y[i]>mxy1)
                mxy2=mxy1,mxy1=y[i];
            else if(y[i]>mxy2)
                mxy2=y[i];
            if(y[i]<mny1)
                mny2=mny1,mny1=y[i];
            else if(y[i]<mny2)
                mny2=y[i];
        }
        int ans=(mxx1-mnx1+1)*(mxy1-mny1+1);
        for(int i=0;i<n;i++){
            int a=(x[i]==mxx1?mxx2:mxx1)
            -(x[i]==mnx1?mnx2:mnx1)+1;
            int b=(y[i]==mxy1?mxy2:mxy1)
            -(y[i]==mny1?mny2:mny1)+1;
            if(a*b==n-1)
                ans=min(ans,min((a+1)*b,a*(b+1)));
            else
                ans=min(ans,a*b);
        }
        cout << ans << '\n';
    }
    return 0;
}
