// Fashionable Array
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
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a.begin(),a.end());
        int lo=-1,le=-1,ro=-1,re=-1;
        for(int i=0;i<n;i++){
            if(a[i]%2)
                ro=i,lo=(lo==-1)?i:lo;
            else
                re=i,le=(le==-1)?i:le;
        }
        ro=n-1-ro,re=n-1-re;
        cout << min(lo+ro,le+re) << '\n';
    }
    return 0;
}
