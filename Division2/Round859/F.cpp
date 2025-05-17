// Bouncy Ball
#include<bits/stdc++.h>
using namespace std;
int di[4]={-1,-1,1,1},dj[4]={-1,1,1,-1};
string s;
unordered_map<int,int> mark[4][25010];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int r,c,si,sj,ei,ej,k;
        cin >> r >> c >> si >> sj >> ei >> ej >> s;
        if(s=="UL")
            k=0;
        if(s=="UR")
            k=1;
        if(s=="DR")
            k=2;
        if(s=="DL")
            k=3;
        for(int i=1;i<=r;i++)
            for(int j=1;j<=c;j++)
                for(int m=0;m<4;m++)
                    mark[m][i][j]=-1;
        int cnt=0;
        int i=si,j=sj;
        while(1)
        {
            if(mark[k][i][j]!=-1)
                break;
            mark[k][i][j]=cnt;
            if(i==1&&j==1&&k==0)
                k=2,cnt++;
            else if(i==1&&j==c&&k==1)
                k=3,cnt++;
            else if(i==r&&j==1&&k==3)
                k=1,cnt++;
            else if(i==r&&j==c&&k==2)
                k=0,cnt++;
            else if(i==1&&k==0)
                k=3,cnt++;
            else if(i==1&&k==1)
                k=2,cnt++;
            else if(i==r&&k==2)
                k=1,cnt++;
            else if(i==r&&k==3)
                k=0,cnt++;
            else if(j==1&&k==0)
                k=1,cnt++;
            else if(j==1&&k==3)
                k=2,cnt++;
            else if(j==c&&k==1)
                k=0,cnt++;
            else if(j==c&&k==2)
                k=3,cnt++;
            else
                i+=di[k],j+=dj[k];
        }
        int ans=1e9;
        for(int m=0;m<4;m++)
            if(mark[m][ei][ej]!=-1)
                ans=min(ans,mark[m][ei][ej]);
        if(ans==1e9)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}