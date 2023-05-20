//there is an amazing trick which you'll get if you simulate some example
//hints: if there is odd numbers with even, then it's not possible to make the whole array of odds, but it's possible to make it an array of even numbers
/*hints: then make some observations to find the final condition which is even if we try to make the whole array even, there is a case when
 it still is not possible*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        vector<int> odd, even;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2){
                odd.push_back(x);
            }
            else{
                even.push_back(x);
            }
        }
        if(odd.size()==0 || even.size()==0){
            cout<<"YES"<<endl;
            continue;
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        if(even[0]>odd[0]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }
}
