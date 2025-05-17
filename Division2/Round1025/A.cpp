// It's Time To Duel
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n,l;
        cin >> n;
        cin >> l;
        int ch=0;
        for(int i=1;i<n;i++){
            int r,nxt=0;
            cin >> r;
            if(l==0&&r==0)
                ch=1;
            if(l==0&&r==1)
                nxt=2;
            if(l==1&&r==0)
                nxt=0;
            if(l==1&&r==1)
                nxt=1;
            if(l==2)
                nxt=(r==0)?0:2;
            l=nxt;
        }
        if(ch||l==1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
