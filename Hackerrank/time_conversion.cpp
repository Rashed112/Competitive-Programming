#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1, s2, s3;
    cin>>s;
    s1 = s.substr(8, 2);
    s2 = s.substr(0, 2);
    s3 = s.substr(2, 6);

    if(s1 == "AM" && s2 == "12"){
        s2="00";
    }
    else if(s1=="PM" && s2!="12"){
        int temp = stoi(s2)+12;
        string s4 = to_string(temp);
        s2=s4;
    }
    cout<<s2+s3<<endl;
}
