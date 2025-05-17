// Mex Master
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            if(num==0)
                cnt0++;
            if(num==1)
                cnt1++;
        }
        int sum=n/2+n%2;
        if(n==1&&cnt0==1)
            cout << 1 << '\n';
        else if(cnt0<=sum)
            cout << 0 << '\n';
        else if(cnt1+cnt0==n&&cnt1>=1)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';       
    }
    return 0;
}