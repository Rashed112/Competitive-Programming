bool isPossible(vector<int>&A, int B, int mid){
    int cnt=1, currSum=0;
    for(int i=0;i<A.size();i++){
        
        if(currSum+A[i]<=mid){
            currSum+=A[i];
        }
        else{
            cnt++;
            if(cnt>B || A[i]>mid){
                return false;
            }
            currSum=A[i];
        }
        
    }
    return true;
}

int Solution::books(vector<int> &A, int B) {
    if(B>A.size()){
        return -1;
    }
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
    }
    int l=1, r=sum;
    while(r-l>1){
        int m = l+(r-l)/2;
        if(isPossible(A, B, m)){
            r=m;
        }
        else{
            l=m+1;
        }
    }
  
    if(isPossible(A, B, l)){
        return l;
    }
    else if(isPossible(A, B, r)){
        return r;
    }
    else{
        return -1;
    }
    
}
