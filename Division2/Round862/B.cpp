// The String Has a Target
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mn=30,idx=0;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,s[i]-'a');
            if(s[i]-'a'==mn)
                idx=i;
        }
        cout << s[idx];
        for(int i=0;i<n;i++)
        {
            if(i==idx)
                continue;
            cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}