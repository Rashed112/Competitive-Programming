/*
Hint: convert 2-D to 1-D row/column-wise, then think..
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n, m, rb,cb,rd,cd;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>rb>>cb>>rd>>cd;
        cout<< min(
            rb<=rd ? rd-rb : 2*n-rb-rd,
            cb<=cd ? cd-cb : 2*m-cb-cd
            )<<"\n";
        
    }
    return 0;
}
