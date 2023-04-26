#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        if(n%2){
            cout<<-1<<'\n';
        }
        else
        {
            for(int i=0;i<n;++i){
                if(i%2){
                    cout<<i<<" ";
                }
                else{
                    cout<<n-i<<" ";
                }
            }
            cout<<'\n';
        }
    }
}
