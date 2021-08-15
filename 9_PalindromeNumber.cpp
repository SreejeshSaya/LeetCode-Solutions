class Solution {
public:
    bool isPalindrome(int x) {
        long long int i = (long long int) x;
        if(x<0 || (x%10 == 0 && x!=0))
            return false;
        
        long long int s=0;
        while(x) {
            s = s*10 + x%10;
            x/=10;
        }
        return s==i;
    }
};