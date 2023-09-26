#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;

#define fill(a) memset(a, 0, sizeof(a))
#define all(v) (v).begin(), (v).end()
#define sp(k) cout << setprecision(k) << fixed;
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define irep(i, b, a) for (int i = (b); i >= (a); --i)
#define minv(v) *min_element(v.begin(), v.end())
#define maxv(v) *max_element(v.begin(), v.end())
#define each(it, s) for (auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)), (v).erase(unique((v).begin(), (v).end()), (v).end())
#define getpos(v, x) (lower_bound(v.begin(), v.end(), x) - v.begin()) // returns pos equal or greater than of x
#define _ios                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define nl "\n"
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
const int N = 10000007;
bool sortFunc(const vector<int> &p1, const vector<int> &p2)
{
    return p1.size() < p2.size();
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> vv;
    unordered_map<int, int>u1;
    unordered_set<int>s1;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int>temp(m);
        for(int j=0;j<m;j++){
            cin>>temp[j];
            u1[temp[j]]++;
        }
        vv.pb(temp);
    }
    
    int res = 0;
    for(auto a: u1){
        auto temp = u1;
        for(auto v : vv){
            int f =0;
            for(auto x : v){
                if(a.first==x){
                    f=1;
                }
            }
            if(f){
                for(auto x : v){
                    temp[x]--;
                }
            }
        }
        int cnt =0;
        for(auto x : temp){
            if(x.second){
                cnt++;
            }
        }
        res = max(res, cnt);
    }
    cout<<res<<endl;
}

int main()
{
    _ios;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
