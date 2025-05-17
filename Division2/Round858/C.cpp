// Sequence Master
#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    a[0]=a[1]=-2;
    a[2]=a[3]=2;
    for(int i=-7;i<=7;i++)
        for(int j=-7;j<=7;j++)
            for(int k=-7;k<=7;k++)
                for(int l=-7;l<=7;l++)
                    if(i*j==k+l&&j*k==i+l&&k*l==j+i&&abs(a[0]-i)+abs(a[1]-j)+abs(a[2]-k)+abs(a[3]-l)==5)
                        cout << i << j << k << l << '\n';
    return 0;
}