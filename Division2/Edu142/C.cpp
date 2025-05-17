// Min Max Sort
#include<bits/stdc++.h>
using namespace std;
int a[200100];
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
        {
            int num;
            cin >> num;
            a[num]=i;
        }
        int l,r,ans=0;
        if(n%2==1)
            l=n/2,r=l+2;
        else
            l=n/2,r=l+1;
        while(l>=1&&r<=n)
        {
            if((a[l]>a[r])||(a[l]>a[l+1])||(a[r]<a[r-1]))
                ans++,a[l]=0,a[r]=n+1;
            l--,r++;
        }
        cout << ans << '\n';
    }
    return 0;
}