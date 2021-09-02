class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl = s.size();
        int tl = t.size();
        
        int si=0;
        int ti=0;
        
        while(ti<tl) {
            if(s[si] == t[ti]) ++si;
            ++ti;
        }
        
        return si == sl;
    }
};