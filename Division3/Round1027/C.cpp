// Need More Arrays
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int last,ans=1;
        cin >> last;
        for(int i=1;i<n;i++){
            int num;
            cin >> num;
            if(num-last<=1)
                continue;
            ans++;
            last=num;
        }
        cout << ans << '\n';
    }
    return 0;
}
