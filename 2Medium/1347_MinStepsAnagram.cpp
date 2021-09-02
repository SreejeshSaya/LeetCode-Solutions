class Solution {
public:
    int minSteps(string s, string t) {
        int steps=0;
        int sAlpha[26] = {0};
        int tAlpha[26] = {0};
        
        for(char c: s) ++sAlpha[c-'a'];
        for(char c: t) ++tAlpha[c-'a'];
        
        for(int i=0; i<26; ++i) {
            steps += max(0, sAlpha[i] - tAlpha[i]);
        }
        
        return steps;
    }
};