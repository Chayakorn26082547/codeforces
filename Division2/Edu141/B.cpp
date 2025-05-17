// Matrix of Differences
#include<bits/stdc++.h>
using namespace std;
int mark[3100],a[55][55];
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0};
stack<int> st;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        a[1][1]=1;
        mark[1]=1;
        for(int m=n*n-1;m>=1;m--)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(!a[i][j])
                        continue;
                    for(int k=0;k<4;k++)
                    {
                        int ii=i+di[k],jj=j+dj[k];
                        if((!a[ii][jj])&&ii>=1&&ii<=n&&jj>=1&&jj<=n)
                        {
                            if((!mark[a[i][j]+m])&&((a[i][j]+m)<=(n*n)))
                                mark[a[i][j]+m]=1,a[ii][jj]=a[i][j]+m;
                            else if((!mark[a[i][j]-m])&&((a[i][j]-m)>=1))
                                mark[a[i][j]-m]=1,a[ii][jj]=a[i][j]-m;
                        }
                    }
                }
            }
        }
        for(int i=1;i<=n*n;i++)
        {
            if(!mark[i])
                st.push(i);
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i][j])
                    continue;
                a[i][j]=st.top();
                st.pop();
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cout << a[i][j] << ' ';
            cout << '\n';
        }
        memset(mark,0,sizeof mark);
        memset(a,0,sizeof a);
        while(!st.empty()) st.pop();
    }
    return 0;
}