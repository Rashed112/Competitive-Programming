#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;

#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin()) //returns pos equal or greater than of x
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
const int N  = 10000007;

void solve(){
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    int x3, y3, x4, y4;

    
    if(x1==x2){
        
        int dist = abs(y2-y1);
        (x1+dist<=1000) ? (x3=x1+dist) : (x3 = x1-dist);
        (x2+dist<=1000) ? (x4=x2+dist) : (x4 = x2-dist);
        //(y1+dist<=1000) ? (y3=y1+dist) : (y3 = y1-dist);
        //(y2+dist<=1000) ? (y4=y2+dist) : (y4 = y2-dist);
        cout<<x3<<" "<<y1<<" "<<x4<<" "<<y2<<endl;
        return;
    }
    if(y1==y2){
        
        int dist = abs(x2-x1);
        //(x1+dist<=1000) ? (x3=x1+dist) : (x3 = x1-dist);
        //(x2+dist<=1000) ? (x4=x2+dist) : (x4 = x2-dist);
        (y1+dist<=1000) ? (y3=y1+dist) : (y3 = y1-dist);
        (y2+dist<=1000) ? (y4=y2+dist) : (y4 = y2-dist);
        cout<<x1<<" "<<y3<<" "<<x2<<" "<<y4<<endl;
        return;
    }
    if(x1!=x2 && y1!=y2 && abs(x1-x2)==abs(y1-y2)){
        int dist = abs(y2-y1);
        (x1+dist<=1000) ? (x3=x1+dist) : (x3 = x1-dist);
        (x2+dist<=1000) ? (x4=x2+dist) : (x4 = x2-dist);
        (y1+dist<=1000) ? (y3=y1+dist) : (y3 = y1-dist);
        (y2+dist<=1000) ? (y4=y2+dist) : (y4 = y2-dist);
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
        return;
    }
    
    cout<<-1<<endl;
}

int main() {
    _ios;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
