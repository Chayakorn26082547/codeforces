// Make It Permutation
#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100100];
signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n,c,d;
        cin >> n >> c >> d;
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int ans=n*c+d;
        int sum=0;
        int last=0;
        for(int i=0;i<n;i++)
        {
            int j;
            for(j=i+1;j<n&&a[i]==a[j];j++);
            j--;
            int num=j-i;
            sum+=num*c;
            if(j>=n)
                break;
            int dif=a[i]-last;
            sum+=(dif-1)*d;
            ans=min(ans,sum+c*(n-1-j));
            last=a[i];
            i=j;
        }
        cout << ans << '\n';
    }
    return 0;
}