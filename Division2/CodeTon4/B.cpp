// Candies
#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        if(n%2==0)
        {
            cout << -1 << '\n';
            continue;
        }
        int num=n/2,a;
        if(num%2==1)
            a=1;
        else
            a=-1;
        while(n>1)
        {
            if(n==3){
                ans.push_back(2);
                break;
            }
            if(a==1)
                ans.push_back(2);
            else
                ans.push_back(1);
            n-=a;
            n/=2;
            num=n/2;
            if(num%2==1)
                a=1;
            else
                a=-1;
        }
        int sz=ans.size();
        cout << sz << '\n';
        for(int i=sz-1;i>=0;i--)
            cout << ans[i] << ' ';
        cout << '\n';
        ans.clear();
    }
    return 0;
}