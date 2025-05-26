// Square Year
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int sum=0;
        for(auto x:s)
            sum=sum*10+x-'0';
        int a=sqrt(sum);
        if(a*a!=sum)
            cout << -1 << '\n';
        else
            cout << 0 << ' ' << a << '\n';
    }
    return 0;
}
