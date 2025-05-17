// Premutation
#include<bits/stdc++.h>
using namespace std;
int a[110][110],mark[110];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,ch;
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
                cin >> a[i][j];
            mark[a[i][1]]++;
            if(mark[a[i][1]]>1)
                ch=a[i][1];
        }
        for(int i=1;i<=n;i++)
        {
            if(mark[a[i][1]]==1)
            {
                cout << ch << ' ';
                for(int j=1;j<n;j++)
                    cout << a[i][j] << ' ';
                cout << '\n';
            }
        }
        memset(mark,0,sizeof mark);
    }
    return 0;
}