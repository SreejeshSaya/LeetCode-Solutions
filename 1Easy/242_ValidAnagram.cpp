class Solution {
public:
    bool isAnagram(string s, string t) {
        int sAlpha[26] = {0};
        int tAlpha[26] = {0};
        for(char c: s) ++sAlpha[c-'a'];
        for(char c: t) ++tAlpha[c-'a'];
        
        for(int i=0; i<26; ++i) if(sAlpha[i]!=tAlpha[i]) return false;
        return true;
    }
};