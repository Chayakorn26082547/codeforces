// Make it beautifukl
#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n,greater<int>());
        int j;
        for(j=0;j<n&&a[j]==a[0];j++);
        if(j<n)
            swap(a[0],a[j]);
        int sum=a[0],ch=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]==sum)
                ch=1;
            sum+=a[i];
        }
        if(ch)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(int i=0;i<n;i++)
                cout << a[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}