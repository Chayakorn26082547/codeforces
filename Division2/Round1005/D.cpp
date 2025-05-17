// Eating
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        int sum=a[n-1];
        for(int i=n-2;i>=0;i--){
            sum=sum^a[i];
            a[i]=max(a[i+1],sum);
        }
        sort(a.begin(),a.end());
        cout << '\n';
        while(q--){
            int x;
            cin >> x;
            cout << upper_bound(a.begin(),a.end(),x)-a.begin() << ' ';
        }
        cout << '\n';
    }
    return 0;
}
