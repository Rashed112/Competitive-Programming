/*
Hint1: think about the length of the string

Hint2: in a square string, there should be only one substring..
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int cnt=0;
        int l=str.length();
        if(l%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0; i<l/2; i++)
            {
                if(str[i]==str[i+l/2])
                {
                    continue;
                }
                else
                {
                    cnt++;
                    break;
                }
            }
            if(cnt) cout<<"NO"<<endl;

            else cout<<"YES"<<endl;
        }

    }
    return 0;
}
