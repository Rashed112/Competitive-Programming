#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int res = 0;
        cout << min(a, min(b, (a + b) / 3)) << endl;
    }
    
}
