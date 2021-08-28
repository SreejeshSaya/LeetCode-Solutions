class Solution {
public:
    int longestPalindrome(string s) {
        int f[128] ={0};
        for(char c: s) ++f[c];
        
        int ml=0;
        bool isOdd = false;
        for(int i: f) {
            ml += i/2 * 2;
            if(i&1) isOdd=true;
        }
        return ml + ((isOdd) ? 1 : 0);
    }
};