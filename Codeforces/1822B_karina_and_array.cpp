#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        //int a[n];
        ll x;
        vector<ll> pos, neg;
        for(ll i=0;i<n;i++){
            cin>>x;
            if(x<0){
                neg.push_back(x);
            }
            else{
                pos.push_back(x);
            }
        }
        sort(neg.begin(), neg.end());
        sort(pos.begin(), pos.end());
        ll max1=0, max2=0;
        if(pos.size()>=2){
            max1=pos[pos.size()-1]*pos[pos.size()-2];
        }
        if(neg.size()>=2){
            max2=neg[0]*neg[1];
        }
        if(pos.size()==1 && neg.size()==1){
            cout<<pos[0]*neg[0]<<endl;
            continue;
        }
        cout<<(max1>=max2? max1: max2)<<endl;
    }
}
