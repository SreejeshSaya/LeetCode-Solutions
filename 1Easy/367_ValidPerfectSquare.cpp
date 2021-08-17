class Solution {
public:
    bool isPerfectSquare(int x) {
        int l = 0;
        int r = x;
        unsigned long long int m;
        unsigned long long int p;
        while(l<=r){
            m = (l+r)/2;
            p = m*m;
            if(p == x)
                return true;
            else if(p > x)
                r = m-1;
            else
                l = m+1;
        }
        return false;
    }
};