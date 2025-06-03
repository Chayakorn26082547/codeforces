// Energy Crystals
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        priority_queue<int> h;
        int x;
        cin >> x;
        for(int i=0;i<3;i++)
            h.push(0);
        int ans=0;
        while(-h.top()<x){
            int n=-h.top();
            h.pop();
            h.push(-(-2*h.top()+1));
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
