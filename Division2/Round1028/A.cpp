// Gellyfish and Tricolor Pansy
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(min(a,c)>=min(b,d))
            cout << "Gellyfish\n";
        else
            cout << "Flower\n";
    }
    return 0;
}
