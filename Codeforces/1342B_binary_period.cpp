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

void solve()
{
    string s;
    cin >> s;
    int f = 0, n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        if (n % 2)
        {
            cout << s + s << endl;
        }
        else
        {
            cout << s << endl;
        }
        return;
    }
    string res = "";
    res += s[0];
    char ch;

    for (int i = 1; i < n; i++)
    {
        s[i - 1] == '1' ? ch = '0' : ch = '1';
        s[i - 1] == '0' ? ch = '1' : ch = '0';
        if (ch == s[i])
        {
            res += ch;
        }
        else
        {

            res += ch;
            res += s[i];
        }
    }

    cout << res << endl;
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
