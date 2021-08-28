class Solution {
public:
    int numberOfMatches(int n) {
        int numMatches=0;
        while(n!=1) {
            if((n&1) == 0) {
                n/=2;
                numMatches += n;
            }
            else {
                numMatches += (n-1)/2;
                n = (n-1)/2 + 1;
            }
        }
        return numMatches;
    }
};