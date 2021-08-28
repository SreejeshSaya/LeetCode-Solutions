class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num=0;
        for(char c: columnTitle) {
            int v = c - 'A';
            num = num*26 + (v+1);
        }
        
        return num;
    }
};