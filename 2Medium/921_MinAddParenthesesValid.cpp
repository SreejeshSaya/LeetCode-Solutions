class Solution {
public:
    int minAddToMakeValid(string s) {
        int steps=0;
        int b=0;
        for(char p: s) {
            b += (p=='(') ? 1: -1;
            if(b == -1) {
                ++steps;
                b = 0;
            }
        }
        return b+steps;
    }
};