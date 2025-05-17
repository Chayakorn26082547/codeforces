// Find and Replace
#include<bits/stdc++.h>
using namespace std;
int mark[30];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        for(int i=0;i<26;i++)
            mark[i]=-1;
        int last=0,ch=1;
        for(int i=0;i<n;i++)
        {
            char s;
            cin >> s;
            if(mark[s-'a']==-1)
                mark[s-'a']=1-last;
            if(mark[s-'a']==last)
                ch=0;
            last=mark[s-'a'];
        }
        if(ch)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}