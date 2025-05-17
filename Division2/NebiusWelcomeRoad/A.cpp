// Lame King
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,m;
};
queue<A> bfs;
int dis[210][210][10];
int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    for(int i=1;i<=201;i++)
        for(int j=1;j<=201;j++)
            for(int k=0;k<=4;k++)
                dis[i][j][k]=1e9;
    bfs.push({101,101,4});
    dis[101][101][4]=0;
    while(!bfs.empty())
    {
        int i=bfs.front().i,j=bfs.front().j,m=bfs.front().m;
        bfs.pop();
        if(m!=4&&(dis[i][j][4]==1e9))
            dis[i][j][4]=dis[i][j][m]+1,bfs.push({i,j,4});
        for(int k=0;k<4;k++)
        {
            int ii=i+di[k],jj=j+dj[k];
            if(ii<1||ii>201||jj<1||jj>201||m==k)
                continue;
            if(dis[ii][jj][k]!=1e9)
                continue;
            dis[ii][jj][k]=dis[i][j][m]+1;
            bfs.push({ii,jj,k});
        }
    }
    int q;
    cin >> q;
    while(q--)
    {
        int ei,ej;
        cin >> ei >> ej ;
        ei+=101,ej+=101;
        int ans=1e9;
        for(int k=0;k<5;k++)
            ans=min(ans,dis[ei][ej][k]);
        cout << ans << '\n';
    }
    return 0;
}