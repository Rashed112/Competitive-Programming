int makeAnagram(string a, string b) {
    unordered_map<char, int>um;
    for(int i=0;i<a.size();i++){
        um[a[i]]++;
    }
    for(int i=0;i<b.size();i++){
        um[b[i]]--;
    }
    int res=0;
    for(auto x: um){
        res+=abs(x.second);
    }
    return res;
}
