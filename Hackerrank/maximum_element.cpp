vector<int> getMax(vector<string> operations) {
    vector<int> v, res;
    stack<int>s;
    int n=operations.size(), x, maxN=-1;
    for(int i=0;i<n;i++){
        string st=operations[i];
        int d = st[0]-'0';
        if(st[0] == '1'){
            x = stoi(st.substr(2));
        }
        if(d==1){
            v.push_back(x);
        }
        else if(d==2){
            v.pop_back();
        }
        else{
            int maxV = *max_element(v.begin(), v.end());
            res.push_back(maxV);
        }
    }
    return res;
}
