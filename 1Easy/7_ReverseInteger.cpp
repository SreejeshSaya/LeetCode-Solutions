// Own
class Solution {
public:
    int reverse(int x) {
        bool n = false;
        if(x<0) {
            n = true;
            x*=-1;
        }
        int r=0;
        while(x) {
            if((static_cast<long long int>(r*10) + x%10) > INT_MAX) return 0;
            r = r*10 + (x%10);
            x/=10;
        }
        if(n) r*=-1;
        return r;
    }
};

// Better
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};