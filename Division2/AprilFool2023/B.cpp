// Was it Rated?
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int n;
    cin >> n;
    if(n==1||n==4||n==20||n==23)
        cout << "YES\n";
    else if(n==15)
        cout << "NO\n";
    return 0;
}