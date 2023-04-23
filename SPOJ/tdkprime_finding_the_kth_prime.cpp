#include<bits/stdc++.h>
using namespace std;
bool marked[90000001];
vector<int>primes;
void sieve(){
    int maxN = 90000000;
    marked[0] = marked[1] = true;
    primes.push_back(2);
    for(int i=3; i*i<= maxN ;i+=2){
        if(marked[i]==false){
            for(int j=i*i;j<=maxN;j+=i){
                marked[j]=true;
            }
        }
    }
    //if we merge this push part in the sieve, it'll take long time and will get tle
    for(int i=3;i<=maxN; i+=2){
        if(marked[i]==false){
            primes.push_back(i);
        }
    }

}

int main()
{
    int t;
    cin>>t;
    sieve();
    while(t--){
        int n;
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
}
