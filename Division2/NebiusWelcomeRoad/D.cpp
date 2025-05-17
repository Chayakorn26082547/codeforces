// Accommodation
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int r,c;
    cin >> r >> c;
    int mx=0,mn=0,ans=0;
    for(int i=1;i<=r;i++)
    {
        int cnt1=0,cnt2=0;
        int last=-1,ch=1,ch2=1;
        for(int j=1;j<=c;j++)
        {
            char s;
            cin >> s;
            int num=s-'0';
            if(num==1)
                ans++;
            if(last==1&&ch&&cnt2<c/4&&num==1)
                mn++,ch=0,cnt2++;
            else
                ch=1;
            if(last==1&&num==0&&ch2&&(cnt1<c/4))
                ch2=0,cnt1++;
            else if(last==0&&num==1&&ch2&&(cnt1<c/4))
                ch2=0,cnt1++;
            else
                ch2=1;
            last=num;
        }
        mx+=c/4-cnt1;
    }
    cout << ans-mn << ' ' << ans-mx << '\n';
    return 0;
}