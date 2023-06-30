#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x , y, z;
    x = k*l/(nl);
    y= c*d;
    z= p/(np);
    
    int res = min(x, min(y, z));
    cout<<res/n;
}
