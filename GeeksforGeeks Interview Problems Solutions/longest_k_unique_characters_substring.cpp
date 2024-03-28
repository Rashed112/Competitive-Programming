unordered_map<char, int>m, temp;
        

        int l = 0, r = 0, len = -1;
        while(r<s.size()){
            
            m[s[r]]++;
            //cout<<m[s[r]]<<" ";
            
            if(m.size() < k){
                r++;
            }
            else if(m.size() == k){
                len = max(len, r-l+1);
                r++;
            }
            else if(m.size() > k){
                while(m.size()>k){
                    m[s[l]]--;
                    if(m[s[l]]==0){
                        m.erase(s[l]);
                    }
                    l++;
                }
                r++;
            }
        }
        return len;
