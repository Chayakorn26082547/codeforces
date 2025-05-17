// Polycarp and the Day of Pi
#include<bits/stdc++.h>
using namespace std;
char ch[40]="314159265358979323846264338327";
char a[40];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        cin >> a;
        int sz=strlen(a);
        int ans=0;
        for(int i=0;i<sz;i++)
        {
            if(ch[i]!=a[i])
                break;
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}