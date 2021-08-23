class Solution {
public:
    int bulbSwitch(int n) {
        int bCount=0;
        for(int i=1; i*i <= n; ++i) ++bCount;
        return bCount;
    }
};