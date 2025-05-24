// Down with Brackets
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
        int cnt=0,sum=0;
        for(auto x:s){
            sum+=cnt==0;
            if(x=='(')
                cnt++;
            else
                cnt--;
        }
        if(sum>1)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
