class Solution {
public:
    char findTheDifference(string s, string t) {
        int sCnt[26] = {0};
        int tCnt[26] = {0};
        
        for(char c: s) ++sCnt[c-'a'];
        for(char c: t) ++tCnt[c-'a'];
        
        for(int i=0; i<26; ++i) {
            if(tCnt[i] == (sCnt[i]+1)) return 'a'+i;
        }
        return ' ';
    }
};