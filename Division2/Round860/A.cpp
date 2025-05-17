// Showstopper
#include<bits/stdc++.h>
using namespace std;
int a[200],b[200];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        for(int i=1;i<=n;i++)
            cin >> a[i];
        for(int i=1;i<=n;i++)
            cin >> b[i];
        for(int i=1;i<=n;i++)
        {
            if(a[i]>b[i])
                swap(a[i],b[i]);
        }
        int ch=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[n]||b[i]>b[n])
                ch=0;
        }
        if(ch)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}