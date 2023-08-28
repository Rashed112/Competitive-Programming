#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    string a, b;
    cin>>a>>b;
    //reverse(all(a));
    //reverse(all(b));
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]=='0'){
            a.pop_back();
        }
        else{
            break;
        }
    }
    for(int i=b.size()-1;i>=0;i--){
        if(b[i]=='0'){
            b.pop_back();
        }
        else{
            break;
        }
    }
    //cout<<a<<" "<<b;
    int i=0,j=0;
    vector<int>res;
    int carry = 0;
    while(i<a.size() && j<b.size()){
        int sum = (a[i]-'0') + (b[i]-'0') + carry;
        //cout<<"sum="<<sum;
        res.push_back(sum%10);
        carry = sum/10;
        i++;
        j++;
    }
    while(i<a.size()){
        int sum = (a[i]-'0') + carry;
        carry = sum/10;
        res.push_back(sum%10);
        i++;
    }
    while(j<b.size()){
        int sum = (b[j]-'0') + carry;
        carry = sum/10;
        res.push_back(sum%10);
        j++;
    }
    if(carry>0){
        res.push_back(carry);
    }
    int k=0;
    while(res[k]==0) k++;
    for( ; k<res.size();k++){
        cout<<res[k];
    }
    cout<<'\n';
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
