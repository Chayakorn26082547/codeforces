// Devyatkino
#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    a[0]=1;
    for(int i=1;i<=9;i++)
        a[i]=a[i-1]*10;
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int ch=0;
        for(int i=0;i<=7;i++){
            int now=n-i;
            for(int j=9;j>=1;j--){
                if(now/a[j]<=7&&now/a[j]+i>=7)
                    ch=1;
                now%=a[j];
            }
            if(i==7||now==7||ch){
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}
