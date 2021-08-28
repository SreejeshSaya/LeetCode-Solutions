class Solution {
public:
    bool checkPerfectNumber(int n) {
        if(n==1) return false;
        
        int s=1;
        int i;
        for(i=2; (i*i)<n; ++i) {
            if(n%i==0) s+= (i+n/i);
        }
        if(i*i == n) s+=i;
        
        return s==n;
    }
};