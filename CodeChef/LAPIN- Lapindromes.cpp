/*
Hint1: Not necessarily both parts have to be identical.

Hint2: check the frequency of same characters in both parts are the same or not and is every character exists in both parts. 

Hint3: use Map for simplicity.
*/

#include<bits/stdc++.h>
using namespace std;

//Complete Equality of Map
template <typename Map>
bool map_compare (Map const &lhs, Map const &rhs) {
    // No predicate needed because there is operator== for pairs already.
    return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin());
}

//Key Equality of Map
template <typename Map>
bool key_compare (Map const &lhs, Map const &rhs) {
    return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin(),
                      [] (auto a, auto b) { return a.first == b.first; });
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        map< char, int > m1,m2;
        for(int i=0;i<l/2;i++){
            m1[s[i]]++;
        }
        int j=0;
        if(l%2){
            j=l/2+1;
        }
        else{
            j=l/2;
        }
        for(j;j<l;j++){
            m2[s[j]]++;
        }
        if(map_compare(m1,m2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}


//################ Alternative Simple Solution: ######################

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        map< char, int > m1,m2;
        for(int i=0;i<l/2;i++){
            m1[s[i]]++;
        }
        int j=0;
        if(l%2){
            j=l/2+1;
        }
        else{
            j=l/2;
        }
        for(j;j<l;j++){
            m2[s[j]]++;
        }
        int f=0;
        for(int i=0;i<l/2;i++){

            if(m1[s[i]]!=m2[s[i]]){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;

}

