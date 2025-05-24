// Racing
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
        vector<int> a(n),l(n),r(n),ans(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
            cin >> l[i] >> r[i];
        for(int i=n-2;i>=0;i--){
            r[i]=min(r[i],r[i+1]);
            if(a[i+1]==1&&r[i]==r[i+1])
                r[i]--;
        }
        int h=0,ch=0;
        for(int i=0;i<n;i++){
            if(a[i]!=-1)
                h+=a[i],ans[i]=a[i];
            else{
                if(h+1<=r[i])
                    h++,ans[i]=1;
                else
                    ans[i]=0;
            }
            if(h<l[i]||h>r[i])
                ch=1;
        }
        if(ch)
            cout << -1 << '\n';
        else{
            for(int i=0;i<n;i++)
                cout << ans[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}
