/*
Hint1: think about a way to find ideal a, b, c or in your case x, y, z. 
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,a,b,c,d,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(abs(c-a)%2==0)
        {
            d=(c-a)/2;
            x=a+d;
            if(x>0 && x%b==0 && x-d==a && x+d==c)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
        d=b-a;
        x=b+d;
        if(x>0 && x%c==0 && x-d==b && x-2*d==a){
            cout<<"YES"<<endl;
            continue;
        }
        d=c-b;
        x=b-d;
        if(x>0 && x%a==0 && x+d==b && x+2*d==c ){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
