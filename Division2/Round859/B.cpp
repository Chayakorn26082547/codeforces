// Grab the Candies
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
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            if(num%2==0)
                sum1+=num;
            else
                sum2+=num;
        }
        if(sum1>sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}