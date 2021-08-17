class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLen=0;      
        int n=s.size();
        
        vector<int> l(26, -1);
        for(int i=0; i<n;  ++i) {
            if(l[s[i] - 'a'] == -1) {
                l[s[i] - 'a'] = i;
            }
        }
        vector<int> r(26, -1);
        for(int i=n-1; i>=0; --i) {
            if(r[s[i] - 'a'] == -1) {
                r[s[i] - 'a'] = i;
            } 
        }
        
        for(int i=0; i<26 && l[i]!=-1; ++i)
                maxLen = max(maxLen, r[i]-l[i]);
        
        return maxLen-1;
    }
};