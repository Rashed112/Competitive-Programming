int superDigit(string n, int k) {
    if(n.size()==1){
        return stoi(n);
    }
    long long int num =0;
    for(int i=0;i<n.size();i++){
        num+=n[i]-'0';
    }
    num*=k;
    return superDigit(to_string(num), 1);
}
