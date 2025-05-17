// Hayato and School
#include<bits/stdc++.h>
using namespace std;
int a[100100],cnt[2];
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
            cin >> a[i];
            cnt[a[i]%2]++;
        }
        if(cnt[1]>=1&&cnt[0]>=2)
        {
            cout << "YES\n";
            int l=0,r=0;
            for(int i=1;i<=n;i++)
            {
                if(l<1&&(a[i]%2==1))
                    cout << i << ' ' , l++;
                if(r<2&&(a[i]%2==0))
                    cout << i << ' ' , r++;
            }
            cout << '\n';
        }
        else if(cnt[1]>=3)
        {
            int l=0;
            cout << "YES\n";
            for(int i=1;i<=n;i++)
            {
                if(l<3&&(a[i]%2==1))
                    cout << i << ' ' ,l++;
            }
            cout << '\n';
        }
        else
            cout << "NO\n";
        cnt[0]=cnt[1]=0;
    }
    return 0;
}