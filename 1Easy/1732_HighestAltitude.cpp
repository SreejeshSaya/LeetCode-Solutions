class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int h=0;
        int n=gain.size();
        vector<int> altitude(n+1, 0);
        for(int i=1; i<=n; ++i) {
            altitude[i] = altitude[i-1] + gain[i-1];
            h = max(h, altitude[i]);
        }
        return max(h, 0);
    }
};