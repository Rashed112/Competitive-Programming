bool isPossible(vector<int>&C, int A, long long int mid){
    int currSum = 0, cnt=1;
    for(int i=0;i<C.size();i++){
        if(C[i]+currSum<=mid){
            currSum+=C[i];
        }
        else{
            cnt++;
            if(cnt>C.size() || cnt>A || C[i]>mid){
                return false;
            }
            currSum = C[i];
        }
    }
    return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
    int sum = 0;
    for(int i=0;i<C.size();i++){
        sum+=C[i];
    }
    long long int l=1, r=sum;
    while(r-l>1){
        long long int mid = l+(r-l)/2;
        if(isPossible(C,A, mid)){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    if(isPossible(C, A, l)){
        return (l*B)%10000003;
    }
    else{
        return (r*B)%10000003;
    }
}
