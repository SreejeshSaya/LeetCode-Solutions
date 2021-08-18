// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1) return 1;
        int l=1, r=n;
        int m;
        while(l<r) {
            m= (l/2)+(r/2);
            if(isBadVersion(m)) r = m;
            else l = m+1;
        }
        return l;
    }
};