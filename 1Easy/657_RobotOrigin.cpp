class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0;
        for(char s: moves) {
            if(s=='U') ++y;
            else if(s=='L') --x;
            else if(s=='R') ++x;
            else if(s=='D') --y;
        }
        return x==0 && y==0;
    }
};