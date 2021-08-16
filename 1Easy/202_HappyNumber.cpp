class Solution {
public:
    int solve(int n){
        int sum=0;
        int digit;
        while(n){
            digit=n%10;
            sum+=(digit * digit);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> s;
        s.insert(n);
        while(true){
            if(n==1)
                return true;
            n=solve(n);
            if(s.count(n)==1)
                return false;
            s.insert(n);
        }
        return false;
    }
};