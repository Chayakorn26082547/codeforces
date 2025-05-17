// Adjacent Digit Sums
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int x,y;
        cin >> x >> y;
        if(y==x+1||y<x&&(x-y+1)%9==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
