// Skibidus and Amog'u
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
        s.pop_back();
        s.pop_back();
        cout << s+'i' << '\n';
    }
    return 0;
}
