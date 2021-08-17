class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1) return false;
        
        if((n&(n-1))!=0) return false;
        int z=0;
        while(n!=1) {
            n>>=1;
            ++z;
        }
        return z%2==0;
    }
};