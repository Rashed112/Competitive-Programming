#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum;
        ll n1=(n-1)/3, n2=(n-1)/5, n3=(n-1)/15;
        ll sum1 = 3*n1*(n1+1)/2;
        ll sum2 = 5*n2*(n2+1)/2;
        ll sum3 = 15*n3*(n3+1)/2;
        sum = sum1+sum2-sum3;
        cout<<sum<<endl;
    }
}
