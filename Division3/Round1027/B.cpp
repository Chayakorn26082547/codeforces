//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l=0,r=n-1,a=0,b=0,c=0;
        while(l<r){
            if(s[l]==s[r]&&s[l]=='0')
                a++;
            else if(s[l]==s[r]&&s[l]=='1')
                b++;
            else
                c++;
            l++,r--;
        }
        if(k>=a+b){
            if((k-a-b)%2==0)
                cout << "yes\n";
            else
                cout << "no\n";
        }
        else{
            if((a+b-k)%2==0&&a+b-k<=2*min(a,b))
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
    return 0;
}
