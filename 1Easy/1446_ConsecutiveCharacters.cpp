class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int power=1;
        for(int i=0; i<n; ++i) {
            int l=1;
            while(s[i+l] == s[i]) ++l;
            power = max(power, l);
            i+=l-1;
        }
        
        return power;
    }
};