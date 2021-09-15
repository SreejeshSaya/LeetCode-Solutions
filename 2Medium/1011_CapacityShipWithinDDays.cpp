class Solution {
private:
    bool canShip(vector<int> &weights, int days, int c) {
        int t=0;
        for(int w: weights) {
            t += w;
            if(t > c) {
                --days;
                if(days == 0) return false;
                t = w;
            }
        }
        return days > 0;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        
        int c;
        while(l<r) {
            c = (l+r)/2;
            if(canShip(weights, days, c)) r=c;
            else l=c+1;
        }
        return l;
    }
};