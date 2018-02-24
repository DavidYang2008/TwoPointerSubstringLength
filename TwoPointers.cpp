class Solution {
        
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        
        return sub2(s);

    }
    
    // Use two pointers 
    int sub2(const string& s) {
        vector<int> aHash(256, -1);
        int lIdx=0, rIdx=1;
        int res=1;
        aHash[s[0]]=0;
        while (rIdx<s.size()) {
            if (aHash[s[rIdx]]>=lIdx) {
                // find a repeating char
                
                // cache the substring length so far
                res=max(res, rIdx-lIdx);
                lIdx=aHash[s[rIdx]]+1;
            } else {
                // no repeating char so far
                res=max(res, rIdx-lIdx+1);
            }
            aHash[s[rIdx]]=rIdx;
            rIdx++;
        }
        return res;
    }
    

};
